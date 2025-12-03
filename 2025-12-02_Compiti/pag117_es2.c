#include <stdio.h>
#include <stdlib.h>

  
 void OrdineCrescente(){
    float num1, num2;
    printf("Inserisca il primo numero: ");
    scanf("%f", &num1);
    printf("Inserisca il secondo numero: ");
    scanf("%f", &num2);

    if (num1 < num2) {
        printf("I numeri in ordine crescente sono: %.3f, %.3f\n", num1, num2);
    } else if (num1 > num2) {
        printf("I numeri in ordine crescente sono: %.3f, %.3f\n", num2, num1);
    } else {
        printf("I numeri sono uguali: %.3f\n", num1);
    }

   return;
  }

int main() {
    
    OrdineCrescente();
    
    system("pause");
    return 0;
}