#!/bin/bash
gcc -c -Wall -Werror -Wextra *.c
ar -rc libnall.a *.o
ranlib liball.a
