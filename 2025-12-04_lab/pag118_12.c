#include <stdio.h>
#include <stdlib.h>

int main() {
    int eta;

    printf("Inserisca la tua eta': ");
    scanf("%d", &eta);

    if (eta >= 21) {
        printf("Lei puo guidare qualsiasi mezzo di trasporto avebdo la patente.\n");
    } else if(eta >= 18 ){
        printf("Puo guidare l'auto fino a 95 cavalli\n");
    } else if(eta >= 16 ){
        printf("Puo guidare un motociclo fino a 125 cc\n");
    } else if (eta >= 14 ){
        printf("Può guidare uno scooter con cilindrta di 50cc\n");
    } else {
        printf("Non puo guidare alcun mezzo di trasporto.\n");
    }



    system("pause");
    return 0;
}