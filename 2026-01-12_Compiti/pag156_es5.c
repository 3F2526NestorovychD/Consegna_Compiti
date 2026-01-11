#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    int a[100], b[100];
    float media, maxMedia;
    int pos = 0;

    printf("Quanti numeri: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        a[i] = rand() % 100;
        b[i] = rand() % 100;
        printf("Coppia [%d]: %d %d\n", i+1, a[i], b[i]);
    }

    maxMedia = (a[0] + b[0]) / 2.0;

    for (int i = 1; i < N; i++) {
        media = (a[i] + b[i]) / 2.0;
        if (media > maxMedia) {
            maxMedia = media;
            pos = i;
        }
    }

    printf("Coppia con media maggiore: %d %d\n", a[pos], b[pos]);

    system("pause");
    return 0;
}