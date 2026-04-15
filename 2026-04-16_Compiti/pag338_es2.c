#include <stdio.h>
#include <stdlib.h>

#define RIGHE 10
#define COLONNE 10

int main(){


    int tavola_pitagorica[RIGHE][COLONNE];

    for(int i = 0; i < RIGHE; i++){
        for(int j = 0; j < COLONNE; j++){
            tavola_pitagorica[i][j] = (i + 1) * (j + 1);
        }
    }


    printf("Tavola pitagorica:\n\n");
    for(int i = 0; i < RIGHE; i++){
        for(int j = 0; j < COLONNE; j++){
            printf("%4d", tavola_pitagorica[i][j]); 
        }
        printf("\n");
    }

    printf("\n\n");

    system("pause");
    return 0;

}