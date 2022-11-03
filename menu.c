#include <stdio.h>

char op='M';

int main(void)
{	
	printf("Que operacion va a realizar? \n");
	

while (1){
	
	printf("Suma (S) o resta (R) o Exit (X) \n");

	op=getchar();
	
	printf("Opcion: %c\n", op);

	if(op=='S')
	{
		printf("Suma \n \n");
		continue;
	}	
	if(op=='R')
	{
		printf("Resta \n \n");
		continue;
	}
	if(op=='X')
	{
		printf("Salio de menu \n \n");
		break;
	}
	
	}
}
