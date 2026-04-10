#include <stdio.h>
#include <stdlib.h>

int main() {
	int v[] = { 2, 5, 7, 10, 14, 18, 21, 25, 30 };
	int campi_usati = 9;
	int x = 0;
	int pos = -1;

	printf("===Vettore ordinato===\n");
	for (int i = 0; i < campi_usati; i++) {
		printf("%d ", v[i]);
	}
	printf("\n\nNumero da eliminare: ");
	if (scanf("%d", &x) != 1) {
		printf("Input non valido.\n");
		system("PAUSE");
		return 1;
	}

	for (int i = 0; i < campi_usati; i++) {
		if (v[i] == x) {
			pos = i;
			break;
		}
	}

	if (pos == -1) {
		printf("Numero non trovato.\n");
	} else {
		for (int i = pos; i < campi_usati - 1; i++) {
			v[i] = v[i + 1];
		}
		campi_usati--;
		
		printf("\n===Vettore dopo eliminazione===\n");
		for (int i = 0; i < campi_usati; i++) {
			printf("%d ", v[i]);
		}
		printf("\n");
	}

	system("PAUSE");
	return 0;
}
