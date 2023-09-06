#include <stdio.h>
#include <stdlib.h>

void unicos(int num)
{
	switch(num)
	{
	case 0: break;
	case 1: printf ("uno");
	break;
	case 2: printf ("dos");
	break;
	case 3: printf ("tres");
	break;
	case 4: printf ("cuatro");
	break;
	case 5: printf ("cinco");
	break;
	case 6: printf ("seis");
	break;
	case 7: printf ("siete");
	break;
	case 8: printf ("ocho");
	break;
	case 9: printf ("nueve");
	break;
	case 10: printf ("diez");
	break;
	case 11: printf ("once");
	break;
	case 12: printf ("doce");
	break;
	case 13: printf ("trece");
	break;
	case 14: printf ("catorce");
	break;
	case 15: printf ("quince");
	break;
	case 16: printf ("dieciseis");
	break;
	case 17: printf ("diecisiete");
	break;
	case 18: printf ("dieciocho");
	break;
	case 19: printf ("diecinueve");
	break;
	case 20: printf ("veinte");
	break;
	case 21: printf ("veintiuno");
	break;
	case 22: printf ("veintidos");
	break;
	case 23: printf ("veintitres");
	break;
	case 24: printf ("veinticuatro");
	break;
	case 25: printf ("veinticinco");
	break;
	case 26: printf ("veintiseis");
	break;
	case 27: printf ("veintisiete");
	break;
	case 28: printf ("veintiocho");
	break;
	case 29: printf ("veintinueve");
	break;
	case 30: printf ("treinta");
	
}
}

void decenas(int num)
{
		if(num / 10 == 2)
		{
			printf ("veinte");
		}
		else if(num / 10 == 3)
		{
			printf ("treinta");
		}
		else if(num / 10 == 4)
		{
			printf ("cuarenta");
		}
		else if(num / 10 == 5)
		{
			printf ("cincuenta");
		}
		else if(num / 10 == 6)
		{
			printf ("sesenta");
		}
		else if(num / 10 == 7)
		{
			printf ("setenta");
		}
		else if(num / 10 == 8)
		{
			printf ("ochenta");
		}
		else if(num / 10 == 9)
		{
			printf ("noventa");
		}

	if(num % 10 > 0)
	{
		printf (" y ");
	}
	
	num = num % 10;
	
	unicos(num);

	}

int main() {
	
	int num;
	
	printf ("ingrese un numero: \n");
	scanf ("%d",&num);
	
	if(num>=1 && num<=30)
	{
		unicos(num);
	}
	else
	{
		if(num>30 && num<=99)
		{
			decenas(num);
		}
	}
	
	return 0;
}
