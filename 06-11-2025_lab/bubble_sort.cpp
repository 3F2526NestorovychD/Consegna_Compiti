
#include <iostream>
using namespace std;

int main() {

    int lun, flag;

    cout << "Inserisca la lunghezza della lista da riordinare: "; //assumo che si vuole un bubbble sort dal piu' piccolo al più grande 
    cin >> lun;

    int vet[lun];

    cout << "Inserisca gli elementi della lista:" << endl;
    for (int i = 0; i < lun; i++) {
    cin >> flag;
    vet[i] = flag ? flag: (rand() % 100); // se uttente inserisce input non valido, inserisco numeri casuali tra 0 e 99
}

    // il buble Sort stesso
    for (int i = 0; i < lun - 1; i++) {
        for (int j = 0; j < lun - i - 1; j++) {
            if (vet[j] > vet[j + 1]) {                   
            swap(vet[j], vet[j + 1]);
            }
        }
    }

    cout << "Lista riordinata: ";
    for (int i = 0; i < lun; i++) {
        cout << vet[i] << " ";
    }
    cout << endl;

    return 0;
}