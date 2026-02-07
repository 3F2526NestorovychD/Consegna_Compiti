#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i;
    int iscritti, votanti, nulle, bianche;
    int totIscritti = 0, totVotanti = 0, totNulle = 0, totBianche = 0   ;
    
    printf("Quanti seggi? ");
    scanf("%d", &n);
    
    for(i = 0; i < n; i++){
        printf("Seggio %d:\n", i + 1);
        printf("Numero iscritti: ");
        scanf("%d", &iscritti);
        printf("Numero votanti: ");
        scanf("%d", &votanti);
        printf("Schede nulle: ");
        scanf("%d", &nulle);
        printf("Schede bianche: ");
        scanf("%d", &bianche);
        
        totIscritti = totIscritti + iscritti;
        totVotanti = totVotanti + votanti;
        totNulle = totNulle + nulle;
        totBianche = totBianche + bianche;
    }
    
    printf("\nPercentuale votanti: %.2f%%\n", (float)totVotanti / totIscritti * 100);
    printf("Percentuale schede bianche: %.2f%%\n", (float)totBianche / totVotanti * 100);
    printf("Percentuale schede nulle: %.2f%%\n", (float)totNulle / totVotanti * 100);
    
    system("pause");
    return 0;
}
