#include <stdio.h>
#include <stdlib.h>

#define RIGHE 10
#define COLONNE 10

int main(){


    int mat[RIGHE][COLONNE];

    for(int i = 0; i < RIGHE; i++){
        for(int j = 0; j < COLONNE; j++){
            mat[i][j] = rand() % 10;
        }
    }
    
    printf("\nContenuto della matrice: \n");
    for(int i = 0; i < RIGHE; i++){
        for(int j = 0; j < COLONNE; j++){
            if( i == 9 && j == 9)
            printf("%d.", mat[i][j]);
            else
            printf("%d, ", mat[i][j]);
        }
        printf("\n\n");
    }


    int c = 0;
    printf("\n0 trovato nelle posizioni: \n");
    for(int i = 0; i < RIGHE; i++){
        for(int j = 0; j < COLONNE; j++){
            if(mat[i][j] == 0){
                printf("riga %d & collona %d, ", i+1, j+1);
                c++;
            }
        }
    }
    printf("\n\nIn totale sono stati trovati [%d] zeri nella mattrcice generata\n\n", c);


    system("pause");
    return 0;

}