gcc -g -O0 -c -I../sharedLib main.c
gcc main.o -Wl,-L../sharedLib -Wl,-lsimple -Wl,-R../sharedLib -o firstDemoApp
