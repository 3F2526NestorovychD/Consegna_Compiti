#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, K;
    int x;
    int maggiore = 0, minore = 0, uguale = 0;

    printf("Inserisca quanti numeri vuole inserire[N]: ");
    scanf("%d", &N);

    printf("Inserisca un numero da verificare [K]: ");
    scanf("%d", &K);

    for (int i = 0; i < N; i++) {
        printf("Inserisca un numero: ");
        scanf("%d", &x);

        if (x > K) {
            maggiore++;
        } else if (x < K) {
            minore++;
        } else {
            uguale++;
        }
    }

    printf("Numeri maggiori di K: %d\n", maggiore);
    printf("Numeri minori di K: %d\n", minore);
    printf("Numeri uguali a K: %d\n", uguale);

    system("pause");
    return 0;
}
