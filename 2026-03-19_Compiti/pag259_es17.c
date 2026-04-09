#include <stdio.h>
#include <stdlib.h>

#define N 100
#define M 10

int main(void) {
	int v1[N];
	int v2[M] = {0};

	printf("Riempimento automatico di %d numeri casuali: \n", N);
	for (int i = 0; i < N; i++) {
		v1[i] = (rand() % 100) + 1;
		printf("%d ", v1[i]);
		
		int indice = (v1[i] - 1) / 10;
		if (indice >= M)
			indice = M - 1;
		v2[indice]++;
	}

	printf("\n\nDistribuzione per fasce di 10:\n");
	for (int i = 0; i < M; i++) {
		int inizio = i * 10 + 1;
		int fine = (i + 1) * 10;
		if (i == M - 1)
			fine = 100;
		printf("Fascia %2d-%2d: [%3d numeri]\n", inizio, fine, v2[i]);
	}

	printf("\n");
	system("PAUSE");
	return 0;
}   
