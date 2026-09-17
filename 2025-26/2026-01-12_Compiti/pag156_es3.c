#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    int numeri[100];
    int max, min;

    printf("Quanti numeri? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        numeri[i] = rand() % 100;   // da 0 a 99
        printf("Numero [%d]: %d\n", i+1, numeri[i]);
    }

    max = numeri[0];
    min = numeri[0];

    for (int i = 1; i < n; i++) {
        if (numeri[i] > max)
            max = numeri[i];
        if (numeri[i] < min)
            min = numeri[i];
    }

    printf("Minimo = %d\n", min);
    printf("Massimo = %d\n", max);
    printf("Differenza = %d\n", max - min);

    system("pause");
    return 0;
}
