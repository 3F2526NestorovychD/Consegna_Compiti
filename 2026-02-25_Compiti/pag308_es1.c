#include <stdio.h>
#include <stdlib.h>
#define N 3
#define M 4
int TotRiga(int m[N][M], int r);
int TotColonna(int m[N][M], int c);
int Totale(int m[N][M]);


int main(){
    
    int mat[N][M] = {{2,3,4,5}, {6,7,8,9}, {10,11,12,13}};

    int i, j, tot, totr, totc;
    for (i = 0; i < N; i++){
        totr = TotRiga(mat, i);
        printf("Totale riga %d = %d\n", i+1, totr);
    }

    for (j = 0; j < M; j++){
        totc = TotColonna(mat, j);
        printf("Totale colonna %d = %d\n", j+1, totc);
    }

    tot = Totale(mat);
    printf("Totale generale = %d\n", tot);
    
    system("PAUSE");
    return 0;
}



int TotRiga(int m[N][M], int r){
    int j, tot;
    tot = 0;
    for (j = 0; j < M; j++)
        tot = tot + m[r][j];
    return tot;
}

int TotColonna(int m[N][M], int c){
    int i, tot;
    tot = 0;
    for (i = 0; i < N; i++)
        tot = tot + m[i][c];
    return tot;
}

int Totale(int m[N][M]){
    int j, i, tot;
    tot = 0;
    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++)
            tot = tot + m[i][j];

    return tot;
}