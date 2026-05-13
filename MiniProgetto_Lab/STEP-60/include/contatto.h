// contatto.h
#ifndef CONTATTO_H
#define CONTATTO_H

class Contatto {
private:
	void copy_control_str(char* target, int size, const char* src);

	char nome[32];
	char cognome[32];
	char telefono[16];

public:
	void init(const char* nome, const char* cognome, const char* telefono);
	void print() const;
	int compare(const Contatto& contatto) const;
	const char* getNome() const;
	const char* getCognome() const;
	const char* getTelefono() const;
};

#endif