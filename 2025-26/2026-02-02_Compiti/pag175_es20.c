#include <stdio.h>
#include <stdlib.h>

int main(){

    int risultato = 0, primo_operando, secondo_operando;

    printf("Inserisca il primo operando (moltiplicando): ");
    scanf("%d", &primo_operando);

    printf("Inserisca il secondo operando (moltiplicatore): ");
    scanf("%d", &secondo_operando);

    for (int i = 0; i < secondo_operando; i++) 
        risultato += primo_operando;
    
    printf("Risultato: %d\n", risultato);

    system("pause");
    return 0;
}