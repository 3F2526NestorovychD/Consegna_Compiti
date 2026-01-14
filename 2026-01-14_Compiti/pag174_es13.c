#include <stdio.h>
#include <stdlib.h>

int main(){

    int N, valore = 1;//assumo che si debba partire da 1, visto che non era specificatto

    printf("Inserisca il numero positivo di numerini da stampare: ");
    scanf("%d", &N);

    if (N <= 0){
        printf("Non puoi inserire valori nulli o negativi");

        system("pause");
        return 1;
    }

    for (int i = 0; i < N; i++){ 
        printf("%d \n", valore);
        valore = valore * 3;
    }


    system("pause");
    return 0;
}