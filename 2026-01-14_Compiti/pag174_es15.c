#include <stdio.h>
#include <stdlib.h>

int main() {
    int codice[100];
    float prezzo[100];
    int i = 0;
    int maxIndex = 0;

    while (1) {
        printf("Inserisca codice prodotto (0 per terminare): ");
        scanf("%d", &codice[i]);

        if (codice[i] == 0) {
            break;
        }

        printf("Inserisca prezzo: ");
        scanf("%f", &prezzo[i]);

        if (i == 0 || prezzo[i] > prezzo[maxIndex]) {
            maxIndex = i;
        }

        i++;
    }

    if (i > 0) {
        printf("\nProdotto più costoso:\n");
        printf("Codice: %d\n", codice[maxIndex]);
        printf("Prezzo: %.2f\n", prezzo[maxIndex]);
    } else {
        printf("Nessun prodotto inserito\n");
    }

    system("pause");
    return 0;
}
