#include <stdio.h>
#include <stdlib.h>

int isPrimo(int n) {
    if (n <= 1) return 2;
    for (int i = 2; i < n; i++){
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {

	int v[] = {2, 4, 5, 6, 7, 9, 11};
    int n = sizeof(v) / sizeof(v[0]);

    printf("Controllo dei numeri primi:\n");

    for (int i = 0; i < n; i++) {
        if (isPrimo(v[i])) {
            printf("%d ", v[i]);
        } else if(isPrimo(v[i]) == 2) {
			printf("Il numero %d non è valido.\n", v[i]);
		} else {
			printf("%d non è primo.\n", v[i]);
		}
	}

	printf("\n");

	system("PAUSE");
	return 0;
}
