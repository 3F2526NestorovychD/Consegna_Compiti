#include <stdio.h>
#include <stdlib.h>

int main() {
    int N = 5;
    float K = 1.5;
    int contatore = 0;

     // non abbiamo studiato le funzioni per aprire file quindi uso dei array
    float peso[5]    = {60, 75, 80, 55, 90};
    float altezza[5] = {1.70, 1.80, 1.75, 1.60, 1.85};
    float rapporto[5];

    for (int i = 0; i < N; i++) {

        rapporto[i] = peso[i] / altezza[i];

        if (rapporto[i] > K) {
            contatore++;
        }
    }

    printf("\nRapporto peso/altezza:\n");
    for (int i = 0; i < N; i++) {
        printf("Persona %d: %.2f\n", i + 1, rapporto[i]);
    }

    printf("\nPersone con rapporto maggiore di K: %d\n", contatore);

    system("pause");
    return 0;
}
