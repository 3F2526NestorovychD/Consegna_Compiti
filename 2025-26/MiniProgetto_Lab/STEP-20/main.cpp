// main.cpp
#include "contatto.h"
#include "funzioni.h"
#include "rubrica.h"

#include <iostream>

void stampa_menu() {
	std::cout << "\nRubrica contatti" << std::endl;
	std::cout << "1) Lista contatti" << std::endl;
	std::cout << "2) Aggiungi (non ordinato)" << std::endl;
	std::cout << "3) Cerca sequenziale (solo cognome)" << std::endl;
	std::cout << "4) Ordina + cerca binaria (cognome e nome)" << std::endl;
	std::cout << "5) Aggiungi (ordinato)" << std::endl;
	std::cout << "0) Esci" << std::endl;
}

void leggi_contatto(Contatto* c, int chiedi_nome) {
	char nome[32];
	char cognome[32];
	char telefono[16];

	if (chiedi_nome) {
		input_word("Nome: ", nome, sizeof(nome));
	} else {
		nome[0] = '\0';
	}
	input_word("Cognome: ", cognome, sizeof(cognome));
	input_word("Telefono: ", telefono, sizeof(telefono));

	contatto_init(c, nome, cognome, telefono);
}

int main() {
	rubrica_init_demo(10);

	int scelta = -1;
	while (scelta != 0) {
		stampa_menu();
		scelta = input_int("Scelta: ");

		switch (scelta) {
			case 1:
				rubrica_list();
				break;
			case 2: {
				Contatto c;
				leggi_contatto(&c, 1);
				if (rubrica_add_unsorted(&c)) {
					std::cout << "Contatto aggiunto." << std::endl;
				} else {
					std::cout << "Rubrica piena." << std::endl;
				}
				break;
			}
			case 3: {
				char cognome[32];
				input_word("Cognome: ", cognome, sizeof(cognome));
				int idx = rubrica_find_sequential(cognome, "", 0);
				if (idx >= 0) {
					contatto_print(&rubrica[idx]);
				} else {
					std::cout << "Nessun contatto trovato." << std::endl;
				}
				break;
			}
			case 4: {
				char cognome[32];
				char nome[32];
				input_word("Cognome: ", cognome, sizeof(cognome));
				input_word("Nome: ", nome, sizeof(nome));
				rubrica_sort();
				int idx = rubrica_find_binary(cognome, nome, 1);
				if (idx >= 0) {
					contatto_print(&rubrica[idx]);
				} else {
					std::cout << "Nessun contatto trovato." << std::endl;
				}
				break;
			}
			case 5: {
				Contatto c;
				leggi_contatto(&c, 1);
				if (rubrica_add_ordered(&c)) {
					std::cout << "Contatto aggiunto (ordinato)." << std::endl;
				} else {
					std::cout << "Rubrica piena." << std::endl;
				}
				break;
			}
			case 0:
				break;
			default:
				std::cout << "Scelta non valida." << std::endl;
				break;
		}
	}

	return 0;
}
