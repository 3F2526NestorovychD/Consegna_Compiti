#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int v[10];
    int n = sizeof(v) / sizeof(v[0]);

	for (int i = 0; i < n; i++) 
		v[i] = rand() % 100; 

    for(int i = 0; i < n - 1; i++)
        if(v[i] > v[i + 1]){
            printf("Vettore non è ordinato!\n"); //assumo che un messagio sia sufficiente
            system("PAUSE");
            return 0;
        }

    printf("Vettore è ordinato!\n");

	system("PAUSE");
	return 0;
}