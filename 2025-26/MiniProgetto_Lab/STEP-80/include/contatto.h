// contatto.h
#ifndef CONTATTO_H
#define CONTATTO_H

#define MAX_NOME 32
#define MAX_COGNOME 32
#define MAX_FULLNAME (MAX_NOME + 2 + MAX_COGNOME)
#define MAX_TELEF 16

class Contatto {
private:
	void copy_control_str(char* target, int size, const char* src);

	char nome[MAX_NOME];
	char cognome[MAX_COGNOME];
	char telefono[MAX_TELEF];

public:
	void init(const char* nome, const char* cognome, const char* telefono);
	void print() const;
	int compare(const Contatto& contatto) const;
	const char* getNome() const;
	const char* getCognome() const;
	const char* getTelefono() const;
};

#endif