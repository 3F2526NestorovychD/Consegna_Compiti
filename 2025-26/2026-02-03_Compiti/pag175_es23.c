#include <stdio.h>
#include <stdlib.h>

int main(){
    int base, esponente, risultato = 1;

    
    printf("Inserisca la base (X): ");
    scanf("%d", &base);
    printf("Inserisca l'esponente (Y): ");
    scanf("%d", &esponente);
    
    for(int i = 0; i < esponente; i++)
        risultato = risultato * base;
    
    printf("%d^%d = %d\n", base, esponente, risultato);
    
    system("pause");
    return 0;
}
