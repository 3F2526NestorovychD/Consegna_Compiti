#include <stdio.h>


long fibonacci_did(int n) {

    long ret;

    printf("entro, n = %d\n", n);
    
    if (n == 0)  {
        printf("n è 0, esco ritornando 0\n");
        ret = 0;
    } else {
        int fibDiNMenoUno = fibonacci_did( n-1 );
        ret = n + fibDiNMenoUno;
    }
    
    printf("esco n = %d ritorno %d\n", n, ret);

    return ret;
}




long fibonacci_quasipro(int n) {
    
    if (n == 0) 
        return 0;

        return n + fibonacci_quasipro(n - 1);
}


int main(void) {

    int n;
    long risultato;

    printf("inserire un numero\n");
    scanf("%d", &n);

    risultato = fibonacci_did(n);
    printf("fibonacci(%d) con didattica == %d", n, risultato);

    // possiamo evitare la variabile "risultato" e inserire direttamente la funzione
    // risultato = fibonacci_quasipro(n);
    printf("fibonacci(%d) con quasipro == %d", n, fibonacci_quasipro(n));