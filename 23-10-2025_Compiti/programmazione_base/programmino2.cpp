// programma che trova il massimo in un vettore numerico
#include <iostream>
using namespace std;

int main() {
    int dimensione, flag; 
  
    cout << "Inserisca la dimensione del vettore: "; 
    cin >> dimensione;  
  
    double numeri[dimensione] = {};
    cout << "Inserisca gli elementi del vettore:" << endl;
    for (int i = 0; i < dimensione; ++i) {
        cin >> numeri[i];
    }

    double massimo = numeri[0];

    for (int i = 0; i < dimensione; ++i) {
        if (numeri[i] > massimo) {
            massimo = numeri[i];
        }
    }


    // numeri[i] = flag ? (numeri[i] = flag, numeri[i]) : (rand() % 100); // se uttente inserisce input non valido, inserisco numeri casuali tra 0 e 99 
    cout << "Il numero massimo nel vettore e': " << massimo << endl;

    return 0;
}