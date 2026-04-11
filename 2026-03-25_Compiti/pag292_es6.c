#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SQUADRE 10
#define MAX_NAME_LEN 40

void print_serie_a(const char squadre[][MAX_NAME_LEN],  const char serie[],  const int punti[]) {
	int i = 0;
	printf("\nSerie A:\n");
	for (i = 0; i < MAX_SQUADRE; i++) {
		if (serie[i] == 'A') {
			printf("- %s: %d punti\n", squadre[i], punti[i]);
		}
	}
}

void build_and_print_classif_b(const char squadre[][MAX_NAME_LEN], const char serie[]) {
	char classif[MAX_SQUADRE][MAX_NAME_LEN];
	int classifCount = 0;

	for (int i = 0; i < MAX_SQUADRE; i++) {
		if (serie[i] == 'B') {
			strcpy(classif[classifCount], squadre[i]);
			classifCount++;
		}
	}

	printf("\nCLASSIF (Serie B):\n");
	for (int i = 0; i < classifCount; i++) {
		printf("- %s\n", classif[i]);
	}
}

void print_champion_a(const char squadre[][MAX_NAME_LEN], const char serie[], const int punti[]) {
	int bestIndex = -1;
	int bestPoints = -1;

	for (int i = 0; i < MAX_SQUADRE; i++) {
		if (serie[i] == 'A' && punti[i] > bestPoints) {
			bestPoints = punti[i];
			bestIndex = i;
		}
	}

	if (bestIndex >= 0) {
		printf("\nCampione serie A: %s [%d punti]\n",squadre[bestIndex], bestPoints);
	} else {
		printf("\nNessuna squadra in serie A è campione.\n");
	}
}

int main() {
	char squadre[MAX_SQUADRE][MAX_NAME_LEN] = {
		"Atalanta",
		"Bari",
		"Bologna",
		"Cagliari",
		"Empoli",
		"Frosinone",
		"Genoa",
		"Palermo",
		"Pisa",
		"Sassuolo"
	};
	char serie[MAX_SQUADRE] = { 'A', 'B', 'A', 'B', 'A', 'B', 'A', 'B', 'B', 'A' };
	int punti[MAX_SQUADRE] = { 62, 48, 55, 44, 50, 41, 60, 46, 42, 58 };

	int scelta = -1;
	while (scelta != 0) {
		printf("\nMenu:\n");
		printf("1 --> Elenco squadre di serie A con punti\n");
		printf("2 --> Costruisci e stampa vettore CLASSIF (serie B)\n");
		printf("3 --> Cerca squadra campione di serie A\n");
		printf("0 --> Esci\n");
		printf("Scelta: ");

		if (scanf("%d", &scelta) != 1) {
			printf("\nScelta non valida.\n");
			scelta = 0;
		}

		switch (scelta) {
			case 1: {
				print_serie_a(squadre, serie, punti);
				break;
			}
			case 2: {
				build_and_print_classif_b(squadre, serie);
				break;
			}
			case 3: {
				print_champion_a(squadre, serie, punti);
				break;
			}
			case 0:
				printf("\nProgramma terminato.\n");
				break;
			default:
				printf("\nErrore catturato: scelta non valida.\n");
		}
	}

	system("PAUSE");
	return 0;
}
