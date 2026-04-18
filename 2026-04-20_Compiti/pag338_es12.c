#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 10
#define MAX 25

typedef struct {
    char nome[MAX];
    float prezzo;
} Bevanda;

void ordina_nome(Bevanda v[]) {
    Bevanda tmp;
    for (int i = 0; i < N-1; i++) {
        for (int j = 0; j < N-1-i; j++) {
            if (strcmp(v[j].nome, v[j+1].nome) > 0) {
                tmp = v[j];
                v[j] = v[j+1];
                v[j+1] = tmp;
            }
        }
    }
}

void ordina_prezzo(Bevanda v[]) {
    Bevanda tmp;
    for (int i = 0; i < N-1; i++) {
        for (int j = 0; j < N-1-i; j++) {
            if (v[j].prezzo > v[j+1].prezzo) {
                tmp = v[j];
                v[j] = v[j+1];
                v[j+1] = tmp;
            }
        }
    }
}


void stampa(Bevanda v[]) {
    for (int i = 0; i < N; i++) {
        printf("%s - %.2f\n", v[i].nome, v[i].prezzo);
    }
    printf("\n");
}

int main() {

    Bevanda listino[N] = {
        {"CocaCola", 2.5},
        {"Acqua", 1.0},
        {"Birra", 3.5},
        {"Succo", 2.0},
        {"Tè", 1.8},
        {"Caffè", 1.2},
        {"Sprite", 2.5},
        {"Fanta", 2.5},
        {"Vino", 4.0},
        {"Latte", 1.5}
    };

    Bevanda copia[N];

    for (int i = 0; i < N; i++) { //forse qualcosa tipo memcpy andrebbe bene qua 
        copia[i] = listino[i];
    }

    ordina_nome(copia);
    printf("==== Ordinato per nome ====\n");
    stampa(copia);


    for (int i = 0; i < N; i++) {
        copia[i] = listino[i];
    }

    ordina_prezzo(copia);
    printf("====Ordinato per prezzo ====\n");
    stampa(copia);

    system("pause");
    return 0;
}