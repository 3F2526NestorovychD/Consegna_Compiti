#include <stdio.h>

// dato n somma n, n -1, n-2, 1 

long sommaPrec_didattica(int n) {

    long ret;

    printf("entro, chiamata con n = %d\n", n);
    
    if (n == 0)  {
        printf("n è 0, esco ritornando 0\n");
        ret = 0;
    } else {
        int sommaPrecDiNMenoUno = sommaPrec_didattica( n-1 );
        ret = n + sommaPrecDiNMenoUno;
    }
    
    printf("esco dalla chiamata con n = %d ritorno %d\n", n, ret);

    return ret;
}




long sommaPrec_quasipro(int n) {
    
    if (n == 0) 
        return 0;

        return n + sommaPrec_quasipro(n - 1);
}


int main(void) {

    int n;
    long risultato;

    printf("inserire un numero\n");
    scanf("%d", &n);

    risultato = sommaPrec_didattica(n);
    printf("sommaPrec(%d) con didattica == %d", n, risultato);

    // possiamo evitare la variabile "risultato" e inserire direttamente la funzione
    // risultato = sommaPrec_quasipro(n);
    printf("sommaPrec(%d) con quasipro == %d", n, sommaPrec_quasipro(n));
} //mio: a quanto pare non serve piu il return 0; alla fine del main in C99 in poi