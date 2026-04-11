#include <stdio.h>
#include <stdlib.h>

void cerca_inserisci(int vettore[], int lunghezza, int valore){
	int sinistra = 0, destra = lunghezza - 1, medio;

	while(sinistra <= destra){
		medio = (sinistra + destra) / 2;

		if(vettore[medio] < valore)
		sinistra = medio + 1;
		else
		destra = medio - 1;
	}

	vettore[sinistra] = valore;
}



int main() {
	int num;
	int v[] = { 2, 5, 7, 10, 14, 18, 21, 25, 30 };
	int lenght = sizeof(v) / sizeof(v[0]);

	printf("Inserisca un numero intero da inserire nel vettore: ");
	if( scanf("%d", &num) != 1 ){
		printf("Errore catturato: input non valido");
		return 1;
	}

	printf("\n==== Vettore prima dell'inserimenti di %d ====\n", num);
	for(int i = 0; i < lenght; i++){
		printf("%d, ", v[i]);
	}

	cerca_inserisci(v, lenght, num); // instruzione sono vague quindi assumo che sovrascrivere il vaklore che occuoa la posizione in cui si dovrebbe trovare il valore inserito va bene

	printf("\n==== Vettore aggiornato ====\n");
	for(int i = 0; i < lenght; i++){
		printf("%d, ", v[i]);
	}


	printf("\n\n");

	system("PAUSE");
	return 0;
}
