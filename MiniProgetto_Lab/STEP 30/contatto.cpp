// contatto.cpp
#include "contatto.h"

#include <cstring>
#include <iostream>

// SEARCH: usare metodo privato della classe
void controlled_copy_str(char* target, int size, const char* src) {
	if (!target || size <= 0) {
		return;
	}
	if (!src) {
		target[0] = '\0';
		return;
	}
	std::strcpy(stringa1, stringa2)
	std::strncpy(target, src, size - 1);
	target[size - 1] = '\0';
}

// SEARCH:n da cambiare il funzionamento interno 
void Contatto::contatto_init(Contatto* c, const char* nome, const char* cognome, const char* telefono) {
	if (!c) {
		return;
	}
	controlled_copy_str(c->nome, sizeof(c->nome), nome);
	controlled_copy_str(c->cognome, sizeof(c->cognome), cognome);
	controlled_copy_str(c->telefono, sizeof(c->telefono), telefono);
}

// SEARCH: stessa cosa Contatto::print
void Contatto::contatto_print(const Contatto* c) { //cambiare la logica interna
	if (!c) {
		return;
	}
	std::cout << c->nome << " " << c->cognome << " - Tel: " << c->telefono << std::endl;
}

// SEARCH: la stessa
int Contatto::contatto_compare(const Contatto* a, const Contatto* b) {
	if (!a || !b) {
		return 0;
	}
	int cmp = std::strcmp(a->cognome, b->cognome);
	if (cmp != 0) {
		return cmp;
	}
	return std::strcmp(a->nome, b->nome);
}
