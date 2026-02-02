#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main() {

    FILE *file;
    int numero; 
    int tessera, tesseraSpesaMin;
    float spesa, incassoTot, spesaMin;

    file = fopen("Clienti.txt", "r");
    if (file == NULL){
        printf("Errore catturato: impossibile aprire il file Clienti.txt\n");
        return 1;
    }

    fscanf(file, "%d", &numero);

    incassoTot = 0;
    spesaMin = FLT_MAX;
    tesseraSpesaMin = 0;

    for (int i = 0; i < numero; i++){
        fscanf(file, "%d %f", &tessera, &spesa);

        incassoTot += spesa;
        if (spesa < spesaMin){
            spesaMin = spesa;
            tesseraSpesaMin = tessera;
        }
    }

    fclose(file);

    printf("Incasso totale della cassa: %.2f euro\n", incassoTot);
    printf("Tessera con spesa minore: %d (spesa: %.2f euro)\n", tesseraSpesaMin, spesaMin);

    return 0;
}
