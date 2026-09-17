#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int numeri[100];  
    int min, max;

    printf("Quanti numeri vuole inserire? ");
    scanf("%d", &n);


    for (int i = 0; i < n; i++) {
        numeri[i] = rand() % 100;  
        printf("Numero [%d]: %d\n", i+1, numeri[i]);
    }
 
    min = numeri[0];
    max = numeri[0];

    for (int i = 1; i < n; i++) {
        if (numeri[i] < min) min = numeri[i];
        if (numeri[i] > max) max = numeri[i];
    }

    printf("Valore minimo: %d\n", min);
    printf("Valore massimo: %d\n", max);
    printf("Differenza massimo-minimo: %d\n", max - min);

    system("pause");
    return 0;
}
