#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int num_edicole = 3;

int main()
{
    char nomeGiornaleMax[50] = "";
    int maxCopieVendute = -1;
    float incassoTot = 0.0;

    char nomeAtuale[40];
    int copieVendute;
    float GuadagnoPerCopia;
    float incassoAtuale;

    for (int i = 1; i <= num_edicole; i++)
    {
        printf("\n--- Giornale %d ---\n", i);

        printf("Inserisca il nome del giornale: ");
        scanf("%s", nomeAtuale);

        printf("Inserisca le copie vendute: ");
        scanf("%d", &copieVendute);

        if (copieVendute <= 200)
            GuadagnoPerCopia = 0.1;
        else if (copieVendute < 300)
            GuadagnoPerCopia = 0.2;
        else
            GuadagnoPerCopia = 0.3;

        incassoAtuale = copieVendute * GuadagnoPerCopia;
        incassoTot += incassoAtuale;

        // giornale più venduto
        if (copieVendute > maxCopieVendute){
            maxCopieVendute = copieVendute;
            strcpy(nomeGiornaleMax, nomeAtuale);
        }
    }

    printf("\n---   Risultati  ---\n");
    printf("Giornale piu' venduto: %s (%d copie)\n", nomeGiornaleMax, maxCopieVendute);
    printf("Incasso totale dell'edicolante: %.2f Euro\n", incassoTot);


    system("pause");
    return 0;
}
