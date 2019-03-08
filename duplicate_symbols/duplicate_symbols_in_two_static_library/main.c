#include <stdio.h>
#include "libFirst/staticlibfirstexports.h"
#include "libSecond/staticlibsecondexports.h"


int  main()
{
	int nRetValue=0;
	nRetValue+=staticlibfirst_function(1);
	nRetValue+=staticlibsecond_function(2);
	nRetValue+=static_duplicate_function(3);
	printf("nRetValue=%d\n",nRetValue);
	return nRetValue;

}
