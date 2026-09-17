#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int numerino = 0;
    const int N = 1000;

    printf("Inserisca la lunghezza del vettore: ");
    if (scanf("%d", &numerino) != 1 || numerino <= 0)
        return 1;

    int v1[N], v2[N], somma[N];
    if (numerino > N)
        return 1;

    for (int i = 0; i < numerino; i++)
        v1[i] = rand() % 100;

    for (int i = 0; i < numerino; i++)
        v2[i] = rand() % 100;

    for (int i = 0; i < numerino; i++)
        somma[i] = v1[i] + v2[i];

    printf("\nVettore v1: ");
    for (int i = 0; i < numerino; i++)
        printf("%d ", v1[i]);

    printf("\nVettore v2: ");
    for (int i = 0; i < numerino; i++)
        printf("%d ", v2[i]);

    printf("\nVettore somma: ");
    for (int i = 0; i < numerino; i++)
        printf("%d ", somma[i]);

    printf("\n");

    system("PAUSE");
    return 0;
}