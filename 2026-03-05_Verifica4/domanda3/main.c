#include <stdio.h>
#include <stdlib.h>

int ricerca_occorenze(const int vettore[], int lun, int valore){

    for(int i = 0; i < lun; i++)
        if(vettore[i] == valore)
         return i+1;     
    
    return -1;
}


int main(){

    int v[] = {1, 3, 5, 4, 6, 9};
    int n = (int)(sizeof(v) / sizeof(v[0]));
    int x = 5;

     
    if(ricerca_occorenze(v, n, x) != -1)
      printf("Abbiamo trovato il valore %d in posizione %d\n", x, ricerca_occorenze(v, n, x)); 
    else 
      printf("Valore non trovato\n");


    system("pause");
    return 0;
}



//