#!/bin/bash
gcc -c -fpic -Wall -Werror *.c
gcc -shared -o liball.so *.o
