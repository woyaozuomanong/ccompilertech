gcc -Wall -g -O0 -fPIC -c simple.c
gcc -shared simple.o -Wl,--version-script,simpleVersionScript -o libsimple.so.1.0.0
rm ../sharedLib/libsimple.so
ln -s libsimple.so.1.0.0 ../sharedLib/libsimple.so
