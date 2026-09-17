
#include <stdio.h>
#include <stdlib.h>

#define GIA_ISCRITTI 30
#define EXTRA_POSTI 10
#define MAX_NOME 40

typedef struct {
	char nome[MAX_NOME];
	char cognome[MAX_NOME];
	int id;
	float acconto;
	float saldo;
} Iscritto;

void inizializza_dati(Iscritto iscritti[], int *n);
void stampa_iscritti(const Iscritto iscritti[], int n);
void inserisci_pagamento(Iscritto iscritti[], int *n);
int trova_posizione_inserimento(const Iscritto iscritti[], int n, float saldo);
void shift_destra(Iscritto iscritti[], int n, int pos);
void stampa_saldo_da_versare(const Iscritto iscritti[], int n);

int main() {
	Iscritto iscritti[GIA_ISCRITTI + EXTRA_POSTI];
	int n = 0;
	int scelta;

	inizializza_dati(iscritti, &n);

	do {
		printf("\n====MENU====\n");
		printf("1. Stampa iscritti\n");
		printf("2. Aggiorna tabella con pagamento\n");
		printf("3. Elenco iscritti con saldo da versare\n");
		printf("0. Esci\n");
		printf("Scelta: ");
		scanf("%d", &scelta);

		switch (scelta) {
		case 1:
			stampa_iscritti(iscritti, n);
			break;
		case 2:
			inserisci_pagamento(iscritti, &n);
			break;
		case 3:
			stampa_saldo_da_versare(iscritti, n);
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

void inizializza_dati(Iscritto iscritti[], int *n) {
	*n = 6;

	iscritti[0] = (Iscritto){"Luca", "Rossi", 101, 50.0f, 0.0f};
	iscritti[1] = (Iscritto){"Marta", "Bianchi", 102, 20.0f, 10.0f};
	iscritti[2] = (Iscritto){"Giulia", "Verdi", 103, 10.0f, 20.0f};
	iscritti[3] = (Iscritto){"Paolo", "Neri", 104, 0.0f, 30.0f};
	iscritti[4] = (Iscritto){"Sara", "Galli", 105, 15.0f, 40.0f};
	iscritti[5] = (Iscritto){"Marco", "Conti", 106, 5.0f, 60.0f};
}

void stampa_iscritti(const Iscritto iscritti[], int n) {
	printf("\n%-12s %-12s %-6s %-10s %-10s\n", "Nome", "Cognome", "ID", "Acconto", "Saldo");
	for (int i = 0; i < n; i++) {
		printf("%-12s %-12s %-6d %-10.2f %-10.2f\n",
			iscritti[i].nome,
			iscritti[i].cognome,
			iscritti[i].id,
			iscritti[i].acconto,
			iscritti[i].saldo);
	}
}

void inserisci_pagamento(Iscritto iscritti[], int *n) {
	if (*n >= GIA_ISCRITTI + EXTRA_POSTI) {
		printf("Spazio insufficiente per nuovi iscritti.\n");
		return;
	}

	Iscritto nuovo;

	printf("Nome: ");
	scanf("%39s", nuovo.nome);
	printf("Cognome: ");
	scanf("%39s", nuovo.cognome);
	printf("ID: ");
	scanf("%d", &nuovo.id);
	printf("Acconto: ");
	scanf("%f", &nuovo.acconto);
	printf("Saldo: ");
	scanf("%f", &nuovo.saldo);

	int pos = trova_posizione_inserimento(iscritti, *n, nuovo.saldo);
	shift_destra(iscritti, *n, pos);
	iscritti[pos] = nuovo;
	(*n)++;
}

int trova_posizione_inserimento(const Iscritto iscritti[], int n, float saldo) {
	int pos = 0;
	while (pos < n && iscritti[pos].saldo <= saldo) {
		pos++;
	}
	return pos;
}

void shift_destra(Iscritto iscritti[], int n, int pos) {
	for (int i = n; i > pos; i--) {
		iscritti[i] = iscritti[i - 1];
	}
}

void stampa_saldo_da_versare(const Iscritto iscritti[], int n) {
	printf("\nIscritti con saldo da versare:\n");
	for (int i = 0; i < n; i++) {
		if (iscritti[i].saldo > 0.0f) {
			printf("%s %s, [ID %d]: saldo %.2f\n",
				iscritti[i].nome,
				iscritti[i].cognome,
				iscritti[i].id,
				iscritti[i].saldo);
		}
	}
}
