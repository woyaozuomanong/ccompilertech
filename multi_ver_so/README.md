本例子是为了试验升级动态链接库版本的功能。

1.0.0版：    simple.h文件中导出符号为first_function, second_function, third_function
             simpleVersionScript文件中定义了LIBSIMPLE_1.0,定义了global符号first_function, second_function, third_function



1.1.0版：    simple.h文件中导出符号增加了fourth_function, fifth_function
             simpleVersionScript文件中定义了LIBSIMPLE_1.1,定义了global符号fourth_function,这样就屏蔽了simple.h中导出的fifth_function



2.0.0版：    simple.h文件中导出符号为first_function, second_function, third_function,fourth_function, fifth_function
             simple.c文件中增加了第二个first_function，采用内嵌汇编的方法将两个first_function区别开来，其中@@所在的函数为默认函数
             simpleVersionScript文件中定义了LIBSIMPLE_2.0,新增加了global符号first_function 



3.0.0版：    simple.h文件中导出符号为first_function, second_function, third_function,fourth_function, fifth_function，其中first_function根据SIMPLE_VERSION_3_0宏的存在与否选用不同的版本
             simple.c文件中增加了第三个first_function，采用内嵌汇编的方法将三个first_function区别开来，其中@@所在的函数为默认函数
             simpleVersionScript文件中定义了LIBSIMPLE_3.0,新增加了global符号first_function 
             buildfourth.sh文件中第一行增添了 -DSIMPLELIB_VERSION_3_0  编译参数，表示在编译时要导出两个输入参数版本的first_function 


采用这些方法后，不同版本的同名符号可以共存。在动态链接库大版本号升级时原有的应用程序也无需重新编译
