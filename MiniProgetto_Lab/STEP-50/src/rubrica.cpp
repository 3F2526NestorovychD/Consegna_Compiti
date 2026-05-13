// rubrica.cpp
#include "../include/rubrica.h"

#include <cstring>
#include <iostream>

int GestoreContatti::compare_cognome(const Contatto* a, const Contatto* b) const {
    return std::strcmp(a->getCognome(), b->getCognome());
}

int GestoreContatti::compare_cognome_nome(const Contatto* a, const Contatto* b) const {
    int cmp = std::strcmp(a->getCognome(), b->getCognome());
    if (cmp != 0) {
        return cmp;
    }
    return std::strcmp(a->getNome(), b->getNome());
}


void GestoreContatti::copy_contatto(Contatto* target, const Contatto* src) {
    if (!target || !src) {
        return;
    }
    target->init(src->getNome(), src->getCognome(), src->getTelefono());
}

GestoreContatti::GestoreContatti() {
    rubrica_size = 0;
}

void GestoreContatti::init_demo(int n) {
    struct DemoEntry {
        const char* nome;
        const char* cognome;
        const char* telefono;
    };
    const DemoEntry demo[] = { // SEARCH: forse da cambiare con costruttore
        {"Mario", "Rossi", "12345"},
        {"Laura", "Bianchi", "67890"},
        {"Giuseppe", "Esposito", "11223"},
        {"Giulia", "Romano", "44556"},
        {"Francesco", "Ricci", "77889"},
        {"Elena", "Marino", "99001"},
        {"Alessandro", "Greco", "22334"},
        {"Silvia", "Bruno", "55667"},
        {"Roberto", "Galli", "88990"},
        {"Alice", "Conti", "33445"}
    };

    int max_demo = sizeof(demo) / sizeof(demo[0]);
    int count = n;
    if (count > max_demo) {
        count = max_demo;
    }
    if (count > MAX_CONTATTI) {
        count = MAX_CONTATTI;
    }
    for (int i = 0; i < count; ++i) {
        rubrica[i].init(demo[i].nome, demo[i].cognome, demo[i].telefono);
        rubrica_size++;
    }
}

int GestoreContatti::add_unsorted(const Contatto* c) {
    if (!c || rubrica_size >= MAX_CONTATTI) {
        return 0;
    }
    copy_contatto(&rubrica[rubrica_size], c);
    rubrica_size++;
    return 1;
}

int GestoreContatti::add_ordered(const Contatto* c) {
    if (!c || rubrica_size >= MAX_CONTATTI) {
        return 0;
    }
    int pos = 0;
    while (pos < rubrica_size && rubrica[pos].compare(*c) <= 0) {
        pos++;
    }
    for (int i = rubrica_size; i > pos; --i) {
        copy_contatto(&rubrica[i], &rubrica[i - 1]);
    }
    copy_contatto(&rubrica[pos], c);
    rubrica_size++;
    return 1;
}

void GestoreContatti::list() {
    if (rubrica_size == 0) {
        std::cout << "Rubrica vuota." << std::endl;
        return;
    }
    for (int i = 0; i < rubrica_size; ++i) {
        rubrica[i].print();
    }
}

void GestoreContatti::print_at(int idx) {
    if (idx < 0 || idx >= rubrica_size) {
        return;
    }
    rubrica[idx].print();
}

void GestoreContatti::sort() {
    for (int i = 1; i < rubrica_size; ++i) {
        Contatto key = rubrica[i];
        int j = i - 1;
        while (j >= 0 && rubrica[j].compare(key) > 0) {
            copy_contatto(&rubrica[j + 1], &rubrica[j]);
            j--;
        }
        copy_contatto(&rubrica[j + 1], &key);
    }
}


int GestoreContatti::find_sequential(const char* cognome, const char* nome, int use_nome) {
    if (!cognome) {
        return -1;
    }
    for (int i = 0; i < rubrica_size; ++i) {
        if (std::strcmp(rubrica[i].getCognome(), cognome) == 0) {
            if (!use_nome || (nome && std::strcmp(rubrica[i].getNome(), nome) == 0)) {
                return i;
            }
        }
    }
    return -1;
}

int GestoreContatti::find_binary(const char* cognome, const char* nome, int use_nome) {
    if (!cognome) {
        return -1;
    }
    Contatto key;
    key.init(nome ? nome : "", cognome, "");

    int left = 0;
    int right = rubrica_size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        int cmp = use_nome ? compare_cognome_nome(&rubrica[mid], &key) : compare_cognome(&rubrica[mid], &key);
        if (cmp == 0) {
            if (use_nome) {
                return mid;
            }
            while (mid > 0 && std::strcmp(rubrica[mid - 1].getCognome(), cognome) == 0) {
                mid--;
            }
            return mid;
        }
        if (cmp < 0) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}
