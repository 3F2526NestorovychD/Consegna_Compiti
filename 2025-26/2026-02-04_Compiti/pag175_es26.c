#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, dispari = 1, quadrato = 0;
    
    printf("Inserisci N: ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        quadrato = quadrato + dispari;
        dispari = dispari + 2;
    }
    
    printf("Il quadrato di %d e: %d\n", n, quadrato);
    
    system("pause");
    return 0;
}
