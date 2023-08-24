#!/bin/bash
rm 2-strncpy.o
gcc -Wall -Werror -Wextra -pedantic -shared -fPIC -o liball.so *.c
