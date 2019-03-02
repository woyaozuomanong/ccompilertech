gcc -g -O0 -c -DSIMPLELIB_VERSION_3_0 -I../sharedLib main.c
gcc main.o -Wl,-L../sharedLib -Wl,-lsimple -Wl,-R../sharedLib -o fourthDemoApp
