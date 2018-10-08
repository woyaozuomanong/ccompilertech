#!/bin/sh

gcc -o dynamicloadinruntime.o -rdynamic dynamicloadinruntime.c -ldl
