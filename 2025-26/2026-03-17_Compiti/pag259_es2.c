#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n = 0;
    const int N = 100;
	printf("Inserisca la lunghezza del vettore: ");
	if (scanf("%d", &n) != 1 || n <= 0) 
		return 1;
	

	char v[N];
	if (n > N) 
		return 1;
	

	printf("Inserisca %d caratteri alfanumerici: ", n);
	for (int i = 0; i < n; i++) 
		if (scanf(" %c", &v[i]) != 1) 
			return 1;
		
	
	char target = 0;
	printf("Inserisca il carattere da cercare: ");
	if (scanf(" %c", &target) != 1) 
		return 1;
	

	int count = 0;
	for (int i = 0; i < n; i++) 
		if (v[i] == target) 
			count++;
	

	if (count > 0)
		printf("Occorrenze di '%c' catturate: %d\n", target, count);
    else
        printf("Carattere '%c' non trovato nel vettore.\n", target);

	system("PAUSE");
	return 0;
}
