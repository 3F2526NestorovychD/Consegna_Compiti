#include <stdio.h>
#include <stdlib.h>

const int N = 20;

int main(void) {
	int v[N];
	int pari[N], dispari[N];
	int count_pari = 0, count_dispari = 0;

	printf("Riempimento automatico del vettore casuale: \n");  //Assumo che vanno bene valori tra 1 e 100
	for (int i = 0; i < N; i++){
		v[i] = (rand() % 100) + 1;
		printf("%d ", v[i]);
	}

	printf("\n\nSeparazione in pari e dispari: \n");
	for (int i = 0; i < N; i++){
		if (v[i] % 2 == 0){
			pari[count_pari] = v[i];
			count_pari++;
		} else{
			dispari[count_dispari] = v[i];
			count_dispari++;
		}
	}

	printf("\nNumeri PARI [%d]: ", count_pari);
	for (int i = 0; i < count_pari; i++) {
		printf("%d ", pari[i]);
	}

	printf("\n\nNumeri DISPARI [%d]: ", count_dispari);
	for (int i = 0; i < count_dispari; i++) {
		printf("%d ", dispari[i]);
	}

	printf("\n");
	system("PAUSE");
	return 0;
}
