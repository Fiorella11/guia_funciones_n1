#include <stdio.h>

void simbolo (int num);

int main() {
	int num;
	
	printf ("ingrese un numero entero: \n");
	scanf ("%d",&num);
	
	simbolo (num);
	
	return 0;
}
void simbolo (int num)
{
	printf ("el simbolo correspondiente al numero %d es: %c \n",num,(char)num);
}


