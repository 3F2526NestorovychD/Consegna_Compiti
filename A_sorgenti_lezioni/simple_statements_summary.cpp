// Esempio didattico: mostrare gli statements fondamentali in C++
// Include try/catch per la gestione delle eccezioni.

#include <iostream>
#include <stdexcept> // per std::invalid_argument
using namespace std;

int main() {
    try {
        // ---------------- DICHIARAZIONE ----------------
        int eta;   
        int somma = 0;

        // ---------------- INPUT / OUTPUT ----------------
        cout << "Inserisci la tua eta': ";
        if (!(cin >> eta)) {
            throw invalid_argument("Input non valido: atteso un numero intero.");
        }

        // ---------------- IF / ELSE ----------------
        if (eta >= 18) {
            cout << "Sei maggiorenne.\n";
        } else {
            cout << "Sei minorenne.\n";
        }

        // ---------------- FOR ----------------
        cout << "Somma dei numeri da 1 a 5: ";
        for (int i = 1; i <= 5; i++) {
            somma += i;
        }
        cout << somma << "\n";

        // ---------------- WHILE ----------------
        cout << "Conta da 1 a 3 con while:\n";
        int x = 1;
        while (x <= 3) {
            cout << x << " ";
            x++;
        }
        cout << "\n";

        // ---------------- DO...WHILE ----------------
        cout << "Esegui almeno una volta (do-while):\n";
        int y = 0;
        do {
            cout << "y = " << y << "\n";
            y++;
        } while (y < 1);

        // ---------------- SWITCH ----------------
        cout << "Scegli un numero da 1 a 3: ";
        int scelta;
        if (!(cin >> scelta)) {
            throw invalid_argument("Input non valido per la scelta.");
        }
        switch (scelta) {
            case 1: cout << "Hai scelto UNO\n"; break;
            case 2: cout << "Hai scelto DUE\n"; break;
            case 3: cout << "Hai scelto TRE\n"; break;
            default: cout << "Scelta non valida\n";
        }

        // ---------------- BREAK e CONTINUE ----------------
        cout << "Esempio di break/continue:\n";
        for (int i = 1; i <= 5; i++) {
            if (i == 2) continue; // salta il 2
            if (i == 4) break;    // interrompe al 4
            cout << i << " ";
        }
        cout << "\n";


        // ---meno banale

        if (false)
            cout << "true1" << std::endl;
            cout << "true2" << std::endl;


        int i = 0;  for (;;) { i++; if (i > 2) break;}

        char buffer[16];
        char * p = buffer;
        char * saluto = "ciao";
        while (*p++ = *saluto++);
        cout << buffer;

        const int start = 0, stop = 3;
        for (int i = start; i < stop; i++)
            for (int j = i; j < stop; j++)
                for (int k = j; k < stop; k++)
                    cout << "i, j, k = " << i << ", " << j << ", " << k << std::endl; 

        // ---------------- RETURN ----------------
        return 0; 
    } 
    catch (const exception& e) {
        cerr << "Errore catturato: " << e.what() << "\n";
        return 1; 
    } 
    catch (...) {
        cerr << "Errore sconosciuto.\n";
        return 2;
    }
}
// Fine del programma