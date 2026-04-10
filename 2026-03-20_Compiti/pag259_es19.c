#include <stdio.h>
#include <stdlib.h>

#define RIGHE 1
#define COLONNE 20
#define RIGHE2 1
#define COLONNE2 5

int main() {
    char V1[RIGHE][COLONNE] = { 
        "abcdefghil"
        "mnopqrstuv" 
    };
    
    char V2[RIGHE2][COLONNE2] = {
        "aeiou"
    };

    printf("V1 prima dell'eliminazione:\n");
    for (int i = 0; i < RIGHE; i++) {
        for (int j = 0; j < COLONNE; j++) {
            printf("%c ", V1[i][j]);
        }
        printf("\n");
    }

    printf("Vettore di confronto:\n");
    for (int i = 0; i < RIGHE2; i++) {
        for (int j = 0; j < COLONNE2; j++) {
            printf("%c ", V2[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < RIGHE; i++) {
        for (int j = 0; j < COLONNE; j++) {
            for (int k = 0; k < COLONNE2; k++) {
                if (V1[i][j] == V2[0][k]) {
                    V1[i][j] = '*';
                    break;
                }
            }
        }
    }
    

    printf("V1 dopo l'eliminazione:\n");
    for (int i = 0; i < RIGHE; i++) {
        for (int j = 0; j < COLONNE; j++) {
            printf("%c", V1[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
    system("pause");
    return 0;
}
