#include <stdio.h>
#include <stdlib.h>

int main(){
    float a, b, numero;
    
    do {
        printf("Inserisca a: ");
        scanf("%f", &a);
        printf("Inserisca b: ");
        scanf("%f", &b);
        
        if (a >= b) 
            printf("Errore catturato: a deve essere minore di b. Riprova.\n");
        
    } while (a >= b);
    
    do {
        numero = rand() % 101;
        printf("%.0f\n", numero);
    } while (numero >= a && numero <= b);
    
    system("pause");
    return 0;    
}