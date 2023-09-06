#include <stdio.h>
#include <stdio.h>
float promedio (float notas,float acu);

int main() {
	float notas,acu=0,prom;
	int i;
	for (i=0; i<5; i++)
	{
	printf ("ingrese las notas del alumno: \n");
	scanf ("%f",&notas);
	acu=acu+notas;
	}
	
	promedio (notas,acu);
	
	return 0;
}

float promedio (float notas,float acu)
{
	float prom;
	
	prom=acu/5;
/*	printf ("el promedio es %.3f\n",prom);*/
/*	acu=0;*/
	
	if (prom>=9 && prom<=10)
	{
	printf ("el promedio (%.3f) es categoria 4\n",prom);
	acu=0;
	}
	if (prom>=7 && prom<=8)
	{
		printf ("el promedio (%.3f) es categoria 3\n",prom);
		acu=0;
	}
	if (prom>=6 && prom<7)
	{
		printf ("el promedio (%.3f) es categoria 2\n",prom);
		acu=0;
	}
	if (prom>=5 && prom<6)
	{
		printf ("el promedio (%.3f) es categoria 1\n",prom);
		acu=0;
	}
	if (prom<5)
	{
		printf ("el promedio (%.3f) es categoria 0\n",prom);
		acu=0;
	}

	return 0;
}
