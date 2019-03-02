#include <stdio.h>
#include "simple.h"

int main()
{
	int nFirst=first_function(1,10);
	int nSecond=second_function(2);
	int nFourth=fourth_function(4);
	int nRetValue=nFirst+nSecond+nFourth;
	printf("first(1,10)+second(2)+fourth(4)=%d\n",nRetValue);
	return nRetValue;
}
