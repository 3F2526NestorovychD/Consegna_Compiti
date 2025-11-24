#include <stdio.h>
#include <stdlib.h>

void operazioni()
{
	float n1,n2,ris;
	char operatore;
	printf ("Inserire il primo numero: ");
	scanf("%f", &n1);
	printf ("Inserire il secondo numero: ");
	scanf("%f", &n2);
	printf ("Inserire l'operatore: ");
	scanf(" %c", &operatore);
	switch (operatore)
	{
		case '+':
			ris = n1 + n2;
			printf("somma = %.3f\n",ris);
			break;
		case '-':
			ris = n1 - n2;
			printf("differenza = %.3f\n",ris);
			break;
		case '*':
			ris = n1 * n2;
			printf("prodotto = %.3f\n",ris);
			break;
		case '/':
			if (n2 == 0)
				printf("errore\n");
			else
			{
				ris = n1/n2;
				printf("divisione = %.3f\n",ris);
			}
			break;
		default:
			printf("Operazione inesistente\n");
			break;
	}
}

int main() {
	operazioni();

	system("pause");
	return 0;
}

