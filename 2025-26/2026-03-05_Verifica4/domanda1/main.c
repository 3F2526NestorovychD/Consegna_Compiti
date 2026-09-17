#include <stdio.h>
#include <stdlib.h>


int somma_ricorsiva(int numerino){
 
    if (numerino <= 0) 
        return 0;

    return numerino + somma_ricorsiva(numerino - 1);

}

int main(){
    int n;
    
    printf("Inserisca la somma dei quanti interi positivo: ");
    scanf("%d", &n);

    if(n>1)
      printf("\nSomma ricorsiva da 1 a %d è %d", n, somma_ricorsiva(n));
    else
      printf("\nIl valore inserito deve essere maggiore di 1");
    


    printf("\n");
    system("pause");
    return 0;

}

  
//