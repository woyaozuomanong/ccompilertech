#include <stdio.h>
#include "libFirst/staticlibfirstexports.h"
#include "libSecond/staticlibsecondexports.h"


int  main()
{
	staticlibfirst_function(1);
	staticlibsecond_function(2);
	return 0;
}
