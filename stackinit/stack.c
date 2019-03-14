#include <stdio.h>
#include <elf.h>

int main(int argc,char* argv[])
{
	int *p=(int *)argv;
	char** q=argv;
	int i;
	Elf32_auxv_t * aux;

	printf("Argument count: %d\n",*(p-1));

	for(i=0;i<*(p-1);++i)
	{
		printf("Argument %d:%s\n",i,*(q+i));
	}

	q+=i;
	q++;

	printf("Environment:\n");
	while(*q)
	{
		printf("%s\n",*q++);
	}

	q++;



	printf("Auxiliary Vectors:\n");
	aux=(Elf32_auxv_t*)p;
	while(aux->a_type!=AT_NULL)
	{
		printf("Type:%02d Value:%x\n",aux->a_type,aux->a_un.a_val);
		aux++;
	}

	printf("%s\n",argv[0]);

	return 0;
}
