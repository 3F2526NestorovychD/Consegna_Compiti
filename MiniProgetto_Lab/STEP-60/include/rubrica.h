// rubrica.h
#ifndef RUBRICA_H
#define RUBRICA_H

#include "contatto.h"

#define MAX_CONTATTI 100

class GestoreContatti{
public:
    GestoreContatti();
    virtual ~GestoreContatti();

    virtual void init_demo(int n);
    virtual int add_unsorted(const Contatto* c);
    virtual int add_ordered(const Contatto* c);
    virtual void list();
    virtual void print_at(int idx);
    virtual void sort();
    virtual int find_sequential(const char* cognome, const char* nome, int use_nome);
    virtual int find_binary(const char* cognome, const char* nome, int use_nome);
};

class GestoreRAMOrdinata : public GestoreContatti {
private:
    Contatto rubrica[MAX_CONTATTI];
    int rubrica_size;

    int compare_cognome(const Contatto* a, const Contatto* b) const;
    int compare_cognome_nome(const Contatto* a, const Contatto* b) const;
    void copy_contatto(Contatto* target, const Contatto* src);
public:
    GestoreRAMOrdinata();

    void init_demo(int n) override;
    int add_unsorted(const Contatto* c) override;
    int add_ordered(const Contatto* c) override;
    void list() override;
    void print_at(int idx) override;
    void sort() override;
    int find_sequential(const char* cognome, const char* nome, int use_nome) override;
    int find_binary(const char* cognome, const char* nome, int use_nome) override;
};


#endif
