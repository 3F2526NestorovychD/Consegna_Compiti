#include <stdio.h>
#include <stdlib.h>

int main(void) {
	const int N = 20;
	int v[N];

	printf("Riempimento automatico del vettore casuale (1..100): \n");
	for (int i = 0; i < N; i++) {
		v[i] = (rand() % 100) + 1;
		printf("%d ", v[i]);
	}

	int found = 0;
	for (int i = 0; i < N; i++) {
		if (v[i] < 10) {
			found = 1;
			break;
		}
	}

	if (found)
		printf("\nEsiste almeno un numero minore di 10 nel vettore.\n");
	else
		printf("\nNessun numero minore di 10 nel vettore.\n");

	system("PAUSE");
	return 0;
}
