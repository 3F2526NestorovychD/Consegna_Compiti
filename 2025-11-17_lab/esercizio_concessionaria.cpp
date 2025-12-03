/*Calcolo del prezzo da pagare per i clienti di 
una concessionaria di autovveture in affito*/

#include <iostream>
using namespace std;

// dichiarazione 
string nome;
float KM_iniziali, KM_finali,KM,prezzo;
const float prezzi = 1.20;

int main(){

cout << "Inserisca il vostro nome: ";
cin >> nome;
cout << "Inserisca la quanita di km percorsi iniziale e poi finale: " << endl;
cin >> KM_iniziali >> KM_finali;
KM =  KM_finali - KM_iniziali;
if(KM<=0){
cout << "Un dato in input non è valido, controlla che i km percorsi iniziali sia un numero positivo e che i km finali superino quelli iniziali";
}else{
prezzo = KM * prezzi;
cout << "In totale lei signor* " << nome << " ha percorso " << KM << " km e quindi il prezzo da pagare sarebbe: " << prezzo << "$" << endl;
}


return 0;
}
