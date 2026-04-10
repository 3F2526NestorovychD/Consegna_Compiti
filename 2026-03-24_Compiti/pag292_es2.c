#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAMES 20
#define MAX_LEN 40

int main() {
	char nomi[MAX_NAMES][MAX_LEN] = {
		"Luca",
		"Marco",
		"Anna",
		"Giulia",
		"Paolo",
		"Sara",
		"Matteo",
		"Elena"
	};
	int n = 8;

	printf("===Elenco iniziale===\n");
	for (int i = 0; i < n; i++) {
		printf("%s\n", nomi[i]);
	}

	int min_idx = 0;
	int max_idx = 0;
	for (int i = 1; i < n; i++) {
		if (strcmp(nomi[i], nomi[min_idx]) < 0) 
			min_idx = i;
		
		if (strcmp(nomi[i], nomi[max_idx]) > 0) 
			max_idx = i;
		
	}

	printf("\nPrimo nome in ordine alfabetico: %s\n", nomi[min_idx]);
	printf("Ultimo nome in ordine alfabetico: %s\n\n", nomi[max_idx]);

	system("PAUSE");
	return 0;
}
