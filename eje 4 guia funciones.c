#include <stdio.h>
#include <stdlib.h>

float media (float num1,float num2)
{ 
	float sum,med,i;
	
	
	sum=num1+num2;
	med=sum/2;
	
	
	return med;
}

int main() {
	float num1,num2;
	
	printf ("ingrese un numero:\n");
	scanf ("%f",&num1);
	printf ("ingrese un numero:\n");
	scanf ("%f",&num2);
	
	printf ("la media de los dos numeros es: %.2f ",media(num1,num2) );
	
	return 0;
}

