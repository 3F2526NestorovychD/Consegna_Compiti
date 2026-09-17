#include <stdio.h>
#include <stdlib.h>

void stampaBinario(unsigned int n) {
    if (n > 1) 
        stampaBinario(n / 2);
    
    printf("%d", n % 2);
}

int main() {

	int flag;

	printf("Inserisca il numero decimale intero positivo: ");
	scanf("%d", &flag);

	if(flag <= 0){
		printf("Errore catturato: il numero deve essere positivo.");
		return 1;
	}

	int num = flag;

	printf("Il numero %d in binario è: ", num);
    stampaBinario(num);

	printf("\n");

	system("PAUSE");
	return 0;
}
