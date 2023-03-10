#!/bin/bash
gcc -Wall -Werror -Wextra -c *.c
ar rc liball.a *.o
export LD_LIBRARY_PATH=.:LD_LIBRARY_PATH
