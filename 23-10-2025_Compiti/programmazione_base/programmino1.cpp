//  verifica che un vettore di float o int sia ordinato in ordine 
//  ascendente (popolare il vettore con valori non ordinati)
#include <iostream>
#include <vector>

using namespace std;

bool isSortedAscending(const std::vector<float>& vec) {
    for (size_t i = 1; i < vec.size(); ++i) {
        if (vec[i] < vec[i - 1]) {
            return false;
        }
    }
    return true;
}