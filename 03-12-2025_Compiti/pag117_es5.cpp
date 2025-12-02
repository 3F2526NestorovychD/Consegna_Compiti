#include <stdio.h>
#include <stdlib.h>
#include <math.h>


 int main(){

    float a , b, c, delta, x1, x2; 
    printf("Inserisca tre numeri separati da spazio: ");
    scanf("%f %f %f", &a, &b, &c);

    if(a != 0){
      delta = b * b - 4 * a * c;
      if(delta > 0){
         x1 = (-b + sqrt(delta)) / (2 * a);
         x2 = (-b - sqrt(delta)) / (2 * a);
         printf("%.2f %.2f\n", x1, x2);
      }
      else if(delta == 0){
         x1 = -b / (2 * a);
         printf("La soluzione dell'equazione e' %.2f\n", x1);
      } 
      else
      printf("L'equazione non ha radici reali.");
    } 
    else
    printf("L'equazione non e' di secondo grado.");



   system("pause");
   return 0;
 }