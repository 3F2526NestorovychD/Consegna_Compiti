#include <stdio.h>
#include <stdlib.h>

void somma_prodotto() {
    int a, b;
    int ris;
    printf("Inserire il primo numero: ");
    scanf("%d", &a);
    printf("Inserire il secondo numero: ");
    scanf("%d", &b);

    if (a > 0 && b > 0)
            ris = a + b;
        else
            ris = a * b;

    printf("Il risultato e' %d\n", ris);
}

int main() {
    somma_prodotto();

    system("pause");
    return 0;
}
