#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c
r -rc liball.a *.o
ranlib liball.a
