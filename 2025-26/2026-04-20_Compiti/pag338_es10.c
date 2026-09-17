#include <stdio.h>
#include <stdlib.h>

#define N 3
#define M 4

void scambia(int mat[N][M]);
void stampa(int mat[N][M]);


int main(){
    
    int matrice[N][M] = {{2,3,4,5}, {6,7,8,9}, {10,11,12,13}}; //si potrebbe fare anche con lettura dei file ma lo simulo così
    printf("La matrice data in input");
    stampa(matrice);

    scambia(matrice);

    printf("\nLa matrice dopo lo lo scambio: ");
    stampa(matrice);


    system("pause");
    return 0;
}


void scambia(int mat[N][M]){
    for(int i = 0; i < N - 1; i+= 1){
        for(int j = 0; j < M; j++){
            int temp = mat[i][j];
            mat[i][j] = mat[i+1][j];
            mat[i+1][j] = temp;
        }
    }
}

void stampa(int mat[N][M]){
    printf("\n========= STAMPA =========\n");
        for (int r = 0; r < N; r++){
            for (int c = 0; c < M; c++){
                printf("%d\t", mat[r][c]);
            }
            printf("\n");
        }
}