#include <stdio.h>
#include <stdlib.h>

void shift_destra(int vettore[], int lun, int val, int pos){
    if(pos < 0 && pos > lun){
        printf("Posizione %d è fuori range", &pos);
        return;

    }
  
    for(int i = lun-1; i > pos; i-- )
      vettore[i] = vettore[i-1];

    vettore[pos] = val;

    
}



int main(){
     int v[] = {4, 7, 9, 2, 0};
     int n = (int)(sizeof(v) / sizeof(v[0]));
     int valore = 2, posizione = 3;

     shift_destra(v, n, valore, posizione);


    system("pause");
    return 0;
}



//