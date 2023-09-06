#include <stdio.h>
#include <stdlib.h>

void numero (float num1,float num2,float num3)
{
	float sum,med;
	printf ("ingrese un numero:\n");
	scanf ("%f",&num1);
	printf ("ingrese un numero:\n");
	scanf ("%f",&num2);
	printf ("ingrese un numero:\n");
	scanf ("%f",&num3);
	sum=num1+num2+num3;
	med=sum/3;
	printf ("la media de los dos numeros es: %.2f\n ",med);
}

int main() {
	float num1,num2,num3;
	numero (num1,num2,num3);
	
	return 0;
}

