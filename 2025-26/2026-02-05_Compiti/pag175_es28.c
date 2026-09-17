#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i;
    int termine = 3;
    
    printf("Inserisca n (deve essere > 0): ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++)
        termine = 2 * termine + i;
    
    
    printf("Il termine %d della serie e: %d\n", n, termine);
    
    system("pause");
    return 0;
}
