#include <stdio.h>
#include <stdlib.h>

int main() {
	int v[100], freq[21];

	for (int i = 0; i <= 20; i++) 
		freq[i] = 0;

	for (int i = 0; i < 100; i++) {
		v[i] = rand() % 20 + 1;
		freq[v[i]]++;
	}

	printf("Frequenza dei numeri da 1 a 20:\n");
	for (int i = 1; i <= 20; i++)
		printf("%d -> %d\n", i, freq[i]);

	
	system("PAUSE");
	return 0;
}
