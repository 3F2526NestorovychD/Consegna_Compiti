#include <stdio.h>
#include <stdlib.h>

int main() {
    int eta[2], min, max, diff;

    printf("Inserisca l'età del fratello 1: ");
    scanf("%d", &eta[0]); 
    eta[0] = max = min; //inizializzo max e min con l'età del primo fratello

    for (int i = 1; i < 3; i++){
       printf("Inserisca l'età del fratello %d: ", i + 1);
       scanf("%d", eta+i); 
       if(eta[i] > max){
           max = eta[i];
       }
       else if(eta[i] < min){
         min = eta[i];
       }

    }
    diff = max - min;
    printf("La differenza di età tra il fratello più grande[%d] e quello più giovane[%d] è: %d\n", max, min, diff);


 system("pause");
 return 0;
}