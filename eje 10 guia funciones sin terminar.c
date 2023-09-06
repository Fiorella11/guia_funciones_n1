#include <stdio.h>
#include <stdlib.h>
int multi (int num1,int num2);
	
int main() {
	
	int num1,num2;
	
	printf ("ingrese el primer numero:\n");
	scanf ("%d",&num1);
	printf ("ingrese el segundo numero:\n");
	scanf ("%d",&num2);
	
	printf ("el producto entre los dos numeros es: %d\n",multi(num1,num2));
	
	return 0;
}

int multi (int num1,int num2)
{
	int i,mult;
	for (i=1; i<=num2; i++)
	{
		mult=mult+num1;
	}
	return mult;
}

