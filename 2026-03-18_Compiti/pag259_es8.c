#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n = 0;

	printf("Inserisca N (numero pari): ");
	if (scanf("%d", &n) != 1 || n <= 0 || n % 2 != 0)
		return 1;

	int v[n];
	printf("Inserimento automatico di %d numeri interi: \n", n);
	for (int i = 0; i < n; i++) {
		v[i] = rand() % 100;
		printf("%d ", v[i]);
	}

	int conteggio = 0;
	for (int i = 0; i < n - 1; i++) {
		if (v[i] == v[i + 1])
			conteggio++;
	}

	printf("\n\nVi sono %d coppie di numeri uguali consecutivi\n", conteggio);
	

	system("PAUSE");
	return 0;
}
