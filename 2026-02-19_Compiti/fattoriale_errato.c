#include <stdio.h>
#include <stdlib.h>

int fattoriale(int n);

int main(){
    int num;

    printf("Inserisca il numero del fattoriale(intero possitivo): ");
    scanf("%d", &num);

    if(num < 0){
        printf("I fattoriali dei numeri negativi non esistono nella definizione generale dei numeri realli.");
        return 1;
    }

    int risultato = fattoriale(num);
    printf("Il fattoriale del %d è uguale a: %d\n", num, risultato);

    system("pause");
    return 0;
}

int fattoriale(int n){

    int ret = n * fattoriale(n-1);

    if (n == 1 || n == 0)
    return 1;
    else if(n == 2)
    return n;

    return ret;
}