//  verifica che un vettore di float o int sia ordinato in ordine 
//  ascendente (popolare il vettore con valori non ordinati)
#include <iostream>
using namespace std;


bool INTcontrolOrdine(const int vettore[], int dimensione) { // la variabile dimensione e' interna quindi non dovrebbe causare problmemi se la uso piu volte
    for (int i = 1; i < dimensione; ++i) {
        if (vettore[i] < vettore[i - 1]) {
            return false;                             
        }
    }
    return true;
}

bool FLOATcontrolOrdine(const float vettore[], int dimensione) {
    for (int i = 1; i < dimensione; ++i) {
        if (vettore[i] < vettore[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    // Vettori con valori a caso non ordinati
    int INTnumerini [] = {4, 1, 7, 3, 9};
    float FLOATnumerini[] = {3.5, 2.1, 4.7, 1.0, 5.6};

    int INTsize = sizeof(INTnumerini) / sizeof(INTnumerini[0]);
    int FLOATsize = sizeof(FLOATnumerini) / sizeof(FLOATnumerini[0]);
    
    
    cout << "Vettore int: ";
    cout << ((INTcontrolOrdine(INTnumerini, INTsize )) ? "E' " : "NON e' ") << " Ordinato" << endl;

    
     cout << "Vettore FLOAT: ";
    cout << ((FLOATcontrolOrdine(FLOATnumerini, FLOATsize)) ? "E' " : "NON e' ") << " Ordinato" << endl;
    
    return 0;
}