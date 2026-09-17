#include <stdio.h>
#include <stdlib.h>

#define RIGHE 10
#define COLONNE 10

int main(){


    int mat[RIGHE][COLONNE];

    for(int i = 0; i < RIGHE; i++){
        for(int j = 0; j < COLONNE; j++){
            mat[i][j] = i + j;
        }
    }


    printf("Matrice :\n\n");
    for(int i = 0; i < RIGHE; i++){
        for(int j = 0; j < COLONNE; j++){
            printf("%4d", mat[i][j]); 
        }
        printf("\n");
    }

    printf("\n\n");

    system("pause");
    return 0;

}