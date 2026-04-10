#include <stdio.h>
#include <stdlib.h>

int main() {
	int valori[10];
	int i;
	int tutti_pari = 1;

	printf("Inserimento dei valori: ");
	for (i = 0; i < 10; i++) {
		valori[i] = rand() % 100;
		printf("%d ", valori[i]);
	}

	for (i = 0; i < 10; i += 2) {
		if (valori[i] % 2 != 0) {
			tutti_pari = 0;
			break;
		}
	}

	printf("\n");

	if (tutti_pari) {
		printf("In tutte le posizioni pari c'e' un numero pari.\n");
	} else {
		printf("Non tutte le posizioni pari contengono un numero pari.\n");
	}

	printf("\n");

	system("PAUSE");
	return 0;
}
