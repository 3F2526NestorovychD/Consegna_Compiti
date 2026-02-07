#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, m, abitanti;
    char nomeRegione[50];
    int totRegione, totTutte = 0;
    
    printf("Quante regioni (N > 0)? ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        printf("\nNome regione %d: ", i + 1);
        scanf("%s", nomeRegione);
        
        printf("Quante province (M > 0)? ");
        scanf("%d", &m);
        
        totRegione = 0;
        for(int j = 0; j < m; j++){
            printf("Abitanti provincia %d: ", j + 1);
            scanf("%d", &abitanti);
            totRegione = totRegione + abitanti;
        }
        
        printf("Abitanti regione %s: %d\n", nomeRegione, totRegione);
        totTutte = totTutte + totRegione;
    }
    
    printf("\nAbitanti totali di tutte le regioni: %d\n", totTutte);
    
    system("pause");
    return 0;
}