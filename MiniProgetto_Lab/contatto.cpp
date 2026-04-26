// contatto.cpp
#include "contatto.h"

#include <cstring>
#include <iostream>

void copy_control_str(char* target, int size, const char* src) {
	if (!target || size <= 0) {
		return;
	}
	if (!src) {
		target[0] = '\0';
		return;
	}
	std::strncpy(target, src, size - 1);
	target[size - 1] = '\0';
}

void contatto_init(Contatto* c, const char* nome, const char* cognome, const char* telefono) {
	if (!c) {
		return;
	}
	copy_control_str(c->nome, sizeof(c->nome), nome);
	copy_control_str(c->cognome, sizeof(c->cognome), cognome);
	copy_control_str(c->telefono, sizeof(c->telefono), telefono);
}

void contatto_print(const Contatto* c) {
	if (!c) {
		return;
	}
	std::cout << c->nome << " " << c->cognome << " - Tel: " << c->telefono << std::endl;
}

int contatto_compare(const Contatto* a, const Contatto* b) {
	if (!a || !b) {
		return 0;
	}
	int cmp = std::strcmp(a->cognome, b->cognome);
	if (cmp != 0) {
		return cmp;
	}
	return std::strcmp(a->nome, b->nome);
}
