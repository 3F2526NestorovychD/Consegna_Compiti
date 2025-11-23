//- programma che trova il minimo in un vettore numerico
#include <iostream>
using namespace std;

int main() {
    int dimensione;
    double flag;
  
    cout << "Inserisca la dimensione del vettore: ";
    cin >> dimensione;
  
    double numeri[dimensione] = {};

    cout << "Inserisca gli elementi del vettore:" << endl;
    for (int i = 0; i < dimensione; ++i) {
        cin >> flag;
        numeri[i] = flag ? flag : (rand() % 100); // se uttente inserisce input non valido, inserisco numeri casuali tra 0 e 99
    }

    double minimo = numeri[0]; // parto con il primo elemento
    for (int i = 0; i < dimensione; ++i) {
        if (numeri[i] < minimo) {
            minimo = numeri[i];
        }
    }
    
    cout << "Il numero minimo nel vettore e': " << minimo << endl;

    return 0;
}