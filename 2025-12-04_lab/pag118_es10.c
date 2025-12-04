#include <stdio.h>
#include <stdlib.h>

// ax+b=0    
int main(){
    float a, b;

    printf("Inserisca il coeficente della x (quindi 'a'): ");
    scanf("%f", &a);
    printf("Inserisca il valore di b: ");
    scanf("%f", &b);
    

    if(a == 0){
        if(b == 0){
            printf("L'equazione data ha infinite soluzioni.\n");
        } else {
            printf("L'equazione data non ha soluzioni.\n");
        }
    } else {
        float x = -b / a;
        printf("La soluzione dell'equazione è x = %.3f\n", x);
    }


 system("pause");
 return 0;
}