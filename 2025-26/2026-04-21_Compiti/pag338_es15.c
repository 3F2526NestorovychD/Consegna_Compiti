#include <stdio.h>
#include <stdlib.h>

#define RIGHE 4
#define COLONNE 5

int verifica_somma_precedenti(const int mat[RIGHE][COLONNE]){
    for (int i = 0; i < RIGHE; i++){
        int somma = 0;
        for (int j = 0; j < COLONNE; j++){
            if (mat[i][j] != somma){
                return 0;
            }
            somma += mat[i][j];
        }
    }
    return 1;
}

int main(){
    int mat[RIGHE][COLONNE];

    for (int i = 0; i < RIGHE; i++){
        for (int j = 0; j < COLONNE; j++){
            mat[i][j] = rand() % 10;
        }
    } 

    printf("==== Matrice 4x5 ====\n");
    for (int i = 0; i < RIGHE; i++){
        for (int j = 0; j < COLONNE; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    if (verifica_somma_precedenti(mat))
        printf("\nOgni cella e' uguale alla somma delle precedenti sulla stessa riga.\n");
    else
        printf("\nEsiste almeno una cella che non e' uguale alla somma delle precedenti sulla stessa riga.\n");

    printf("\n");
    system("pause");
    return 0;
}
