#include <iostream> 
#include <string>
using namespace std;


int main(void){
//dichiarazzioni 
int scelta;
string figura;
double area, base , alteza, lato, diaMag, diaMin; 

do{
cout << "Scegli la figura e scrivi un numero associato alla tua scelta: \n";
cout << "1 - TRIANGOLO \n";
cout << "2 - QUADRATO \n";
cout << "3 - RETTANGOLO \n";
cout << "4 - ROMBO \n";
cout << "5 - USCITA \n";



cin >> scelta; 

     switch(scelta){
            case 1: 
                figura = "TRIANGOLO";
   			    cout << "Inserisca la base: "; // dovevamo replicare il diagramma di flusso pero a me pare strano prendere un input senza chiedere l'utente di darmelo
				cin >> base;
                cout << "Inserisca l'altezza: ";
                cin >> alteza;
                area = (base * alteza) / 2; //sarebbe utile controllare se i valori sono positivi o negativi 
                break;

            case 2: 
			    figura = "QUADRATO";
                cout << "Inserisca il Lato: ";
                cin >> lato;
                area = lato * lato;
                break;

            case 3: 
                figura = "RETTANGOLO";
				cout << "Inserisca la Base: ";
                cin >> base;
                cout << "Inserisca l'altezza: ";
                cin >> alteza;
                area = base * alteza;
                break;

            case 4: 
			    figura = "ROMBO";
                cout << "Diagonale minore: ";
                cin >> diaMin;
                cout << "Diagonale maggiore: ";
                cin >> diaMag;
                area = (diaMin * diaMag) / 2;
                break;

            case 5:
                cout << "Uscita dal programma.\n";
                break;

            default:
                cout << "Scelta non valida, RIPROVA.\n";
                break;

}

if(scelta >=1 && scelta <= 4)
	cout << "Area del " << figura << "=" << area << endl;

}while( scelta != 5);
	return 0;
}