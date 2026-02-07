#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, termine = 1;
    
    printf("Inserisca il n: ");
    scanf("%d", &n);
    
    while(termine <= n)
        termine = termine * 2;
    
    
    printf("Il primo termine maggiore di %d e: %d\n", n, termine);
    
    system("pause");
    return 0;
}
