#include <stdio.h>
#include <stdlib.h>

int main() {

    const int NUM_REPARTI = 5;
    float vendite[NUM_REPARTI];
    float totale = 0;


    for (int i = 0; i < NUM_REPARTI; i++) {
        printf("Inserisca le vendite per il reparto %d: ", i + 1);
        scanf("%f", &vendite[i]);
        totale += vendite[i]; 
    }


    if (totale == 0) {
        printf("\nNessuna vendita registrata oggi.\n");
    } else {
        printf("\n==== Report Vendite Giornaliere ====\n");
        printf("Totale complessivo: %.2f Euro\n\n", totale);
        

        for (int i = 0; i < NUM_REPARTI; i++) {
            float percentuale = (vendite[i] / totale) * 100;
            printf("Reparto %d: %.2f Euro [quota: %.2f%%]\n", i + 1, vendite[i], percentuale);
        }
    }

    printf("\n\n");
    
    system("pause");
    return 0;
}