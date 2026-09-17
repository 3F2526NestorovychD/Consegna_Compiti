// contatto.cpp
#include "contatto.h"

#include <cstring>
#include <iostream>

void Contatto::copy_control_str(char* target, int size, const char* src) {
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

void Contatto::init(const char* nome_in, const char* cognome_in, const char* telefono_in) {
	copy_control_str(nome, sizeof(nome), nome_in);
	copy_control_str(cognome, sizeof(cognome), cognome_in);
	copy_control_str(telefono, sizeof(telefono), telefono_in);
}

void Contatto::print() const {
	std::cout << nome << " " << cognome << " - Tel: " << telefono << std::endl;
}

int Contatto::compare(const Contatto& contatto) const {
	int cmp = std::strcmp(cognome, contatto.cognome);
	if (cmp != 0) {
		return cmp;
	}
	return std::strcmp(nome, contatto.nome);
}

const char* Contatto::getNome() const {
	return nome;
}

const char* Contatto::getCognome() const {
	return cognome;
}

const char* Contatto::getTelefono() const {
	return telefono;
}
