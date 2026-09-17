#include <stdio.h>
#include <stdlib.h>
void controllo()
{
	char nome[15];
	int eta;
	printf ("Inserisca il nome: ");
	
	scanf("%s", &nome);
	printf ("Inserisca l'eta': ");
	scanf("%d", &eta);
	if (eta >= 18)
	printf("%s e' maggiorenne\n",nome);
    else
    printf("%s e' minorenne\n",nome);

}

int main() {

	controllo();
	system("pause");
	return 0;
}

