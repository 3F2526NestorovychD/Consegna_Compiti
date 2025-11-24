// programma che trova il massimo in un vettore numerico
#include <iostream>
using namespace std;

void massimo(){ 
    int dimensione;
    double flag;
  
    cout << "Inserisca la dimensione del vettore: ";
    cin >> dimensione;
  
    double numeri[dimensione] = {};
    cout << "Inserisca gli elementi del vettore:" << endl;
    for (int i = 0; i < dimensione; ++i) {
        cin >> flag;
        numeri[i] = flag ? flag : (rand() % 100); // se uttente inserisce input non valido, inserisco numeri casuali tra 0 e 9
    }

    double massimo = numeri[0]; // parto con il primo elemento
    for (int i = 0; i < dimensione; ++i) {
        if (numeri[i] > massimo) {
            massimo = numeri[i];
        }
    }

     cout << "Il numero massimo nel vettore e': " << massimo << endl;
}

int main() {
   
    massimo()
    system("pause")

    return 0;
}