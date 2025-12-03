#include <stdio.h>
#include <stdlib.h>


  void ConvertiOre(){
     int scelta;
     float ore, mins, secs;

    printf("Inserisca il numero di ore: ");
    scanf("%f", &ore);

    printf("Scelga la conversione:\n");
    printf("1 - Minuti\n");
    printf("2 - Secondi\n");
    printf("Scelta: ");
    scanf("%d", &scelta);

    switch (scelta) {
        case 1:
            mins = ore * 60;
            printf("%d ore equivalgono a %.2f minuti.\n", ore, mins);
            break;
        case 2:
            secs = ore * 3600;
            printf("%d ore equivalgono a %.2f secondi.\n", ore, secs);
            break;  
        default:
            printf("Scelta non valida.\n");

    return;
    }
  }

int main() {
    ConvertiOre();

    system("pause");
    return 0;
}
