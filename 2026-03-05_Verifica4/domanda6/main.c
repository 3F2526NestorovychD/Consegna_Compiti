#include <stdio.h>
#include <stdlib.h>

void procedura_valori_valanti(const int vettore[], int lun){
     
    printf("I valori NON valanti del vettore sono: ");
    for(int i = 1; i < lun-1; i++)
       if (!(vettore[i] < vettore[i - 1] && vettore[i] < vettore[i + 1])) {
            printf("%d ", vettore[i]);
        }

        printf("\n");

    return;
}

int main(){
    int v[] = {4, 7, 9, 2, 0};
    int n = (int)(sizeof(v) / sizeof(v[0]));

    procedura_valori_valanti(v, n);

    system("pause");
    return 0;
}



//