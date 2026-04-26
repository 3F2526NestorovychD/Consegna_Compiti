// rubrica.cpp
#include "rubrica.h"

#include <cstring>
#include <iostream>

Contatto rubrica[MAX_CONTATTI];
int rubrica_size = 0;

int compare_cognome(const Contatto* a, const Contatto* b) {
    return std::strcmp(a->cognome, b->cognome);
}

int compare_cognome_nome(const Contatto* a, const Contatto* b) {
    int cmp = std::strcmp(a->cognome, b->cognome);
    if (cmp != 0) {
        return cmp;
    }
    return std::strcmp(a->nome, b->nome);
}

void copy_contatto(Contatto* target, const Contatto* src) {
    if (!target || !src) {
        return;
    }
    std::strncpy(target->nome, src->nome, sizeof(target->nome) - 1);
    target->nome[sizeof(target->nome) - 1] = '\0';
    std::strncpy(target->cognome, src->cognome, sizeof(target->cognome) - 1);
    target->cognome[sizeof(target->cognome) - 1] = '\0';
    std::strncpy(target->telefono, src->telefono, sizeof(target->telefono) - 1);
    target->telefono[sizeof(target->telefono) - 1] = '\0';
}

void rubrica_init_demo(int n) {
    const Contatto demo[] = {
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

    rubrica_size = 0;
    int max_demo = sizeof(demo) / sizeof(demo[0]);
    int count = n;
    if (count > max_demo) {
        count = max_demo;
    }
    if (count > MAX_CONTATTI) {
        count = MAX_CONTATTI;
    }
    for (int i = 0; i < count; ++i) {
        copy_contatto(&rubrica[i], &demo[i]);
        rubrica_size++;
    }
}

int rubrica_add_unsorted(const Contatto* c) {
    if (!c || rubrica_size >= MAX_CONTATTI) {
        return 0;
    }
    copy_contatto(&rubrica[rubrica_size], c);
    rubrica_size++;
    return 1;
}

int rubrica_add_ordered(const Contatto* c) {
    if (!c || rubrica_size >= MAX_CONTATTI) {
        return 0;
    }
    int pos = 0;
    while (pos < rubrica_size && contatto_compare(&rubrica[pos], c) <= 0) {
        pos++;
    }
    for (int i = rubrica_size; i > pos; --i) {
        copy_contatto(&rubrica[i], &rubrica[i - 1]);
    }
    copy_contatto(&rubrica[pos], c);
    rubrica_size++;
    return 1;
}

void rubrica_list() {
    if (rubrica_size == 0) {
        std::cout << "Rubrica vuota." << std::endl;
        return;
    }
    for (int i = 0; i < rubrica_size; ++i) {
        contatto_print(&rubrica[i]);
    }
}

void rubrica_sort() {
    for (int i = 1; i < rubrica_size; ++i) {
        Contatto key = rubrica[i];
        int j = i - 1;
        while (j >= 0 && contatto_compare(&rubrica[j], &key) > 0) {
            copy_contatto(&rubrica[j + 1], &rubrica[j]);
            j--;
        }
        copy_contatto(&rubrica[j + 1], &key);
    }
}

int rubrica_find_sequential(const char* cognome, const char* nome, int use_nome) {
    if (!cognome) {
        return -1;
    }
    for (int i = 0; i < rubrica_size; ++i) {
        if (std::strcmp(rubrica[i].cognome, cognome) == 0) {
            if (!use_nome || (nome && std::strcmp(rubrica[i].nome, nome) == 0)) {
                return i;
            }
        }
    }
    return -1;
}

int rubrica_find_binary(const char* cognome, const char* nome, int use_nome) {
    if (!cognome) {
        return -1;
    }
    Contatto key;
    contatto_init(&key, nome ? nome : "", cognome, "");

    int left = 0;
    int right = rubrica_size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        int cmp = use_nome ? compare_cognome_nome(&rubrica[mid], &key) : compare_cognome(&rubrica[mid], &key);
        if (cmp == 0) {
            if (use_nome) {
                return mid;
            }
            while (mid > 0 && std::strcmp(rubrica[mid - 1].cognome, cognome) == 0) {
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
