#include <stdio.h>
#include <stdlib.h>


int main(){
    int N, accumulatore = 0;
   

    printf("Inserisca il numero di coppie da inserire: ");
    scanf("%d", &N);

     double num1[N], num2[N]; //a dir la verita non serve un array ma volemo esercitarmi su come inizialirarli prima della verifica

     for(int i = 0; i < N; i++){
        num1[i] = rand() % 100;
        num2[i] = rand() % 100;
        if(num1[i] == num2[i]){
            accumulatore += 1;
        }


        printf("\nLa coppia %d di numeri \"inseritte\": %.2f & %.2f\n", i+1, num1[i], num2[i]);
         //aggiungo la stampa poiche non c'e un inssrimento, quindi non  si vedono le coppie
     }

     if(accumulatore == 0)
     printf("Non sonno sati inserite coppie uguali fra loro\n");
     else
     printf("Sono state inserite %d coppie di numeri ugiali fra di loro\n", accumulatore);


    system("pause");
    return 0;
}