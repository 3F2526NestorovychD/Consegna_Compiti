#include <stdio.h>
#include <stdlib.h>

int main(){
    int N;

    printf("Inserisca la quantitta di numeri da inserire nel database: ");
    scanf("%d", &N);
       if (N <= 0) {
        printf("Errore: N deve essere maggiore di 0.\n");
        return 1;
    }

    
    printf("Numeri pari:\n");
    for (int i = 1; i <= N; i++) {
        printf("%d ", 2 * i);
    }

    printf("\nNumeri dispari:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", 2 * i + 1);
    }


    system("pause");
    return 0;
}