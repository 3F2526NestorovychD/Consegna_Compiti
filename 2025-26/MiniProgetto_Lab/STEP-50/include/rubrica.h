// rubrica.h
#ifndef RUBRICA_H
#define RUBRICA_H

#include "contatto.h"

#define MAX_CONTATTI 100

class GestoreContatti{
private:
    Contatto rubrica[MAX_CONTATTI];
    int rubrica_size;

    int compare_cognome(const Contatto* a, const Contatto* b) const;
    int compare_cognome_nome(const Contatto* a, const Contatto* b) const;
    void copy_contatto(Contatto* target, const Contatto* src);
public:
    GestoreContatti();
    void init_demo(int n);
    int add_unsorted(const Contatto* c);
    int add_ordered(const Contatto* c);
    void list();
    void print_at(int idx);
    void sort();
    int find_sequential(const char* cognome, const char* nome, int use_nome);
    int find_binary(const char* cognome, const char* nome, int use_nome);
};
#endif
