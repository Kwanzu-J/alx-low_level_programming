#!/bin/bash
gcc -c -fPIC *.c
rm 2-strncpy.o
gcc -shared -o liball.so *.o
