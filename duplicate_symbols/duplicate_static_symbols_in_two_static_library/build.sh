gcc -Wall -g -O0 -IlibFirst -IlibSecond -c main.c
gcc main.o -LlibFirst -lfirst -LlibSecond -lsecond -o clientApp
