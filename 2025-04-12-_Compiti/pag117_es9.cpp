/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <stdio.h>
#include <stdlib.h>

int main() {
    float limite, temp1, temp2, temp3, media;

    printf("Inserisca il valore limite di accensione del riscaldamento in °C: ");
    scanf("%f", &limite);

    printf("Inserisca le tre temperature registrate: ");
    scanf("%f %f %f", &temp1, &temp2, &temp3);

    media = (temp1 + temp2 + temp3) / 3.0;

    printf("La media delle temperature è: %.2f°C\n", media);

    if (media < limite) {
        printf("quindi il riscaldamento si accenderà.\n");
    } else {
        printf("perciò il riscaldamento NON si accenderà.\n");
    }
    
    system("pause");
    return 
}