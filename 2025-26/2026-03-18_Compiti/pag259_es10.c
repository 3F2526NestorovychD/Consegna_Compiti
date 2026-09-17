#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n = 0;
	const int N = 100;
	const int SUFF = 6;

	printf("Inserisca il numero di voti: ");
	if (scanf("%d", &n) != 1 || n <= 0 || n > N)
		return 1;

	int voti[N];
	printf("Caricamento automatico di %d voti: \n", n);
	for (int i = 0; i < n; i++) {
		voti[i] = rand() % 11; 
		printf("%d ", voti[i]);
	}

	int count_insuff = 0;
	printf("\n\nVoti insufficienti: ");
	for (int i = 0; i < n; i++) {
		if (voti[i] < SUFF) {
			printf("%d ", voti[i]);
			count_insuff++;
		}
	}
	if (count_insuff == 0)
		printf("nessuno");
	printf("\nTotale voti insufficienti: %d\n", count_insuff);

	int somma = 0;
	for (int i = 0; i < n; i++)
		somma += voti[i];

	float media = (float)somma / n;
	printf("\nMedia dei voti: %.2f\n", media);
	

	system("PAUSE");
	return 0;
}
