#include <stdio.h>
#include <stdLIB.h>
#include <string.h>

void nombre ()
{
	char nombreApe[50];
	printf ("ingrese nombre y apellido:\n");
	gets (nombreApe);
	printf ("tu nombre y apellido es: %s\n",nombreApe);
}

int main() {
	nombre ();
	return 0;
}

