#include <stdio.h>
#include <stdlib.h>


void SegnoNumero()
{
  float num;

    printf ("Inserisca il numero da verificare: ");
    scanf ("%f", &num);
    
    if (num>0)
      printf("il suo numero %.3f e' positivo\n", num);
     else if(num<0)
      printf("Il suo numerino %.3f e' negativo" , num) ;
     else
      printf("Il suo numero e' neutro o nullo\n");

    return;
}


  int main() {

    SegnoNumero();

    system("pause");
    return 0;
}

   