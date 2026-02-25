#include <stdio.h>
#include <stdlib.h>

#define N 4

void Trasposta (int m[N][N], int ml[N][N]);
int SommaDiagonale(int m[N][N]);
void Stampa(int m[N][N]);

int main(){
    int mat[N][N] = {{1,3,4,5}, {6,57,8,9}, {10,11,12,13}, {3,5,6,9}};
    int mat1[N][N];
    int tot, scelta;

    do {
        printf("\n=======Le presento il nostro meravilgilioso menù=======\n");
        printf("Scelga una tra le opzioni:\n");
        printf("0 - esci");
        printf("\n1 - somma diagonale principale\n");
        printf("2 - matrice trasposta\n");
        printf("\nNe sclega uno: ");
        scanf("%d", &scelta);

        switch(scelta) {
            case 0:
                printf("Uscita da0l programma...\n");
                continue;

            case 1:
                tot = SommaDiagonale(mat);
                printf("Somma diagonale principale = %d\n", tot);
                break;

            case 2:
                Trasposta(mat, mat1);
                printf("\n-----------Matrice data----------\n");
                Stampa(mat);
                printf("\n-----------Matrice trasposta-----------\n");
                Stampa(mat1);
                break;


            default:
                printf("errore catturato: input non valido\n");
                break;    
        }

    } while (scelta != 0);
    system("PAUSE");
    return 0;
}

void Stampa(int m[N][N]){
    
    for(int i = 0; i < N; i++){
        for (int j = 0; j < N; j++)
            printf("%d\t", m[i][j]);
        printf("\n");
    }
}

void Trasposta (int m[N][N], int ml[N][N]){
    
    for(int i = 0; i < N; i++){
        for (int j = 0; j < N; j++)
            ml[j][i] = m[i][j];
    }
}

int SommaDiagonale(int m[N][N]){
    int tot = 0;
    for (int i = 0; i < N; i++)
        tot += m[i][i];
    return tot;
}