#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, primo = 1, secondo = 1, termine = 0;

    
    printf("Inserisca il n: ");
    scanf("%d", &n);
    
    if(n == 1 || n == 2)
        termine = 1;
    
    else{
        for(int i = 3; i <= n; i++){
            termine = primo + secondo;
            primo = secondo;
            secondo = termine;
        }
    }
    
    printf("Il termine %d della serie di Fibonacci e: %d\n", n, termine);
    
    system("pause");
    return 0;
}
