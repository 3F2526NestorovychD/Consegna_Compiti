#include <stdio.h>


// entrambe le funzioni sono "fragili", non hanno protezione
// interna per n negativo

long fattoriale_did(int n) {
    // versione didattica
    int fattoriale;
    
    if (n == 0 || n == 1) {
        fattoriale = 1;
    } else {
        fattoriale = n*fattoriale_did(n - 1);
    }

    return fattoriale;
}



long fattoriale_pro(int n) {
    // versione non didattica

    if (n == 0 || n == 1)
        return 1;
    return n * fattoriale_pro(n - 1);
}

int main(void)
{
    int numero;
    long risultato;

    printf("Inserire un numero intero non negativo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Errore: il fattoriale non è definito per numeri negativi.\n");
        return 1;
    }

    risultato = fattoriale_did(numero);
    printf("Il fattoriale di %d calcolato in modo didattico è %lld\n", numero, risultato);

    risultato = fattoriale_pro(numero);
    printf("Il fattoriale di %d calcolato in modo pro è %lld\n", numero, risultato);


    return 0;
}