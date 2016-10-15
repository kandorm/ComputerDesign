
# PlanAhead Launch Script for Post-Synthesis pin planning, created by Project Navigator

create_project -name alu -dir "E:/Class/5/computer_design/FPGA/alu/planAhead_run_1" -part xc3s1200efg320-4
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "E:/Class/5/computer_design/FPGA/alu/alu.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {E:/Class/5/computer_design/FPGA/alu} }
set_param project.pinAheadLayout  yes
set_property target_constrs_file "alu.ucf" [current_fileset -constrset]
add_files [list {alu.ucf}] -fileset [get_property constrset [current_run]]
link_design
