#include <iostream>
#include <stdlib.h>

using namespace std;

void CalcSpedizipne(float pessino, float tariffa, float costino)
{
  if(pessino <= 20)
    {
         cout << "\nIl pacco non ha costi aggiuntivi poiche pessa meno di 20kg[" << pessino << "kg]" << endl;
       
    }
    else
    {
         float kgSopra = pessino - 20; 
         float costoExtra = kgSopra * (costino * tariffa);
         float costoFinale = costoExtra + costino;

         cout << "\nIl costo della spedizione è: " << costoFinale << "€ \n" << "insieme al costo aggiuntivo che è: " << costoExtra << "€" << endl;
    }

}


int main() {
   float pesso, prezzoBiglieto; 
   float tarif =  0.02; // 2% 

    cout << "Inserisca il peso del pacco in kg: ";
    cin >> pesso;
    cout << "Inserisc il prezzo del biglieto: ";
    cin >> prezzoBiglieto;

    
    CalcSpedizipne(pesso, tarif, prezzoBiglieto);

    system("pause");  
    return 0;
}