#include <stdio.h>
#include <stdlib.h>

#define SIZE 8 //uso define perché è una costante che non cambia durante l'esecuzione del programma	

void aumenta_prezzi(float prezzi[], float percentuale_massima, float percentuale_minima) {
	
	for (int i = 0; i < SIZE; i++) {
		if(prezzi[i] < 5.00)
			prezzi[i] += prezzi[i] * percentuale_massima;
		else
			prezzi[i] += prezzi[i] * percentuale_minima;
		
	}
}

int main(void) {
	const float aumento_prezzi_mini = 0.10, aumento_prezzi_massimo = 0.60;
	char prodotti[SIZE][15] = {
		"Pane", "Latte", "Burro", "Formaggio", 
		"Prosciutto", "Mele", "Arance", "Uova"
	};
	
	float prezzi[SIZE] = {2.50, 1.80, 4.50, 6.00, 8.50, 3.20, 2.80, 3.50};

	printf("=============LISTINO PREZZI INIZIALE=============\n");
	for (int i = 0; i < SIZE; i++) 
		printf("%-15s: € %.2f\n", prodotti[i], prezzi[i]);

	aumenta_prezzi(prezzi, aumento_prezzi_mini, aumento_prezzi_massimo);

	printf("\n");

	printf("=============LISTINO PREZZI FINALE=============\n");
	for (int i = 0; i < SIZE; i++) 
		printf("%-15s: € %.2f\n", prodotti[i], prezzi[i]);

	printf("\n");
	system("PAUSE");
	return 0;
}
