#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int premi[10], c = 0;
	int n = sizeof(premi) / sizeof(premi[0]);

	for (int i = 0; i < n; i++) 
		premi[i] = rand() % 1000;

	int minimo = 200, massimo = 700;


    printf("\nI premi nel range [%d, %d] sono:", minimo, massimo);

    for(int i = 0; i < n; i++)
        if(premi[i] >= minimo && premi[i] <= massimo){
          printf(" %d ", premi[i]);
          c = 1;
        }

    printf("\n");

	if(c == 0)
		printf("Nessun premio trovato.");

	system("PAUSE");
	return 0;
    
}