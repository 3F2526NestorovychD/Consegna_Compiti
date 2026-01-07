#include <stdio.h>
#include <stdlib.h>

int main() {
    int X, Y;
    int somma = 0;

    printf("Inserisca il numero Y(numero di partenza): ");
    scanf("%d", &Y);

    printf("Inserisci il numero X(numeri succesivi): ");
    scanf("%d", &X);

    for (int i = 1; i <= X; i++) {
        int numero = Y + i;
        somma += numero * numero;
    }

    printf("La somma dei quadrati dei %d numeri successivi a %d e': %d\n", X, Y, somma);

    system("pause");

    return 0;
}
