#include <stdio.h>
#include <stdlib.h>

int main() {
    int scelta;
    float ore;

    printf("Inserisci il numero di ore: ");
    scanf("%f", &ore);

    printf("Scegli la conversione:\n");
    printf("1 - Minuti\n");
    printf("2 - Secondi\n");
    printf("Scelta: ");
    scanf("%d", &scelta);

    if (scelta == 1) {
        printf("Minuti: %.2f\n", ore * 60);
    } else if (scelta == 2) {
        printf("Secondi: %.2f\n", ore * 3600);
    } else {
        printf("Scelta non valida.\n");
    }

    return 0;
}