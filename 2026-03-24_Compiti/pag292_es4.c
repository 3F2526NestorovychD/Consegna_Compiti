#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_EMP 10
#define MAX_CODE 20

int main() {
	char codici[MAX_EMP][MAX_CODE] = {
		"RSSMRA80A01F205X",
		"BNCLGU75B12H501T",
		"VRDLGI90C23A662Z",
		"GLLPLA85D04C351Q",
		"FNTMRA78E15E438N",
		"RSSLNZ88F26G273K"
	};
	float stipendi[MAX_EMP] = { 1450.0f, 2100.0f, 1750.0f, 1600.0f, 2300.0f, 1550.0f };
	int n = 6;

	float somma = 0.0f;
	for (int i = 0; i < n; i++) {
		somma += stipendi[i];
	}
	float media = somma / (float) n;

	char sotto_media[MAX_EMP][MAX_CODE];
	int k = 0;
	for (int i = 0; i < n; i++) {
		if (stipendi[i] < media) {
			strcpy(sotto_media[k], codici[i]);
			k++;
		}
	}

	/* opzionale, potrebbe causare problemi se k è 0
	for (int i = 0; i < k - 1; i++) {
		for (int j = 0; j < k - 1 - i; j++) {
			if (strcmp(sotto_media[j], sotto_media[j + 1]) > 0) {
				char temp[MAX_CODE];
				strcpy(temp, sotto_media[j]);
				strcpy(sotto_media[j], sotto_media[j + 1]);
				strcpy(sotto_media[j + 1], temp);
			}
		}
	} */

	printf("Media stipendi: %.2f\n", media);
	printf("\nCodici con stipendio sotto la media:\n");
	if (k == 0) {
		printf("Nessun dipendente sotto la media.\n");
	} else {
		for (int i = 0; i < k; i++) {
			printf("%s\n", sotto_media[i]);
		}
	}

	system("PAUSE");
	return 0;
}
