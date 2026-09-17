#include <stdio.h>
#include <stdlib.h>

#define N 10

int main(){


    int matrice[N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i % 2 != 0) 
                matrice[i][j] = 1;  
            else 
                matrice[i][j] = 0;  
        }
    }

    printf("Matrice :\n\n");
    for(int i = 0; i < N ; i++){
        for(int j = 0; j < N ; j++){
            printf("%4d", matrice[i][j]); 
        }
        printf("\n");
    }

    printf("\n\n");

    system("pause");
    return 0;

}

