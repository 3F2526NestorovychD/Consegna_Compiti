 #include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(){
    FILE *fp;
    int numero, n, i;
    

    int sommaPari = 0, sommaDispari = 0;
    int contaPari = 0, contaDispari = 0;

    int maxPositivo = INT_MIN;
    int minNegativo = INT_MAX;
    int trovatoPositivo = 0, trovatoNegativo = 0;
    

    fp = fopen("numeri.txt", "r");
    if(fp == NULL){
        printf("Errore catturato nell'apertura del file\n");
        system("pause");
        return 1;
    }
    
    fscanf(fp, "%d", &n);
    
    for(i = 0; i < n; i++){
        fscanf(fp, "%d", &numero);
        
        if(numero % 2 == 0){
            sommaPari += numero;
            contaPari++;
        } else {
            sommaDispari += numero;
            contaDispari++;
        }
        
        if(numero > 0 && numero > maxPositivo){
            maxPositivo = numero;
            trovatoPositivo = 1;
        }
        if(numero < 0 && numero < minNegativo){
            minNegativo = numero;
            trovatoNegativo = 1;
        }
    }
    
    fclose(fp);
    
    printf("=== RISULTATI ===\n\n");
    
    if(contaPari > 0)
        printf("Media numeri pari: %.2f\n", (float)sommaPari / contaPari);
     else 
        printf("Nessun numero pari trovato.\n");
    
    
    if(contaDispari > 0)
        printf("Media numeri dispari: %.2f\n", (float)sommaDispari / contaDispari);
     else 
        printf("Nessun numero dispari trovato.\n");
    
    printf("\n");
    
    if(trovatoPositivo)
        printf("Numero positivo maggiore: %d\n", maxPositivo);
     else 
        printf("Nessun numero positivo trovato.\n");
    
    if(trovatoNegativo) 
        printf("Numero negativo minore: %d\n", minNegativo);
     else 
        printf("Nessun numero negativo trovato.\n");
    

    system("pause");    
    return 0;
}