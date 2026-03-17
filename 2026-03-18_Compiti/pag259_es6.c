#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n = 0;\
	const double MIN_RANGE = 1500.0, MAX_RANGE = 2000.0;

	printf("Inserisca il numero di dipendenti: ");
	if (scanf("%d", &n) != 1 || n <= 0)
		return 1;

	double stipendi[n];
	printf("Inserimento automatico di %d stipendi: \n", n);
	for (int i = 0; i < n; i++) {
		stipendi[i] = (rand() / (double)RAND_MAX) * 3000.0; 
		printf("%.2f ", stipendi[i]);
	}

	int found = 0;
	double min = 0.0, max = 0.0;
	for (int i = 0; i < n; i++) {
		double s = stipendi[i];

		if (s >= MIN_RANGE && s <= MAX_RANGE) {
			if (!found) {
				min = s;
				max = s;
				found = 1;
			} else {
				if (s < min)
					min = s;
				if (s > max)
					max = s;
			}
		}
	}

	printf("\n\n");

	if (!found) {
		printf("Nessuno stipendio nel range %.2f - %.2f.\n", MIN_RANGE, MAX_RANGE);
	} else {
		printf("Stipendio minimo nel range: %.2f\n", min);
		printf("Stipendio massimo nel range: %.2f\n", max);
	}
	

	system("PAUSE");
	return 0;
}
