!#/bin/bash

# compile .c files into object files
gcc -c *.c

# create static library
ar rc liball.a *.o
