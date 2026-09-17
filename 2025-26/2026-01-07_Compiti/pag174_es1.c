#include <stdio.h>
#include <stdlib.h>

#define PI 3.1415

int main(){
    int raggio;
    float area, circonferenza;

    for (raggio = 1; raggio <= 20; raggio++){
        area = PI * raggio * raggio;
        circonferenza = 2 * PI * raggio;

        printf("Raggio: %2d | Area: %8.2f | Circonferenza: %8.2f\n", raggio, area, circonferenza);
    }
    
    system("pause");
    return 0;
}
