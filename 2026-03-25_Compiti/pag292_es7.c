#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 5 //Assumo che N è 5 perché non è specificato
#define MAX_LEN 40

void stampa_registi(const char directors[][MAX_LEN]){
	printf("Registi disponibili:\n");
	for (int i = 0; i < N; i++) {
		printf("- %s\n", directors[i]);
	}
}

void stampa_filmRegista(const char title[][MAX_LEN], const char directors[][MAX_LEN]){
	char cognome[MAX_LEN];
	
	stampa_registi(directors);
	printf("Inserisca il cognome del regista: ");
	scanf("%s", cognome);
	
	
	for(int i = 0; i < N; i++) {
      if(strcmp(cognome, directors[i]) == 0) {
          printf("=========\n");
          printf("Film: %s\nRegista: %s\n", title[i], directors[i]);
          printf("=========\n");
        }
    }
}

void bestfilm_regista(const char title[][MAX_LEN], const char directors[][MAX_LEN], const float box_office_receipts[]){
	int indiceMax = 0;
	float max = box_office_receipts[0];

	for (int i = 1; i < N; i++){
		if(box_office_receipts[i] > max) {
			max = box_office_receipts[i];
			indiceMax = i;
		}
	}

	printf("Il film con il maggior incasso e' %s di %s con un incasso totale di %.2f€.", title[indiceMax], directors[indiceMax], box_office_receipts[indiceMax]);
}

void mediaRegista(const char directors[][MAX_LEN], const float box_office_receipts[]){
	char cognome[MAX_LEN];
	float somma = 0.0f;
	int count = 0;
	
	stampa_registi(directors);
	printf("Inserisca il cognome del regista: ");
	scanf("%s", cognome);
	
	for(int i = 0; i < N; i++) {
		if(strcmp(cognome, directors[i]) == 0) {
			somma += box_office_receipts[i];
			count++;
		}
	}

	if (count == 0) {
		printf("Errore catturato: Nessun film trovato per il regista inserito.\n");
		return;
	} else if (count == 1) {
		printf("Attenzione: Solo un film trovato per il regista inserito. La media coincide con l'incasso [%.2f] di quel film.\n", box_office_receipts[0]);
		return;
	}

	printf("Media incassi per %s: %.2f€.\n", cognome, somma / count);
}

int main() {
	char titoli[N][MAX_LEN] = { "" };
	char registi[N][MAX_LEN] = { "" };
	float incassi[N] = { 0 };

	const char titoli_iniziali[N][MAX_LEN] = {
		"Oltre il tempo",
		"La caverna",
		"Il superuomo",
		"Memorie oscure",
		"Il dialogo"
	};
	const char registi_iniziali[N][MAX_LEN] = {
		"Nietzsche",
		"Dostoevsky",
		"Plato",
		"Aristotle",
		"Socrates"
	};
	const float incassi_iniziali[N] = { 12.5f, 9.3f, 15.0f, 7.8f, 11.1f };

	for (int i = 0; i < N; i++) {  // simulazione dei "3 vettori in input"
		strcpy(titoli[i], titoli_iniziali[i]);
		strcpy(registi[i], registi_iniziali[i]);
		incassi[i] = incassi_iniziali[i];
	}

	int scelta = -1;
	while (scelta != 0) {
		printf("\n\n====MENU====");
		printf("\n1 --> Stampa dei tutti i film di un registra a tu scelta");
		printf("\n2 --> Stampa del film con maggior incasso in database e il suo registra");
		printf("\n3 --> Stampa della media degli incassi dei film di un registra a tua scelta");
		printf("\n0 --> USCITA\n");
		printf("Scelta: ");

		if(scanf("%d", &scelta) != 1){
			printf("\nInput non valido.\n");
			scelta = 0;
		}


		switch (scelta) {
			case 1:
			    stampa_filmRegista(titoli, registi);
				break;
			case 2:
				bestfilm_regista(titoli, registi, incassi);
				break;
			case 3:
				mediaRegista(registi, incassi);
				break;
			case 0:
			    printf("\nTermino programma.\n");
				break;
			default:
			    printf("\nScelta non valida, riprova\n");
			    scelta = -1;
		}
	}

	system("PAUSE");
	return 0;
}
