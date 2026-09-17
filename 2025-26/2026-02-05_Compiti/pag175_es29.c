#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    float valore, somma = 0;
    float valoreMax, valoreMin;
    float media, errAssoluto, errRelativo, errPercentuale;
    
    printf("Quante misurazioni? ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        printf("Inserisci valore %d: ", i + 1);
        scanf("%f", &valore);
        somma = somma + valore;
        
        if(i == 0){
            valoreMax = valore;
            valoreMin = valore;
        }
        else{
            if(valore > valoreMax)
                valoreMax = valore;
            
            if(valore < valoreMin)
                valoreMin = valore;
            
        }
    }
    
    media = somma / n;
    errAssoluto = (valoreMax - valoreMin) / 2;
    errRelativo = errAssoluto / media;
    errPercentuale = errRelativo * 100;
    
    printf("Errore assoluto: %.2f\n", errAssoluto);
    printf("Errore relativo: %.4f\n", errRelativo);
    printf("Errore percentuale: %.2f%%\n", errPercentuale);
    
    system("pause");
    return 0;
}
