#include <stdio.h>
#include <stdlib.h>

#define RIGHE 4
#define COLONNE 4

int n_presenti_riga(const int mat[RIGHE][COLONNE], const int riga){ 
    int contatore = 0;
    for (int j = 0; j < COLONNE; j++){
        if (mat[riga][j] == 1){
            contatore++;
        }
    }
    return contatore;
}

int main(){
    int mat[RIGHE][COLONNE];

    for (int i = 0; i < RIGHE; i++){
        for (int j = 0; j < COLONNE; j++){
            mat[i][j] = rand() % 2;
        }
    } 

    printf("==== Matrice 4x4 ====\n");
    for (int i = 0; i < RIGHE; i++){
        for (int j = 0; j < COLONNE; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    int n_presenti_righe[RIGHE];
    for (int i = 0; i < RIGHE; i++){
        n_presenti_righe[i] = n_presenti_riga(mat, i);
    }

    for(int i = 0; i < RIGHE - 1; i++){
        if(n_presenti_righe[i] != n_presenti_righe[i + 1]){
            printf("\nIl numero di 1 presenti nelle righe non è uguale.\n");
            system("pause");
            return 1;
        }
    }

    printf("\nIl numero di 1 presenti nelle righe è uguale.\n");

    printf("\n");
    system("pause");
    return 0;
}
