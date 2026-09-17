#include <stdio.h>
#include <stdlib.h>

int main() {
	float a, b, c;

	printf("Inserisca tre numerini: ");
	scanf("%f %f %f", &a, &b, &c);

	if ((b - a) == (c - b)) {
		printf("I numerini sono in progressione aritmetica.\n");
	} else {
		printf("I numerini NON sono in progressione aritmetica.\n");
	}

	system("pause");
	return 0;
}