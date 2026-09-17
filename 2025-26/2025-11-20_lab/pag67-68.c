#include <stdio.h>
#include <stdlib.h>

const float CK = 1.2;

void importo() {
    char nome[15];
    float kmInizio, kmFine, kmPercorsi, costo;

    printf("Inserire il nome: ");
    scanf("%s", &nome);

    printf("Inserire i km iniziali: ");
    scanf("%f", &kmInizio);

    printf("Inserire i km finali: ");
    scanf("%f", &kmFine);

    kmPercorsi = kmFine - kmInizio;
    
    costo = kmPercorsi * CK;

    printf("Gentile Sig./Sig.ra %s, deve pagare %.2f euro\n", nome, costo);
}

int main() {
    importo();
    system("pause");  
    
    return 0;
    }
