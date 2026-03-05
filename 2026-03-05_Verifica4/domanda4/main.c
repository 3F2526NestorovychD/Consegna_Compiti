#include <stdio.h>
#include <stdlib.h>

int conta_magiori(const int vettore[], int lun, int t) {
    int accum = 0;
    for (int i = 0; i < lun; i++) {
        if (vettore[i] > t) {
            accum++;
        }
    }
    return accum;
}

int main(){
     int v[] = {4, 7, 9, 2, 0};
     int n = (int)(sizeof(v) / sizeof(v[0]));
     int valore = 2;
     printf("Valore trovato %d volte\n", conta_magiori(v, n, valore));
      

    system("pause");
    return 0;
}



//