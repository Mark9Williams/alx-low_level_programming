#!/bin/bash
#Compile all .c files in the current directory into object files
gcc -c *.c
# Create the static library (liball.a) from the compiled object files
ar rcs liball.a *.o
# Clean up: remove the compiled object files
rm -f *.o
