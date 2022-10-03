#!/bin/bash

gcc -c *.c

liball.a *.o
ranlib liball.a

