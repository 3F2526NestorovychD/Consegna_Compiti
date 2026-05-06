// contatto.h
#ifndef CONTATTO_H
#define CONTATTO_H

// SEARCH: questo classe
struct Contatto {
	char nome[32];
	char cognome[32];
	char telefono[16];
};

// SEARCH: sostituire funzioni libere con metodi pero dentro la classe Contatto
void contatto_init(Contatto* c, const char* nome, const char* cognome, const char* telefono);
void contatto_print(const Contatto* c);
int contatto_compare(const Contatto* a, const Contatto* b);

#endif