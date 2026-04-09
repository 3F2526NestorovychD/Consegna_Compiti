#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>  

using namespace std;

struct contatto {
private:
    string nome;
    string cognome;
    int num_tel;

public:
    contatto(string n, string c, int tel = 0) : nome(n), cognome(c), num_tel(tel) {}

    void stampa() const {
        cout << nome << " " << cognome << " - Tel: " << num_tel << endl;
    }
};


void riempimento_array(vector<contatto>& rubrica_da_riempire, int const num) {
    vector<contatto> database = {
        {"Mario", "Rossi", 12345},
        {"Laura", "Bianchi", 67890},
        {"Giuseppe", "Esposito", 11223},
        {"Giulia", "Romano", 44556},
        {"Francesco", "Ricci", 77889},
        {"Elena", "Marino", 99001},
        {"Alessandro", "Greco", 22334},
        {"Silvia", "Bruno", 55667},
        {"Roberto", "Galli", 88990},
        {"Alice", "Conti", 33445}
    };

    for (int i = 0; i < num; i++) {
        int indiceCasuale = rand() % database.size();
        
        rubrica_da_riempire.push_back(database[indiceCasuale]);
    }
}

void aggiungi_contatto(vector<contatto>& rubrica, int num*) {
    string n, c;
    int tel;

    cout << "\n--- Aggiungi Nuovo Contatto ---" << endl;
    cout << "Nome: ";
    cin >> n;
    cout << "Cognome: ";
    cin >> c;
    cout << "Telefono: ";
    cin >> tel;

    rubrica.push_back(contatto(n, c, tel));
    
    cout << "Contatto aggiunto con successo!" << endl;
}

int main() {

    int num_contatti = 8;
    string flag_inizio;
    int ptr_num_contatti* = num_contatti;
    vector<contatto> rubrica;
    riempimento_array(rubrica, num_contatti);

    cin >> flag_inizio;
    while(flag_inizio == "man"){
    cout << flag_inizio << " non è riconosciuto come comando interno o esterno,un programma eseguibile o un file batch " << endl;
    }

    cout << "Comandi presenti sono: " << endl << "viscontatti - vissualizza contatti attualmente pressnti" << endl << 
    aggiungi_contatto(vector<contatti> rubrica, ptr_num_contatti);






   
    cout << "--- Rubrica Generata Casualmente ---" << endl;
    for (int i = 0; i < num_contatti; i++) {
        contatto.stampa();
    }

    return 0;
}