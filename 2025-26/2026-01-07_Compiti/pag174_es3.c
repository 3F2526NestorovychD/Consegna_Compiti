#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, count = 0;

    printf("Inserisca il primo e il secondo estremo: ");
    scanf("%d %d", &a, &b);

    if (a > b){
        printf("\nNon fai ridere... cmq\n");
        int temp = a;
        a = b;
        b = temp;
    }

    printf("Numeri pari compresi tra %d e %d:\n", a, b);

    for (int i = a; i <= b; i++){
        if (i % 2 == 0)
        {
            printf("%d ", i);
            count++;
        }
    }

    printf("\nTotale numeri pari: %d\n", count);

system("pause");
return 0;
}