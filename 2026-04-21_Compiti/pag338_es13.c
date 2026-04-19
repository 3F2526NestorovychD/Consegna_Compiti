#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ESAMI 30

typedef struct{
    char nome_esame[25];
    int voto;
} Esame;

int cerca_esame(const Esame esami[], int n, const char *nome_cercato){
    for (int i = 0; i < n; i++){
        if (strcmp(esami[i].nome_esame, nome_cercato) == 0)
            return i;
    }
    return -1;
}

int main()
{
    int n_esami, n_prova, cerca;
    printf("Inserisca il numero di esami (<30): ");
    scanf("%d", &n_prova);
    if (n_prova < 0 || n_prova >= MAX_ESAMI) {
        printf("Errore catturato: Numero di esami non valido.\n");
        return 1;
    }
    n_esami = n_prova;

    Esame esami[MAX_ESAMI];
    for (int i = 0; i < n_esami; i++){
        printf("Inserisca nome e voto dell'esame %d: ", i + 1);
        scanf("%s %d", esami[i].nome_esame, &esami[i].voto);
    }

    do{
        printf("\nVorebbe cercare un esame? (1=si, 0=no)\n");
        printf("Scelta: ");
        scanf("%d", &cerca);
        switch (cerca){
        case 1:{
            char nome_cercato[25];
            printf("Inserisca il nome dell'esame da cercare: ");
            scanf("%s", nome_cercato);
            int indice = cerca_esame(esami, n_esami, nome_cercato);
            if (indice != -1)
                printf("Esame trovato: %s - Voto: %d\n", esami[indice].nome_esame, esami[indice].voto);
            else
                printf("Errore catturato: Esame non trovato.\n");

            break;
        }
        case 0:
            printf("Fine del programma.\n");
            break;
        default:
            printf("Scelta non valida, riprova\n");
        }
    } while (cerca != 0);

    printf("\n");
    system("pause");
    return 0;
}