#include <stdio.h>
#include <stdlib.h>

int main(){
    int numGiorni, giorno, giornoSettimana, copie;
    int giornoMax = 0, copieMax = 0;
    int totCopie = 0;
    int totDomeniche = 0, numDomeniche = 0;
    
    printf("Quanti giorni del mese? ");
    scanf("%d", &numGiorni);
    
    for(int i = 0; i < numGiorni; i++){
        printf("\nGiorno %d:\n", i + 1);
        printf("Numero del giorno: ");
        scanf("%d", &giorno);
        printf("Giorno settimana (1=lun, 2=mar, ... 7=dom): ");
        scanf("%d", &giornoSettimana);
        if (giornoSettimana < 1 || giornoSettimana > 7){
            printf("Errore catturato: Giorno della settimana non valido. Riprova.\n");
            i--;
            continue;
        }
        
        printf("Copie vendute: ");
        scanf("%d", &copie);
        
        totCopie = totCopie + copie;
        
        if(copie > copieMax){
            copieMax = copie;
            giornoMax = giorno;
        }
        
        if(giornoSettimana == 7){
            totDomeniche = totDomeniche + copie;
            numDomeniche++;
        }
    }
    
    printf("\nGiorno con vendita massima: %d (%d copie)\n", giornoMax, copieMax);
    printf("Media giornaliera: %.2f copie\n", (float)totCopie / numGiorni);
    
    if(numDomeniche > 0)
        printf("Media vendite domenicali: %.2f copie\n", (float)totDomeniche / numDomeniche);
    
    
    system("pause");
    return 0;
}
