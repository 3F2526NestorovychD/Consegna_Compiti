#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 30
#define MAX_LEN 40

int main() {
	char cognomi[MAX_STUDENTS][MAX_LEN] = {
		"Rossi",
		"Bianchi",
		"Verdi",
		"Galli",
		"Fontana",
		"Russo",
		"Romano",
		"Marino",
		"Greco",
		"Lombardi"
	};
	char temp[MAX_LEN];
	int n = 10;

	printf("===Elenco iniziale (disordinato)===\n");
	for (int i = 0; i < n; i++) {
		printf("%s\n", cognomi[i]);
	}

	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (strcmp(cognomi[j], cognomi[j + 1]) > 0) {
				strcpy(temp, cognomi[j]);
				strcpy(cognomi[j], cognomi[j + 1]);
				strcpy(cognomi[j + 1], temp);
			}
		}
	}

	printf("\n===Elenco in ordine alfabetico===\n");
	for (int i = 0; i < n; i++) {
		printf("%s\n", cognomi[i]);
	}

	system("PAUSE");
	return 0;
}
