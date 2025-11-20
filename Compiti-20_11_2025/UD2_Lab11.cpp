#include <stdio.h>
#include <stdlib.h>

#define CK 1.20  // voglio chiarimenti

void importo() {
    char nome[15];
    float kmInizio;
    float kmFine;
    float kmPercorsi;
    float costo;

    printf("Inserire il nome: ");
    scanf("%s", nome);

    printf("Inserire i km iniziali: ");
    scanf("%f", &kmInizio);

    printf("Inserire i km finali: ");
    scanf("%f", &kmFine);

    kmPercorsi = kmFine - kmInizio;


    costo = kmPercorsi * CK;

    printf("Gentile Sig./Sig.ra %s, deve pagare %.2f euro\n", nome, costo);
}

int main(int argc, char *argv[]) {
    importo();
    system("pause");  } // non ho capito 