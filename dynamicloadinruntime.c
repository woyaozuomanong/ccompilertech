#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>

#define PI (3.14)

typedef double (*PSINE_FUNC) (double x);

int main(int argc,char **argv)
{
  void *pHandle;

  pHandle=dlopen("libm-2.27.so",RTLD_LAZY);
  if(NULL==pHandle)
  {
    fprintf(stderr,"%s\n",dlerror());
    return -1;
  }

  PSINE_FUNC pSineFunc=(PSINE_FUNC) dlsym(pHandle,"sin");
  if(NULL==pSineFunc)
  {
    fprintf(stderr,"%s\n",dlerror());
    dlclose(pHandle);
    pHandle=NULL;
    return -1;
  }

  printf("sin(PI/3)=%f\n",pSineFunc(PI/3));
  dlclose(pHandle);
  pHandle=NULL;
  return 0;
}
