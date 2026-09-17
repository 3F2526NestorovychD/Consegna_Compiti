#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero, precedente;
    int differenza, diffCorrente;
    int costante = 1,contatore = 0;
    
    printf("Inserisca il primo numero: ");
    scanf("%d", &precedente);
    contatore++;
    
    printf("Inserisca il secondo numero (999 per terminare): ");
    scanf("%d", &numero);
    
    if(numero != 999){
        contatore++;
        differenza = numero - precedente;
        precedente = numero;
        
        printf("Inserisca numero (999 per terminare): ");
        scanf("%d", &numero);
        
        while(numero != 999){
            contatore++;
            diffCorrente = numero - precedente;
            
            if(diffCorrente != differenza)
                costante = 0;
            
            
            precedente = numero;
            printf("Inserisca un numero (999 per terminare): ");
            scanf("%d", &numero);
        }
    }
    
    if(costante == 1)
        printf("La differenza e' costante\n");
    
    else
        printf("La differenza NON e' costante\n");
    
    printf("Numeri inseriti: %d\n", contatore);
    
    system("pause");
    return 0;
}
