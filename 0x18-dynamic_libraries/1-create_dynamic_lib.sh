#!/bin/bash
gcc -c -fPIC *.c
ar -rc liball.a *.o
ranlib liball.a
