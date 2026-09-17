#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n = 0;
    const int N = 100;

	printf("Inserisca il range del vettore: ");
	if (scanf("%d", &n) != 1 || n <= 0) 
		return 1;
	

	int v[N];
	if (n > N) 
		return 1;
	

	printf("Inserisca %d numeri interi: ", n);
	for (int i = 0; i < n; i++) 
		if (scanf("%d", &v[i]) != 1) 
			return 1;
		
	

	int index = 0;
	printf("Inserisca l'indice su cui raddoppiare: ");
	if (scanf("%d", &index) != 1 || index < 0 || index >= n) 
		return 1;

    printf("Vettore di partenza: ");
	for (int i = 0; i < n; i++) 
		printf("%d ", v[i]);
	

	if (index >= 0 && index < n) 
		v[index] *= 2;
	

	printf("\nVettore risultante: ");
	for (int i = 0; i < n; i++) 
		printf("%d ", v[i]);
	

	printf("\n");

    system("PAUSE");
	return 0;
}
