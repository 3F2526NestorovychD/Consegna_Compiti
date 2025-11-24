#include <stdio.h>
#include <stdlib.h>
void massimo()
{
	int num1, num2, num3;
	int max;
	printf ("Inserire il primo numero: ");
	scanf("%d", &num1);
	printf ("Inserire il secondo numero: ");
	scanf("%d", &num2);
	printf ("Inserire il terzo numero: ");
	scanf("%d", &num3);
	max = num1;
	if (num2 > max)
	max = num2;
	if (num3 > max)
	max = num3;
	printf("Il numero maggiore e' %d\n",max);
}

int main() {
	massimo();
    
	system("pause");
	return 0;
}
