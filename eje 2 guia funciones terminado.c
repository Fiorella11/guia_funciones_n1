#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>


int main() {
	int i=0,eleccion;
	char resp[3];
	char si[3]="si";
	char contra[6];
	
	printf ("ingrese la contraseņa:\n");
	
	for (i=0; i<6; i++)
	{
		contra[i]=getch();
		printf ("*");
	}

	printf ("\ndesea ver la contraseņa ingresada?\n");
	scanf ("%s",&resp);
	eleccion=strcmp(resp,si);
	
	if (eleccion==0)
	{
		printf ("contraseņa = ");
		for (i=0; i<6; i++) {
			printf("%c", contra[i]);
		}
	}
	

	return 0;
}


