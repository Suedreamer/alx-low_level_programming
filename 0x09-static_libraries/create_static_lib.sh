#!/bin/bash

# Compile all C source files in current directory into object files
gcc -c *.c

# Create a static library called liball.a from the object files
ar rc liball.a *.o

# Index the library for faster linking
ranlib liball.a

# Remove the object files
rm *.o

