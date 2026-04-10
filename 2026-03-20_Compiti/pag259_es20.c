#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define GIORNI 30

int main() {
    float temperature[GIORNI] = { 15.2, 16.5, 14.8, 17.3, 18.1, 19.4, 20.2, 21.5, 22.1, 23.4,
                                  22.8, 21.6, 20.3, 19.7, 18.9, 17.2, 16.4, 15.8, 14.9, 13.5,
                                  12.8, 13.2, 14.6, 15.9, 17.1, 18.5, 19.8, 21.2, 22.5, 23.8 };
    
   
    float media = 0;
    for (int i = 0; i < GIORNI; i++) {
        media += temperature[i];
    }
    media /= GIORNI;
    printf("Media delle temperature: %.1f\n", media);
    

    float minima = temperature[0];
    int giorno_minima = 0;
    for (int i = 1; i < GIORNI; i++) {
        if (temperature[i] < minima) {
            minima = temperature[i];
            giorno_minima = i + 1;
        }
    }
    printf("Temperatura minima: %.2f, registratta nel giorno %d\n", minima, giorno_minima);
    
    float massima = temperature[0];
    int giorno_massima = 0;
    for (int i = 1; i < GIORNI; i++) {
        if (temperature[i] > massima) {
            massima = temperature[i];
            giorno_massima = i + 1;
        }
    }
    printf("Temperatura massima: %.2f, registratta nel giorno %d\n", massima, giorno_massima);
    
    float scostamento_max = 0;
    int giorno_scostamento = 0;
    for (int i = 0; i < GIORNI; i++) {
        float scostamento = fabs(temperature[i] - media);
        if (scostamento > scostamento_max) {
            scostamento_max = scostamento;
            giorno_scostamento = i + 1;
        }
    }
    printf("Maggior scostamento dalla media: %.2f, registrato nel giorno %d\n", scostamento_max, giorno_scostamento);
    
    printf("\n");
    system("pause");
    return 0;
}
