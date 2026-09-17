#include <stdio.h>
#include <stdlib.h>

#define COLONNE 4
#define RIGHE 3

int massimo_riga(const int matrix[RIGHE][COLONNE], const int riga){
    int massimo = matrix[riga][0];
    for (int j = 0; j < COLONNE; j++){
        if (matrix[riga][j] > massimo)
            massimo = matrix[riga][j];
    }
    return massimo;
}

int minimo_colonna(const int matrix[RIGHE][COLONNE], const int colonna){
    int minimo = matrix[0][colonna];
    for (int i = 0; i < RIGHE; i++){
        if (matrix[i][colonna] < minimo)
            minimo = matrix[i][colonna];
    }
    return minimo;
}

int massimo_minimo(const int matrix[RIGHE][COLONNE], int *massimo, int *minimo){
    *massimo = matrix[0][0];
    *minimo = matrix[0][0];
    for (int i = 0; i < RIGHE; i++){
        for (int j = 0; j < COLONNE; j++){
            if (matrix[i][j] > *massimo)
                *massimo = matrix[i][j];
            if (matrix[i][j] < *minimo)
                *minimo = matrix[i][j];
        }
    }
    return 0;
}

int main(){
    int matrix[RIGHE][COLONNE], scelta; // assumo che una matrice di interi vada bene, poiché non è specificato il tipo di matrice

    printf("Inserimento automatico dei valori della matrice 3x4:\n"); //assumo che vada bene 4x3 e tante altre cose
    for (int i = 0; i < RIGHE; i++){
        for (int j = 0; j < COLONNE; j++)
        {
            matrix[i][j] = rand() % 100;
        }
    }

    printf("\nMatrice generata:\n");
    for (int i = 0; i < RIGHE; i++){
        for (int j = 0; j < COLONNE; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    do{
        printf("\nMENU:\n");
        printf("1. Trova il massimo di tutte le righe\n");
        printf("2. Trova il minimo di tutte le colonne\n");
        printf("3. Trova il massimo & minimo di tutta la matrice\n");
        printf("0. Esci\n");
        printf("Scelta: ");
        scanf("%d", &scelta);

        switch (scelta){
        case 1:
            printf("\n====Il massimo di ogni riga====\n");
            for (int i = 0; i < RIGHE; i++){
                int max = massimo_riga(matrix, i);
                printf("Il massimo della riga %d è: %d\n", i + 1, max);
            }
            break;
        case 2:
            printf("\n====Il minimo di ogni colonna====\n");
            for (int j = 0; j < COLONNE; j++){
                int min = minimo_colonna(matrix, j);
                printf("Il minimo della colonna %d è: %d\n", j + 1, min);
            }
            break;
        case 3:
            int max, min;
            massimo_minimo(matrix, &max, &min);
            printf("Il massimo della matrice è: %d\n", max);
            printf("Il minimo della matrice è: %d\n", min);
            break;
        case 0:
            printf("\nUscita dal programma.\n");
            break;
        default:
            printf("\nScelta non valida, riprova.\n");
        }

    } while (scelta != 0);

    printf("\n");
    system("pause");
    return 0;
}