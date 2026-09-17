#include <stdio.h>
#include <stdlib.h>

int main(){
    int dividendo, divisore, dividendo_pos, divisore_pos;
    int quoziente = 0, resto, segno_quoziente = 1;
    
    printf("Inserisca il dividendo: ");
    scanf("%d", &dividendo);
    printf("Inserisca il divisore: ");
    scanf("%d", &divisore);
    
    if(divisore == 0){
        printf("Errore catturato: divisore nullo.\n");
        system("pause");
        return 1;
    }

    if( (dividendo < 0 && divisore > 0) || (dividendo > 0 && divisore < 0)   ){
        segno_quoziente = -1;
    }

    dividendo_pos = (dividendo < 0) ? -dividendo : dividendo;
    divisore_pos = (divisore < 0) ? -divisore : divisore;
    resto = dividendo_pos;
    
    while(resto >= divisore_pos){
        resto -= divisore_pos;
        quoziente++;
    }

    quoziente *= segno_quoziente;
    if(dividendo < 0){
        resto = -resto;
    }
    
    printf("Quoziente: %d\n", quoziente);
    printf("Resto: %d\n", resto);
    
    system("pause");
    return 0;
}
