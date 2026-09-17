#include <stdio.h>

#define N 10

typedef struct {
    int codice;
    int pagine;
    float costo;
} Libro;

int main() {
    Libro libri[N];

    float sommaCosti = 0;
    float costoMax = 0;
    int codiceMax, sommaPagine = 0;


    for(int i = 0; i < N; i++) {
        printf("Libro %d\n", i + 1);
        printf("Codice: ");
        scanf("%d", &libri[i].codice);
        printf("Numero pagine: ");
        scanf("%d", &libri[i].pagine);
        printf("Costo: ");
        scanf("%f", &libri[i].costo);

        sommaCosti += libri[i].costo;
        sommaPagine += libri[i].pagine;

        if(i == 0 || libri[i].costo > costoMax) {
            costoMax = libri[i].costo;
            codiceMax = libri[i].codice;
        }
    }


    float costoMedioPagina = sommaCosti / sommaPagine;

    printf("\nCosto medio per pagina: %.2f\n", costoMedioPagina);
    printf("Codice del libro più caro: %d\n", codiceMax);

    return 0;
}