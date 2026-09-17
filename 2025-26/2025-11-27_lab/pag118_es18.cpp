#include <iostream>
#include <string>
#include <cstdlib>

using namespace std; 

void CostoTotaleSoggiorno()
{
    int settimane;
    string supplementoLenzuola;
    int costoFisso = 100;
    int costoUnaSettimana = 600;
    int costoDueSettimane = 1100;
    int costoSupplemento = 20; // tutti in €

    cout << "Inserisca il numero di settimane di soggiorno (1 / 2): ";
    cin >> settimane;

    cout << "Desidera un supplemento di lenzuola? (Si/No): ";
    cin >> supplementoLenzuola;

    int costoTotale = costoFisso;

    if (settimane == 1) 
        costoTotale += costoUnaSettimana;
     else if (settimane == 2) 
        costoTotale += costoDueSettimane;
     else{
        cout << "Numero di settimane non valido. Deve essere 1 o 2." << endl;
        return;
     }

     // [ transform(supplementoLenzuola.begin(), supplementoLenzuola.end(), supplementoLenzuola.begin(), ::tolower); ] non l'ho totalmente compressa in quei 5 minuti perciò la lascio come commento

    if (supplementoLenzuola == "si" || supplementoLenzuola == "Si" || supplementoLenzuola == "SI" || supplementoLenzuola == "sI") 
        costoTotale += costoSupplemento * settimane;
    

    cout << "Il costo totale del soggiorno è: " << costoTotale << " €" << endl;
    
}


int main() {

  CostoTotaleSoggiorno();

  system("pause");
  return 0;
}
