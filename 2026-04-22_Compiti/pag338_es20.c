
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_AGENTI 20
#define NUM_MESI 12
#define MAX_NOME 40
#define MAX_INDIRIZZO 60

void inizializza_dati(char nomi[][MAX_NOME], char indirizzi[][MAX_INDIRIZZO], float fatturato[NUM_AGENTI][NUM_MESI]);
void stampa_fatturato_annuo(const char nomi[][MAX_NOME], const char indirizzi[][MAX_INDIRIZZO], const float fatturato[NUM_AGENTI][NUM_MESI]);
int indice_max_fatturato_annuo(const float fatturato[NUM_AGENTI][NUM_MESI]);
void stampa_totale_mese(const float fatturato[NUM_AGENTI][NUM_MESI]);
int fatturato_annuo(const float fatturato[NUM_AGENTI][NUM_MESI], int agente);

int main() {
	char nomi[NUM_AGENTI][MAX_NOME];
	char indirizzi[NUM_AGENTI][MAX_INDIRIZZO];
	float fatturato[NUM_AGENTI][NUM_MESI];
	int scelta;

	inizializza_dati(nomi, indirizzi, fatturato);

	do {
		printf("\n====MENU====\n");
		printf("1. Stampa nominativo, indirizzo e fatturato annuo per agente\n");
		printf("2. Stampa agente con fatturato annuo massimo\n");
		printf("3. Stampa totale fatturato per mese\n");
		printf("0. Esci\n");
		printf("Scelta: ");
		scanf("%d", &scelta);

		switch (scelta) {
		case 1:
			stampa_fatturato_annuo(nomi, indirizzi, fatturato);
			break;
		case 2: {
			int idx = indice_max_fatturato_annuo(fatturato);
			if (idx >= 0)
				printf("Agente con fatturato massimo: %s [%d]\n", nomi[idx], fatturato_annuo(fatturato, idx));
			else
				printf("Errore catturato: Nessun dato valido.\n");
			break;
		}
		case 3:
			stampa_totale_mese(fatturato);
			break;
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

void inizializza_dati(char nomi[][MAX_NOME], char indirizzi[][MAX_INDIRIZZO], float fatturato[NUM_AGENTI][NUM_MESI]) {
	const char *nomi_base[NUM_AGENTI] = {
		"Luca", "Marta", "Giulia", "Paolo", "Sara",
		"Marco", "Elena", "Davide", "Chiara", "Simone",
		"Laura", "Anna", "Giorgio", "Irene", "Fabio",
		"Nadia", "Andrea", "Clara", "Stefano", "Beatrice"
	};
	const char *indirizzi_base[NUM_AGENTI] = {
		"Via Roma 10", "Via Milano 12", "Via Torino 5", "Via Napoli 18", "Via Firenze 7",
		"Via Bologna 14", "Via Venezia 9", "Via Genova 3", "Via Cagliari 20", "Via Bari 16",
		"Via Trento 6", "Via Trieste 11", "Via Parma 2", "Via Verona 8", "Via Modena 13",
		"Via Pisa 4", "Via Lecce 15", "Via Salerno 19", "Via Ancona 1", "Via Siena 17"
	};

	for (int i = 0; i < NUM_AGENTI; i++) {
		strncpy(nomi[i], nomi_base[i], MAX_NOME - 1);
		nomi[i][MAX_NOME - 1] = '\0';
		strncpy(indirizzi[i], indirizzi_base[i], MAX_INDIRIZZO - 1);
		indirizzi[i][MAX_INDIRIZZO - 1] = '\0';
		for (int m = 0; m < NUM_MESI; m++) {
			fatturato[i][m] = 1000.0f + (float)(i * 50 + m * 25);
		}
	}
}

void stampa_fatturato_annuo(const char nomi[][MAX_NOME], const char indirizzi[][MAX_INDIRIZZO], const float fatturato[NUM_AGENTI][NUM_MESI]) {
    printf("\n\nFatturato annuo per agente:\n");
	for(int i = 0; i < NUM_AGENTI; i++){
        float totale_annuo = fatturato_annuo(fatturato, i);
        printf("%s, %s: Fatturato annuo = %.2f\n", nomi[i], indirizzi[i], totale_annuo);
    }
}

int indice_max_fatturato_annuo(const float fatturato[NUM_AGENTI][NUM_MESI]) {
    float max_fatturato = fatturato[0][0];
    int max_idx = 0;

    for(int i = 0; i < NUM_AGENTI; i++){
        float totale_annuo = fatturato_annuo(fatturato, i);
        if(totale_annuo > max_fatturato){
            max_fatturato = totale_annuo;
            max_idx = i;
        }
    }
	
	return max_idx;
}

void stampa_totale_mese(const float fatturato[NUM_AGENTI][NUM_MESI]) {
	printf("\nTotale fatturato per mese:\n");
    for(int i = 0; i < NUM_MESI; i++){
        float totale_mesnile = 0.0f;
        for(int j = 0; j < NUM_AGENTI; j++){
            totale_mesnile += fatturato[j][i];
        }
        printf("Mese %d: %.2f\n", i + 1, totale_mesnile);
    }
}

int fatturato_annuo(const float fatturato[NUM_AGENTI][NUM_MESI], int agente) {
    float totale = 0.0f;
    for(int j = 0; j < NUM_MESI; j++){
        totale += fatturato[agente][j];
    }
    return totale;
}


