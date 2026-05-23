// main.cpp
#include "../include/contatto.h"
#include "../include/funzioni.h"
#include "../include/rubrica.h"

#include <iostream>

void stampa_menu() {
	std::cout << "\nRubrica contatti" << std::endl;
	std::cout << "1) Lista contatti" << std::endl;
	std::cout << "2) Aggiungi [non ordinato]" << std::endl;
	std::cout << "3) Cerca sequenziale (solo cognome)" << std::endl;
	std::cout << "4) Ordina + cerca binaria (cognome e nome)" << std::endl;
	std::cout << "5) Aggiungi [ordinato]" << std::endl;
	std::cout << "6) Ristampa menu" << std::endl;
	std::cout << "0) Esci" << std::endl;
}

void leggi_contatto(Contatto* c, int chiedi_nome) {
	char nome[MAX_NOME];
	char cognome[MAX_COGNOME];
	char telefono[MAX_FULLNAME];

	if (chiedi_nome) {
		input_word("Nome: ", nome, sizeof(nome));
	} else {
		nome[0] = '\0';
	}
	input_word("Cognome: ", cognome, sizeof(cognome));
	input_word("Telefono: ", telefono, sizeof(telefono));

	c->init(nome, cognome, telefono);
}

int main() {
	GestoreMirroredRAM gestore_concreto("rubrica.txt");
	GestoreContatti* gestore = &gestore_concreto;

	int scelta = -1;
	int mostra_menu = 1;
	while (scelta != 0) {
		if (mostra_menu) {
			stampa_menu();
			mostra_menu = 0;
		}
		scelta = input_int("Scelta: ");

		switch (scelta) {
			case 1:
				gestore->lista();
				break;
			case 2: {
				Contatto c;
				leggi_contatto(&c, 1);
				if (gestore->add_unsorted(&c)) {
					std::cout << "Contatto aggiunto." << std::endl;
				} else {
					std::cout << "Rubrica piena." << std::endl;
				}
				break;
			}
			case 3: {
				char cognome[MAX_COGNOME];
				input_word("Cognome: ", cognome, sizeof(cognome));
				
				int idx = gestore->find_sequential(cognome, "", 0);
				if (idx >= 0) {
					std::cout << "Contatto trovato:" << std::endl;
					gestore->print_at(idx);
				} else {
					std::cout << "Nessun contatto trovato." << std::endl;
				}
				break;
			}
			case 4: {
				char cognome[MAX_COGNOME];
				char nome[MAX_NOME];
				input_word("Cognome: ", cognome, sizeof(cognome));
				input_word("Nome: ", nome, sizeof(nome));
				gestore->sort();
				int idx = gestore->find_binary(cognome, nome, 1);
				if (idx >= 0) {
					gestore->print_at(idx);
				} else {
					std::cout << "Nessun contatto trovato." << std::endl;
				}
				break;
			}
			case 5: {
				Contatto c;
				leggi_contatto(&c, 1);
				if (!gestore->is_sorted()) {
					gestore->sort();
				}
				if (gestore->add_ordered(&c)) {
					std::cout << "Contatto aggiunto (ordinato)." << std::endl;
				} else {
					std::cout << "Rubrica piena." << std::endl;
				}
				break;
			}
			case 6:
				mostra_menu = 1;
				break;
			case 0:
				break;
			default:
				std::cout << "Scelta non valida." << std::endl;
				break;
		}
	}

	getchar();
	return 0;
}
