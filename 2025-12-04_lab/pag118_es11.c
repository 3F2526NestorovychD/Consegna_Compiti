#include <stdio.h>
#include <stdlib.h>

int main() {
    int eta[3], min, max, diff;

    printf("Inserisca l'età del fratello 1: ");
    scanf("%d", &eta[0]); 
    max = min = eta[0]; //inizializzo max e min con l'età del primo fratello

    for (int i = 1; i < 3; i++){
       printf("Inserisca l'età del fratello %d: ", i + 1);
       scanf("%d", &eta[i]); 
       
       if(eta[i] > max){
           max = eta[i];
       }
       else if(eta[i] < min){
         min = eta[i];
       }

    }
    diff = max - min;
    printf("La differenza di età tra il fratello più grande[%d anni] e quello più giovane[%d anni] è: %d\n", max, min, diff);


 system("pause");
 return 0;
}