#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int a[100], b[100];
    float media, maxMedia;
    int pos = 0;

    printf("Quante coppie: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        a[i] = rand() % 100;
        b[i] = rand() % 100;
        printf("Coppia [%d]: %d %d\n", i+1, a[i], b[i]);
    }

    maxMedia = (a[0] + b[0]) / 2.0;

    for (int i = 1; i < n; i++) {
        media = (a[i] + b[i]) / 2.0;
        if (media > maxMedia) {
            maxMedia = media;
            pos = i;
        }
    }

    printf("Coppia con media maggiore: %d %d\n\n7", a[pos], b[pos]);

    system("pause");
    return 0;
}