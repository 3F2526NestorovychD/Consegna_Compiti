// contatto.h
#ifndef CONTATTO_H
#define CONTATTO_H

struct Contatto {
	char nome[32];
	char cognome[32];
	char telefono[16];
};

void contatto_init(Contatto* c, const char* nome, const char* cognome, const char* telefono);
void contatto_print(const Contatto* c);
int contatto_compare(const Contatto* a, const Contatto* b);

#endif
