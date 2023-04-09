#!/bin/bash
gcc -c *.c               # compile all .c files into object files
ar rcs libmy.a *.o      # create static library from object files
rm *.o                   # remove object files
