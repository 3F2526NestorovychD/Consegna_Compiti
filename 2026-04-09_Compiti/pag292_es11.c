#include <stdio.h>
#include <string.h>

#define MAX_PERSONE 100
#define MAX_STRING 50

void stampa_residenti_agosto(char cogn[MAX_PERSONE][MAX_STRING], char cit[MAX_PERSONE][MAX_STRING], int mes[MAX_PERSONE], int n) {
    char citta_ricerca[MAX_STRING];
    printf("Inserisca la città di cui vuole vedere i residenti nati in agosto: ");
    scanf("%s", citta_ricerca);

    int my_flag = 0;
    printf("\nResidenti di %s nati in agosto:\n", citta_ricerca);
    for (int i = 0; i < n; i++)
        if (mes[i] == 8 && strcmp(cit[i], citta_ricerca) == 0) {
            printf("%s\n", cogn[i]);
            my_flag = 1;
        }

        if (my_flag == 0) 
            printf("Nessun residente trovato di quella città nato in agosto.\n");
}

void stampa_dati_telefono(char cogn[MAX_PERSONE][MAX_STRING], char cit[MAX_PERSONE][MAX_STRING], char tel[MAX_PERSONE][MAX_STRING], int n) {
    char telefono_ricerca[MAX_STRING];
    printf("Inserisca il numero di telefono della persona di cui vuole vedere i dati: ");
    scanf("%s", telefono_ricerca);

    printf("\nDati della persona con telefono %s:\n", telefono_ricerca);
    for (int i = 0; i < n; i++) 
        if (strcmp(tel[i], telefono_ricerca) == 0) {
            printf("Cognome: %s\n", cogn[i]);
            printf("Città: %s\n", cit[i]);
            printf("Telefono: %s\n", tel[i]);
            return;
        }
    printf("Nessuna persona trovata con quel numero di telefono.\n");
}

void stampa_telefono_cognome(char cogn[MAX_PERSONE][MAX_STRING], char tel[MAX_PERSONE][MAX_STRING], int n) {
    char cognome_ricerca[MAX_STRING];
    printf("Inserisca il cognome della persona di cui vuole vedere il numero di telefono: ");
    scanf("%s", cognome_ricerca);

    printf("\nNumero di telefono della persona con cognome %s:\n", cognome_ricerca);
    for (int i = 0; i < n; i++) 
        if (strcmp(cogn[i], cognome_ricerca) == 0) {
            printf("%s\n", tel[i]);
            return;
        }
    printf("Nessuna persona trovata con quel cognome.\n");
}

void auguri_compleanno(char cogn[MAX_PERSONE][MAX_STRING], char cit[MAX_PERSONE][MAX_STRING], int gio[MAX_PERSONE], int mes[MAX_PERSONE], int n) {
    int giorno_ricerca, mese_ricerca;
    printf("Inserisca il giorno di nascita della persona a cui vuole fare gli auguri: ");
    scanf("%d", &giorno_ricerca);
    if(giorno_ricerca < 1 || giorno_ricerca > 31) {
        printf("Errore catturato: Giorno non valido, si deve inserire un numero tra 1 e 31.\n");
        return;
    }

    printf("Inserisca il mese di nascita (numerico) della persona a cui vuole fare gli auguri: ");
    scanf("%d", &mese_ricerca);
    if(mese_ricerca < 1 || mese_ricerca > 12) {
        printf("Errore catturato: Mese non valido, si deve inserire un numero tra 1 e 12.\n");
        return;
    }

    printf("\nAuguri di buon compleanno a:");
    for (int i = 0; i < n; i++) 
        if (gio[i] == giorno_ricerca && mes[i] == mese_ricerca) 
            printf("%s\n", cogn[i]);
}



int main() {
    int n, scelta, var_di_controllo;
    

    char cognomi[MAX_PERSONE][MAX_STRING], citta[MAX_PERSONE][MAX_STRING], telefoni[MAX_PERSONE][MAX_STRING];
    int giorni[MAX_PERSONE], mesi[MAX_PERSONE];
    

    printf("Inserisca il numero di persone: ");
    scanf("%d", &var_di_controllo);
    if (var_di_controllo < 1 || var_di_controllo > MAX_PERSONE) {
        printf("Errore catturato: Numero di persone non valido, si deve inserire un numero tra 1 e %d.\n", MAX_PERSONE);
        return 1; 
     }
     n = var_di_controllo;

    for (int i = 0; i < n; i++) {
        printf("\nPersona %d:\n", i + 1);
        
        printf("Cognome: ");
        scanf("%49s", cognomi[i]);
        while(getchar() != '\n');
        
        printf("Città: ");
        scanf("%49s", citta[i]);
        while(getchar() != '\n');
        
        printf("Telefono: ");
        scanf("%49s", telefoni[i]);
        while(getchar() != '\n');
        
        printf("Giorno di nascita: ");
        scanf("%2d", &giorni[i]);
        while(getchar() != '\n');
        
        printf("Mese di nascita(numerico): ");
        scanf("%2d", &mesi[i]);
        while(getchar() != '\n');
    }


    printf("\nCosa vorebbe provare adesso? \n");
    printf("\n1 --> stampa i nominativi dei residenti di una determinata città nati in agosto");
    printf("\n2 --> stampa i dati relativi a una persona di cui siconosce il numero di telefono");
    printf("\n3 --> visualizzazione del numero di telefono in base al cognome");
    printf("\n4 --> scrivere gli auguri di buon compleanno in base al giorno e mese di nascita\n");

    printf("Inserisca la sua scelta: ");
    scanf("%d", &scelta);

    switch (scelta)
    {
    case 1:
        printf("\n Strana come scelta\n");    
        stampa_residenti_agosto(cognomi, citta, mesi, n);
       
        break;
    
    case 2:
        printf("\n Bella come scelta\n");
        stampa_dati_telefono(cognomi, citta, telefoni, n);
        break;
    
    case 3:
        printf("\nUna scelta ragionevole\n");
        stampa_telefono_cognome(cognomi, telefoni, n);
        break;
    
    case 4:
        auguri_compleanno(cognomi, citta, giorni, mesi, n);
        break;
    
    default:
        printf("\nErrore catturato: Scelta non valida.\n");
    } //c'è un modo per far saltare a una riga di codice in c? o ad uno specificatore
    

    
    
    return 0;
}
