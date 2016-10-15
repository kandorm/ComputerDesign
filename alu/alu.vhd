----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    23:30:14 10/15/2016 
-- Design Name: 
-- Module Name:    alu - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL; 
use IEEE.STD_LOGIC_SIGNED.ALL;
use IEEE.NUMERIC_STD.ALL;


-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity alu is
    Port ( clk : in  STD_LOGIC;
           rst : in  STD_LOGIC;
           sw : in  STD_LOGIC_VECTOR (15 downto 0);
           l : out  STD_LOGIC_VECTOR (15 downto 0);
           seg : out  STD_LOGIC_VECTOR (6 downto 0));
end alu;

architecture Behavioral of alu is
	type state is(
		input_operand_A, input_operand_B, input_opcode, output_result, output_sign);
	function compute (
		op : in std_logic_vector (3 downto 0);
		numA : in std_logic_vector (15 downto 0);
		numB : in std_logic_vector (15 downto 0)
	)return std_logic_vector is
	begin
		case op is
			when "0001" => return numA + numB;
			when "0010" => return numA - numB;
			when "0011" => return numA and numB;
			when "0100" => return numA or numB;
			when "0101" => return numA xor numB;
			when "0110" => return not numA;
			when "0111" => return to_stdlogicvector(to_bitvector(numA) sll conv_integer(numB));
			when "1000" => return to_stdlogicvector(to_bitvector(numA) srl conv_integer(numB));
			when "1001" => return to_stdlogicvector(to_bitvector(numA) sra conv_integer(numB));
			when "1010" => return to_stdlogicvector(to_bitvector(numA) rol conv_integer(numB));
			when others => return "0000000000000000";
		end case;
	end function;
	
	function overflow (
		op : in std_logic_vector (3 downto 0);
		numA : in std_logic_vector (15 downto 0);
		numB : in std_logic_vector (15 downto 0);
		result : in std_logic_vector (15 downto 0)
	)return std_logic is
	begin
		case op is
			when "0001" => return (numA(15) and numB(15) and (not result(15))) or ((not numA(15)) and (not numB(15)) and result(15));
			when "0010" => return (numA(15) and (not numB(15)) and (not result(15))) or ((not numA(15)) and numB(15) and result(15));
			when others => return '0';
		end case;
	end function;
	
	signal operant_A : std_logic_vector (15 downto 0) := "0000000000000000";
	signal operant_B : std_logic_vector (15 downto 0) := "0000000000000000";
	signal opcode : std_logic_vector (3 downto 0) := "0000";
	signal result : std_logic_vector (15 downto 0) := "0000000000000000";
	signal sign : std_logic := '0';
	signal current_state, next_state : state;
begin
	process(clk, rst)
	begin
		if(rst='0')then
			current_state <= input_operand_A;
			l <= "0000000000000000";
		elsif(clk'event and clk='1')then
			case current_state is
				when input_operand_A =>
					l <= sw;
					operant_A <= sw;
				when input_operand_B =>
					l <= sw;
					operant_B <= sw;
				when input_opcode =>
					l <= "000000000000"&sw(3 downto 0);
					opcode <= sw(3 downto 0);
					result <= compute(sw(3 downto 0), operant_A, operant_B);
				when output_result =>
					l <= result;
					sign <= overflow(opcode, operant_A, operant_B, result);
				when output_sign =>
					l <= "000000000000000"&sign;
			end case;
			current_state <= next_state;
		end if;
	end process;
	
	process(current_state)
	begin
		case current_state is
			when input_operand_A =>
				seg <= not "1000000";
				next_state <= input_operand_B;
			when input_operand_B =>
				seg <= not "1111001";
				next_state <= input_opcode;
			when input_opcode =>
				seg <= not "0100100";
				next_state <=  output_result;
			when output_result =>
				seg <= not "0110000";
				next_state <= output_sign;
			when output_sign =>
				seg <= not "0011001";
				next_state <= input_operand_A;
		end case;
	end process;

end Behavioral;

