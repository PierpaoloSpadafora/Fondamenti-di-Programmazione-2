#include "CatenaDiMontaggio.h"

#include <iostream>
using namespace std;

int main() {
    CatenaDiMontaggio<int> c;
    c.aggiungi(2);
    c.aggiungi(9);
    c.aggiungi(12);
    c.aggiungi(3);
    
    cout << "Dimensione: " << c.size() << endl;
    cout << c.prossimo() << endl;
    c.rimuovi();
    

    cout << c.prossimo() << endl;
    c.rimuovi();
    
    cout << c.prossimo() << endl;
    c.rimuovi();
    
    cout << c.prossimo() << endl;
    c.rimuovi();
    
    cout << "Dimensione: " << c.size() << endl;
    return 0;
}