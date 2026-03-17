#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n = 0;
	const int N = 100;

	printf("Inserisca il numero di elementi: ");
	if (scanf("%d", &n) != 1 || n <= 0 || n > N)
		return 1;

	int v[N];
	printf("\nInserimento automatico di %d numeri: \n", n);
	for (int i = 0; i < n; i++) {
		v[i] = rand() % 100; 
		printf("%d ", v[i]);
	}

	int somma_dispari = 0;
	printf("\n\nNumeri in posizioni dispari: ");
	for (int i = 1; i < n; i += 2) {
			printf("%d ", v[i]);
			somma_dispari += v[i];
		
	}
	printf("\nSomma posizioni dispari: %d\n", somma_dispari);

	int somma_pari = 0;
	printf("\n\nNumeri in posizioni pari: ");
	for (int i = 0; i < n; i += 2) {
			printf("%d ", v[i]);
			somma_pari += v[i];
		}
	printf("\nSomma posizioni pari: %d\n", somma_pari);
	

	system("PAUSE");
	return 0;
}
