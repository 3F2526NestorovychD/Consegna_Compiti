#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char a1[5][20] = {"Rossi", "Bianchi", "Verdi", "Neri", "Gallo"};
	char a2[5][20] = {"Costa", "Rossi", "Ferri", "Gallo", "Sanna"};
	char nome[20];
	int in_a1 = 0;
	int in_a2 = 0;

	printf("Inserisci il nome dell'atleta: ");
	scanf("%19s", nome);

	for (int i = 0; i < 5; i++) {
		if (strcmp(nome, a1[i]) == 0) {
			in_a1 = 1;
		}
		if (strcmp(nome, a2[i]) == 0) {
			in_a2 = 1;
		}
	}

	if (in_a1 && in_a2) {
		printf("Il nome [%s] compare in entrambi i vettori.\n", nome);
	} else if (in_a1) {
		printf("Il nome [%s] compare solo in a1.\n", nome);
	} else if (in_a2) {
		printf("Il nome [%s] compare solo in a2.\n", nome);
	} else {
		printf("Il nome [%s] non compare in nessun vettore.\n", nome);
	}

	system("PAUSE");
	return 0;
}
