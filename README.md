# Warui

##INSTRUCTIONS (READ CAREFULLY) 


### 1. Compile Program -
To compile the program with code coverage flags, run:

"make"                  

### 1.5. Before Running
Before running script you will need to run:

"chmod +x run_all.sh"

This is necessary if you haven't done so as when you clone through GitHub, permissions 
aren't carried through making you unable to run script.

### 2. Run Program Using Set Inputs VIA "input.txt" -
Will run the program using a consistent input file to maintain consistency when
testing and going over coverage. Run script to go through all different input files:

"run_all.sh" 

### 3. Generate Coverage report -
Now to generate the code coverage report, run:

"gcov -r Warui.cc"      

### 4. Analyze Coverage Report -
In order to gather line-by-line coverage details for the report, run:

"vim Warui.cc.gcov" 

*Numbers indicate how often lines were executed, "####" indicates unexecuted code
*Lines with "-:" are non-executable 

## To clean, run command:

"make clean"

*Remember to clean before pushing to GitHub, cleans unnecessary files
