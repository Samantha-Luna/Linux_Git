#include <stdio.h>

int main (void)
{
	int cnt =0;
	
	while(1)
	{
		printf("contador %d \n", cnt++);
		printf("contador %d \n", cnt++);
		printf("contador %d \n", cnt++);
		
		if(cnt >=15)
		{   break;}
		if (cnt ==9)
		{   continue;}
		
		printf("contador %d \n", cnt++);
		printf("contador %d \n", cnt++);
		printf("contador %d \n", cnt++);
		
	}

	printf("Valor final del contador %d \n");
}		
	
		
		
		
