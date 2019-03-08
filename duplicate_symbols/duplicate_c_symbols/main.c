/*
Attention!!!
this is a example to show duplicate symbols in .c file, if you compile it then error will happen
*/


#include <stdio.h>

int function_with_duplicated_name(int x)
{
	printf("%s\n",__FUNCTION__);
	return 0;
}



int function_with_duplicated_name(int x,int y)
{
	printf("%s\n",__FUNCTION__);
	return 0;
}


int  main()
{
	function_with_duplicated_name(1);
	function_with_duplicated_name(1,2);

}
