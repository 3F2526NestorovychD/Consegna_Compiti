#include <stdio.h>
#include <stdlib.h>

void stampa_valori_pari(int vettore[], int lun);

int main(){

   int vet[] = {2, 4, 7, 8, 12, 13};
   int n = sizeof(vet)/sizeof(vet[0]);

   stampa_valori_pari(vet, n);


    system("pause");
    return 0;
}

void stampa_valori_pari(int vettore[], int lun){
    printf("Valori pari nel vettiore sono: \n");
    for(int i = 0; i < lun; i++){
        if(vettore[i] % 2 == 0) 
          printf(" %d ", vettore[i]);
    }
     

    return;
 }

//