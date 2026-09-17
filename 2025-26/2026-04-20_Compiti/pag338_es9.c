#include <stdio.h>
#include <stdlib.h>

#define N 3
#define M 4

int totale(int m[N][M]);
void stampa(int mat[N][M]);


int main(){
    
    int mat1[N][M] = {{2,3,4,5}, {6,7,8,9}, {10,11,12,13}};
    int mat2[N][M] = {{1,2,3,4}, {9,3,0,4}, {22,19,7,6}};

    int tot1, tot2;
    tot1 = totale(mat1);
    tot2 = totale(mat2);

    printf("MATTRICE 1\n");
    stampa(mat1);
    printf("\nMATTRICE 2\n");
    stampa(mat2);


    int somma = tot1 + tot2;
    printf("La somma delle due mattrici equivale a %d\n\n", somma);

    system("pause");
    return 0;
}

int totale(int m[N][M]){
    int totale = 0;
    
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            totale += m[i][j];

    return totale;
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