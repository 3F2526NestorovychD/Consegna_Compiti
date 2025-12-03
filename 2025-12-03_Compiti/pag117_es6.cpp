#include <stdio.h>
#include <stdlib.h>

    void VerifiCarattere(){
        char risp;

        printf("Inserisca un carattere [S/N]: ");
        scanf("%c", &risp);
        if(risp == 'S' || risp == 's')
            printf("SI\n");
         else if (risp == 'N' || risp == 'n')  
            printf("NO\n");
         else 
            printf("Input errato.\n");
        


        return;
    }
int main() {

    VerifiCarattere();

    system("pause");
    return 0;
}