#include <stdio.h>

int main() {
    int n, x, min;

    printf("Quanti numeri vuole inserire? ");
    scanf("%d", &n);


    scanf("%d", &x);
    min = x; // ecco la risposta

 
    for (int i = 1; i < n; i++) {
        scanf("%d", &x);
        if (x < min) {
            min = x;
        }
    }

    printf("Il valore minimo è: %d\n", min);

    return 0;
}
