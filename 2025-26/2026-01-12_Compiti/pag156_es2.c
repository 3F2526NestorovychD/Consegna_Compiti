/*Erorri presenti nel algoritmo era che il valore max si legeva all'inizio, nel ramo vero del secondo if dobbiamo assegnare
alla variabile MAX il valore di NUM, non al contrario. Il contattore è fuori posto, se uno continua ad inserire numeri maggiori
del precedente potrebbe non solo superare i 4 tentaivii, ma anche iniziare  un loop infinito */




//l'akgoritmo corretto:

#include <stdio.h>
#include <stdlib.h>


int main() {
    int num, max;
    int c = 1;

    printf("Inserisci il numero 1: ");
    scanf("%d", &num);
    max = num;

    while (c < 4){
        printf("Inserisci il numero %d: ", c + 1);
        scanf("%d", &num);

        if (num > max) {
            max = num;
        }

        c++; //hehe
    }


    printf("Il valore massimo e': %d\n", max);

    return 0;
}
