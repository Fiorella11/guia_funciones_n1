#include <stdio.h>
#include <stdlib.h>

int horas (int dias)
{
	int hora;
	hora=dias*24;
	
	return hora;
}


int main() {
	int dias;
	
	printf ("ingrese cantidad de dias: \n");
	scanf ("%d",&dias);
	printf ("su equivalente en horas es: %d", horas(dias));
	
	return 0;
}

