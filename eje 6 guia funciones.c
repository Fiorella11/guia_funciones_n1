#include <stdio.h>

float numeroP (float num1)
{
	if (num1>0)
	{
		printf ("0. El numero %f es positivo\n",num1);
	}
	return num1;
}
float numeroN (float num1)
{
	if (num1<0)
	{
		float numposi;
		numposi=(num1*(-num1))/num1;
		printf ("1. El numero %.1f es negativo\n",numposi);
	}
	return num1;
}

int main() {
	
	float num1;
	
	printf ("ingrese un numero:\n");
	scanf ("%f",&num1);
	
	numeroP (num1);
	numeroN ( num1);
	
	return 0;
}

