#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1, n2, coppie = 0, condizione = 0;
    
    do {
        printf("Inserisca il primo numero della coppia: ");
        scanf("%d", &n1);
        printf("Inserisca il secondo numero della coppia: ");
        scanf("%d", &n2);
        coppie++;
        
        if(n1 == n2)
            condizione = 1;

        else if(n2 > n1)
            condizione = 2;

    } while(condizione == 0);
    
    if(condizione == 1)
        printf("Terminato perche i due numeri sono uguali\n");
    
    else
        printf("Terminato perche il secondo e maggiore del primo\n");
    
    printf("Coppie inserite: %d\n", coppie);
    
    system("pause");
    return 0;
}
