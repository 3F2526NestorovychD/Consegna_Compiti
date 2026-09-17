#include <stdio.h>
#include <stdlib.h>

void VerificaIntervallo(){
        float num;
        printf("Inserisca un numero: ");
        scanf("%f", &num);

        if(num >= -5 && num <= 10)
            printf("OK! \nIl numero %.2f e' nell'intervallo [-5, 10]\n", num);
        else
            printf("Il numero %.2f non e' nell'intervallo [-5, 10]\n", num);

        return;
    }

int main(){

    VerificaIntervallo();

    system("pause");
    return 0;
}