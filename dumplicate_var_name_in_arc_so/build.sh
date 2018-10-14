gcc -Wall -g -O0 -I../staticLib -I../sharedLib -c main.c
gcc main.o -Wl,-lstaticlib \
           -Wl,-lshlib     \
           -o clientApp
