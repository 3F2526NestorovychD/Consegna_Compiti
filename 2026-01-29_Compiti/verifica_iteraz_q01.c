#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero;

    while (1) {
        printf("Inserisca un numero: ");
       if (scanf("%d", &numero) != 1){
            return 1;
        }

        if (numero <= 2 || numero >= 20){
            printf("Numero di escape inserito: termino il programma.\n"); //forse sarebbe meglio "il valore di escape"
            break;
        }

        printf("Multipli di %d fino a 100:\n", numero);

        for (int i = numero; i <= 100; i += numero){
            if (numero <= 0) { // evito loop infitto di prima in classe
                break; 
            }
            printf("%d ", i);
        }
        printf("\nSi continua...\n");
    }

    system("pause");
    return 0;
}