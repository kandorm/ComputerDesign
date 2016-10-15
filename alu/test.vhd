--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   00:40:14 10/16/2016
-- Design Name:   
-- Module Name:   E:/Class/5/computer_design/FPGA/alu/test.vhd
-- Project Name:  alu
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: alu
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY test IS
END test;
 
ARCHITECTURE behavior OF test IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT alu
    PORT(
         clk : IN  std_logic;
         rst : IN  std_logic;
         sw : IN  std_logic_vector(15 downto 0);
         l : OUT  std_logic_vector(15 downto 0);
         seg : OUT  std_logic_vector(6 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal rst : std_logic := '0';
   signal sw : std_logic_vector(15 downto 0) := (others => '0');

 	--Outputs
   signal l : std_logic_vector(15 downto 0);
   signal seg : std_logic_vector(6 downto 0);

   -- Clock period definitions
   constant clk_period : time := 100 ms;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: alu PORT MAP (
          clk => clk,
          rst => rst,
          sw => sw,
          l => l,
          seg => seg
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      rst <= '0';
		wait for clk_period;
		rst <= '1';
		sw <= "0000000000000001";
		wait for clk_period;
		sw <= "0000000000000010";
		wait for clk_period;
		sw <= "0000000000000001";
		wait for clk_period;


      wait;
   end process;

END;
