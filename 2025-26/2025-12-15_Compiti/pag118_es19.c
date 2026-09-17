#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int num1, num2, somma_esatta, risposta_utente;
    
    printf("Inserisci il primo numero intero (A): ");
    if (scanf("%d", &num1) != 1) {
        printf("Input non valido.\n");
        return 1;
    }
    
    printf("Inserisci il secondo numero intero (B): ");
    if (scanf("%d", &num2) != 1) {
        printf("Input non valido.\n");
        return 1;
    }
   
    somma_esatta = num1 + num2;
    
    printf("Esegui mentalmente la somma di %d + %d\n", num1, num2);
    
    printf("Inserisca il tuo risultato: ");
    if (scanf("%d", &risposta_utente) != 1) {
        printf("Input non valido.\n");
        return 1;
    }
    
    if (risposta_utente == somma_esatta) {
        printf("\n***********************************\n");
        printf("Congratulazioni, hai indovinato al primo tentativo!!\n");
        printf("***********************************\n");
    } else {
        printf("\nHai sbagliato, prova ancora.\n");
        
        printf("Inserisca il nuovo risultato: ");
        if (scanf("%d", &risposta_utente) != 1) {
            printf("Input non valido.\n");
            return 1;
        }
        
        if (risposta_utente == somma_esatta) {
            printf("\n***********************************\n");
            printf("Bravino(per modo de di'), hai indovinato al secondo tentativo...\n");
            printf("***********************************\n");
        } else {
            printf("\n-----------------------------------\n");
            printf("Ti serve un ripasso di matematica.\n");
            printf("(La somma corretta e': %d)\n", somma_esatta);
            printf("-----------------------------------\n");
        }
    }
    
    system("pause");
    return 0;
}