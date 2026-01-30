#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n;
    float numero, massimo, soma = 0, percentuale;

    printf("Inserisca quanti numeri vuole inserire: ");
    scanf("%d", &n);

    if (n <= 0) { // un controllino per non fare figure come prima
        printf("Inserisca un valore positivo.\n");
        return 1;
    }

    for (int i = 0; i < n; i++){
        printf("Inserisca il numero %d: ", i + 1);
        scanf("%f", &numero);

        soma += numero;

        if (i == 0){
            massimo = numero;
        }
        else {
            if (numero > massimo)
                massimo = numero;
        }
    }   

    percentuale = (massimo / soma) * 100;

    printf("Il massimo[%.2f] rapresenta il %.2f%% della somma dei numeri[%.2f]\n", massimo, percentuale, soma);

    system("pause");
    return 0;
}
