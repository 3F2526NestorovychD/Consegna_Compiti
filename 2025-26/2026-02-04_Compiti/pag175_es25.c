#include <stdio.h>
#include <stdlib.h>

int main(){
    int guadagnoGiorno = 10, totale = 0;
    
    for(int giorno = 1; giorno <= 22; giorno++){
        totale += guadagnoGiorno;
        guadagnoGiorno = guadagnoGiorno * 2;
    }
    
    printf("Stipendio dopo 22 giorni: %d euro\n", totale);
    
    system("pause");
    return 0;
}
