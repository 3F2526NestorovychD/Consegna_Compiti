#include <stdio.h>
#include <stdlib.h>

#define N 4

int somma_riga(int mat[N][N], int riga){
    int somma = 0;
    for (int j = 0; j < N; j++){
        somma += mat[riga][j];
    }
    return somma;
}

int somma_colonna(int mat[N][N], int colonna){
    int somma = 0;
    for (int i = 0; i < N; i++){
        somma += mat[i][colonna];
    }
    return somma;
}

int main(){

    int mat[N][N];

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            mat[i][j] = rand() % 10; 
        }
    }

    printf("==== Matrice ====\n");
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    int somma_righe[N], max_indice = 0;
    for(int i = 0; i < N; i++){
        somma_righe[i] = somma_riga(mat, i);
        if(somma_righe[i] > somma_righe[max_indice])
            max_indice = i;
        
    }

    printf("\nSomma delle righe:\n");
    for(int i = 0; i < N; i++){
        printf("Riga %d: %d\n", i + 1, somma_righe[i]);
    }
    printf("\nE quindi la riga con somma massima è la riga %d con somma totale di %d\n", max_indice + 1, somma_righe[max_indice]);

    int somma_colonne[N];
    for(int j = 0; j < N; j++){
        somma_colonne[j] = somma_colonna(mat, j);
        if(somma_colonne[j] > somma_colonne[max_indice])
            max_indice = j;
    } 

    printf("\nSomma delle colonne:\n");
    for(int j = 0; j < N; j++){
        printf("Colonna %d: %d\n", j + 1, somma_colonne[j]);
    }
    printf("\nE quindi la colonna con somma massima è la colonna %d con somma totale di %d\n", max_indice + 1, somma_colonne[max_indice]);



    printf("\n");
    system("pause");
    return 0;
}