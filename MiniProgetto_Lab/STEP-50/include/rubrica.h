// rubrica.h
#ifndef RUBRICA_H
#define RUBRICA_H

#include "contatto.h"

// SEARCH: creare classe GestoreContatti e spostare qui i metodi
#define MAX_CONTATTI 100

// SEARCH: questi globali diventano attributi privati della classe
extern Contatto rubrica[MAX_CONTATTI];
extern int rubrica_size;

// SEARCH: queste funzioni diventano metodi della classe
void rubrica_init_demo(int n);
int rubrica_add_unsorted(const Contatto* c);
int rubrica_add_ordered(const Contatto* c);
void rubrica_list();
void rubrica_sort();
int rubrica_find_sequential(const char* cognome, const char* nome, int use_nome);
int rubrica_find_binary(const char* cognome, const char* nome, int use_nome);

#endif
