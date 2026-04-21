
#include <stdio.h>
#include <stdlib.h>

#define MAX_STUDENTI 30
#define MAX_NOME 40

float media_non_assenti(const int voti[], int n);
int indice_massimo(const int voti[], int n);
void stampa_insufficienti(const char nomi[][MAX_NOME], const int voti[], int n);
float percentuale_assenti(const int voti[], int n);

int main() {
	char nomi[MAX_STUDENTI][MAX_NOME] = {"Luca", "Marta", "Giulia", "Paolo", "Sara", "Marco", "Elena", "Davide", "Chiara", "Simone", "Laura", "Anna"};
	int voti[MAX_STUDENTI];
	int n = 12;
	int scelta;

	for (int i = 0; i < n; i++) {
		voti[i] = rand() % 11;
	}

	do {
		printf("\n====MENU====\n");
		printf("1. Media dei voti (escludendo assenti)\n");
		printf("2. Nome dello studente con voto massimo\n");
		printf("3. Elenco insufficienze (esclusi assenti)\n");
		printf("4. Percentuale assenti\n");
		printf("0. Esci\n");
		printf("Scelta: ");
		scanf("%d", &scelta);

		switch (scelta) {
		case 1: {
			float media = media_non_assenti(voti, n);
			printf("Media: %.2f\n", media);
			break;
		}
		case 2: {
			int idx = indice_massimo(voti, n);
			if (idx >= 0)
				printf("Studente con voto massimo: %s (%d)\n", nomi[idx], voti[idx]);
			else
				printf("Errore catturato: Nessun dato valido trovato.\n");
			break;
		}
		case 3:
			stampa_insufficienti(nomi, voti, n);
			break;
		case 4: {
			float perc = percentuale_assenti(voti, n);
			printf("Percentuale assenti: %.2f%%\n", perc);
			break;
		}
		case 0:
			printf("Uscita dal programma.\n");
			break;
		default:
			printf("Scelta non valida, riprova.\n");
		}
	} while (scelta != 0);

	system("pause");
	return 0;
}

float media_non_assenti(const int voti[], int n) {
	int somma = 0, count = 0;
    for (int i = 0; i < n; i++) {
        if (voti[i] != 0) { 
            somma += voti[i];
            count++;
        }
    }
	if (count == 0) {
		return 0.0f;
	}
	return (float)somma / count;
}

int indice_massimo(const int voti[], int n) {
    int max_idx = -1;
    for (int i = 0; i < n; i++) {
        if (voti[i] != 0) { 
            if (max_idx == -1 || voti[i] > voti[max_idx]) {
                max_idx = i;
            }
        }
    }
	return max_idx;
}

void stampa_insufficienti(const char nomi[][MAX_NOME], const int voti[], int n) {
    printf("\n\nStudenti con voto insufficiente (esclusi assenti):\n");
    for (int i = 0; i < n; i++) {
        if (voti[i] != 0 && voti[i] < 6) { 
            printf("%s: %d\n", nomi[i], voti[i]);
        }
    }
}

float percentuale_assenti(const int voti[], int n) {
    int count_assenti = 0;
    for (int i = 0; i < n; i++) {
        if (voti[i] == 0) { 
            count_assenti++;
        }
    }
	return (float)count_assenti / n * 100;
}
