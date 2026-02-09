/* Commenti che iniziano con "-->" 
sono dello studente    */

#include <stdio.h>
#include <stdlib.h>


void stampa(int v[], int n, int start_stampa) {

    printf("\n");
    for (int i = start_stampa; i < n; i++) {
        printf("%d, ", v[i]);
    }
}
void insertionSort(int v[], int n) {
      if (n <= 1) {
        printf("Errore catturato: Valore di n non valido.");
        return ; }// ---> il codice non dovrebbe nemmeno partire con n = 0, ma se dovesse entrare allora la riga 34 diventa pericolante 

    for (int start_confronto = 0; start_confronto < n - 1; start_confronto++) { //---> Quando arriviamo alla iterazione n il array e' gia ordinato, quindi metto -1

        printf("\n\n");
        printf("\nesamino vettore da pos %d: ", start_confronto);
        printf("la parte di vettore che esamino è: ");
        stampa(v, n, start_confronto);
        int pos_current_min = start_confronto;
        int current_min = v[start_confronto]; 
        for (int i = start_confronto; i < n; i++) {
            if (v[i] < current_min) {
                current_min = v[i]; // --> non veniva aggiornato il valore di current_min
                pos_current_min = i;
            }
        }
        printf("\nposizione di partenza %d il minimo è %d in posizione %d sposto min in pos partenza\n", 
            start_confronto, current_min, pos_current_min);

        int temp_save = v[start_confronto]; // salva prima
        v[start_confronto] = v[pos_current_min];
        v[pos_current_min] = temp_save;
        printf("dopo scambio l'intero vettore è");
        stampa(v, n, 0);
    }

}



int main(int argc, char *argv[]) {
    
    int v[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 11};
    const int n = sizeof(v)/sizeof(v[0]);

    insertionSort(v, n);
    // stampa(v, n, 0);

    // system("PAUSE");
	return 0;
}
