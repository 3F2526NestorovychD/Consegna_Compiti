#include <stdio.h>
#include <stdlib.h>

#define N 3
#define M 4
int TotRiga(int m[N][M], int r);
int TotColonna(int m[N][M], int c);
int Totale(int m[N][M]);


int main(){
    
    int mat[N][M] = {{2,3,4,5}, {6,7,8,9}, {10,11,12,13}};

    int tot, totr, totc;
    for (int i = 0; i < N; i++){
        totr = TotRiga(mat, i);
        printf("Totale riga %d = %d\n", i+1, totr);
    }

    for (int j = 0; j < M; j++){
        totc = TotColonna(mat, j);
        printf("Totale colonna %d = %d\n", j+1, totc);
    }

    tot = Totale(mat);
    printf("Totale generale = %d\n", tot);

    system("pause");
    return 0;
}



int TotRiga(int m[N][M], int r){
    int totale;
    totale = 0;
    for (int j = 0; j < M; j++)
        totale += m[r][j];
    return totale;
}

int TotColonna(int m[N][M], int c){
    int totale;
    totale = 0;
    for (int i = 0; i < N; i++)
        totale +=  m[i][c];
    return totale;
}

int Totale(int m[N][M]){
    int totale;
    totale = 0;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            totale += m[i][j];

    return totale;
}