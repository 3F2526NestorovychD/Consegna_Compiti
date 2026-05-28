#include <stdio.h>
#include <string.h>

#define MAX_STR 20 
#define MAX_STUD 10

typedef struct {
    char nome[MAX_STR];
    char cognome[MAX_STR];
    float voto;
} Studente;


void   menu();
int    chiedi_stud();
int    inserimento_array(Studente array[], int lun);
void   sort(Studente array[], int lun);
void   stampa(Studente array[], int lun);
void   stampa_studente(Studente array[], int lun, int idx);
void   stampa_media(Studente array[], int lun);
int    maggVoto(Studente array[], int lun);
int    numSufficienze(Studente array[], int lun);
int    ricerca(Studente array[], int lun, const char cognome[]);


void menu() {
    printf(  "\n\nGESTIONE CLASSE\n");
    printf(  "1) Stampa studenti\n");
    printf(  "2) Media classe\n");
    printf(  "3) Studente con voto piu alto\n");
    printf(  "4) Numero sufficienze\n");
    printf(  "5) Ricerca per cognome\n");
    printf(  "0) Esci\n");
    printf("Scelta: ");
}


int chiedi_stud() {
    int num;
    do {
        printf("Inserisca il numero di studenti da inserire (max %d): ",
               MAX_STUD);
        if (scanf("%d", &num) != 1 || num <= 0 || num > MAX_STUD) {
            printf("Valore non valido, riprova.\n");
            while (getchar() != '\n');
            continue;
        }
        break;
    } while (1);
    return num;
}

int inserimento_array(Studente array[], int lun) {
    for (int i = 0; i < lun; i++) {
        printf("\n\nStudente %d\n", i + 1);
        printf("Inserisca Nome Cognome Voto: ");
        if (scanf("%19s %19s %f", array[i].nome, array[i].cognome, &array[i].voto) != 3) {
            return 1;
        }
    }
    return 0;
}

void sort(Studente array[], int lun) {
    for (int i = 0; i < lun - 1; i++)
        for (int j = 0; j < lun - 1 - i; j++)
            if (strcmp(array[j].cognome, array[j + 1].cognome) > 0) {
                Studente tmp  = array[j];
                array[j]  = array[j + 1];
                array[j + 1]  = tmp;
            }
}

void stampa(Studente array[], const int LUN) {
    printf("\n=== LISTA DELLA CLASSE ===\n");
    for (int i = 0; i < LUN; i++) {
        printf("%-3d Nome: %-15s Cognome: %-15s Voto: %.2f\n",
               i + 1, array[i].nome, array[i].cognome, array[i].voto);
    }
}

void stampa_studente(Studente array[], const int LUN, const int idx) {
    if (idx < 0 || idx >= LUN) {
        printf("Indice non valido.\n");
        return;
    }
    printf("\n=== STUDENTE ===\n");
    printf("Nome:\t%s\n", array[idx].nome);
    printf("Cognome:\t%s\n", array[idx].cognome);
    printf("Voto:\t%.2f\n", array[idx].voto);
}

void stampa_media(Studente array[], const int LUN) {
    float media = 0;
    for (int i = 0; i < LUN; i++)
        media += array[i].voto;
    media /= LUN;
    printf("\n=== MEDIA CLASSE ===\n");
    printf("Media: %.2f\n", media);
}

int maggVoto(Studente array[], const int LUN) {
    int idx = 0;
    for (int i = 1; i < LUN; i++)
        if (array[i].voto > array[idx].voto)
            idx = i;
    return idx;
}

int numSufficienze(Studente array[], const int LUN) {
    int num = 0;
    for (int i = 0; i < LUN; i++)
        if (array[i].voto >= 6)
            num++;
    return num;
}

int ricerca(Studente array[], int lun, const char cognome[]) {
    sort(array, lun);   

    int left = 0, right = lun - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        int cmp = strcmp(array[mid].cognome, cognome);
        if      (cmp == 0) return mid;

        if (cmp  < 0) left = mid + 1;
        else          
        right = mid - 1;
    }
    return -1;
}

int main() {

    const int NUM_STUDENTI = chiedi_stud();
    Studente array[NUM_STUDENTI];

    if (inserimento_array(array, NUM_STUDENTI) != 0) {
        printf("Errore catturato: input non valido.\n");
        return 1;
    }

    
    int scelta;
    do {
        menu();
        if (scanf("%d", &scelta) != 1) {
            while (getchar() != '\n');
            scelta = -1;        
        }

        switch (scelta) {

            case 1:
                stampa(array, NUM_STUDENTI);
                break;

            case 2:
                stampa_media(array, NUM_STUDENTI);
                break;

            case 3: {
                int idx_max = maggVoto(array, NUM_STUDENTI);
                printf("\n=== STUDENTE CON VOTO PIU' ALTO ===\n");
                stampa_studente(array, NUM_STUDENTI, idx_max);
                break;
            }

            case 4:
                printf("\nStudenti sufficienti: %d\n", numSufficienze(array, NUM_STUDENTI));
                break;

            case 5: {
                char cognome[MAX_STR];
                printf("\nInserisca il cognome da cercare: ");
                scanf("%19s", cognome);
                int idx = ricerca(array, NUM_STUDENTI, cognome);
                if (idx == -1)
                    printf("Studente non fa parte della classe.\n");
                else
                    stampa_studente(array, NUM_STUDENTI, idx);
                break;
            }

            case 0:
                printf("\nTermine del programma.\n");
                break;

            default:
                printf("\nScelta non valida, riprova.\n");
                break;
        }

    } while (scelta != 0);

    return 0;
}