#include <stdio.h>
#include <stdlib.h>

const int NRMAX = 30;
const int NCMAX = 20;

void MatriceRighe(int mat[][NCMAX], int nr, int nc);
void MatriceCollone(int mat[][NCMAX], int nr, int nc);

int main(){

    int scelta, nr, nc, mattrice[NRMAX][NCMAX];

    FILE *f = fopen("numeri.txt", "r");
    if (f == NULL)  {
        printf("Errore catturato: impossibile aprire il file.");
        return 1;
    }
    fscanf(f, "%d %d", &nr, &nc);
    fclose(f);

    printf("Scelga uno dei percorsi:\n");
    printf("Caricamento per righe - 1\nCaricamento per collone - 2\n");
    scanf("%d", &scelta);

    switch (scelta)  {

    case 1:
        MatriceRighe(mattrice, nr, nc);
        break;

    case 2:
        MatriceCollone(mattrice, nr, nc);
        break;

    default:
        printf("Errore catturato: input non valido");
        return 1;
    }

    printf("\n");

    system("pause");
    return 0;
}

void MatriceRighe(int mat[][NCMAX], int nr, int nc){

    FILE *f = fopen("numeri.txt", "r");
    if (f == NULL){
        printf("Errore catturato: impossibile aprire il file.");
        return;
    }

    fscanf(f, "%*d %*d");

    for (int r = 0; r < nr; r++){
        for (int c = 0; c < nc; c++){
            fscanf(f, "%d", &mat[r][c]);
        }
    }
    fclose(f);

    printf("\n========= STAMPA =========\n");
    for (int r = 0; r < nr; r++){
        for (int c = 0; c < nc; c++){
            printf("%d\t", mat[r][c]);
        }
        printf("\n");
    }

    return;
}

void MatriceCollone(int mat[][NCMAX], int nr, int nc)
{
    FILE *f = fopen("numeri.txt", "r");
    if (f == NULL)
    {
        printf("Errore catturato: impossibile aprire il file.");
        return;
    }

    fscanf(f, "%*d %*d");

    for (int c = 0; c < nc; c++){
        for (int r = 0; r < nr; r++){
            fscanf(f, "%d", &mat[r][c]);
        }
    }
    fclose(f);

    printf("\n========= STAMPA =========\n");
    for (int r = 0; r < nr; r++){
        for (int c = 0; c < nc; c++){
            printf("%d\t", mat[r][c]);
        }
        printf("\n");
    }

    return;
}