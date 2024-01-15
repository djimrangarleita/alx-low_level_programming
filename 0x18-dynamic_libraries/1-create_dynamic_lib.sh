#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=c99 -shared -Wl,-soname,liball.so -o liball.so -fPIC *.c
