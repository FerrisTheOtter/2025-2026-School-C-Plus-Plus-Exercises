#include <iostream>
#include <cmath>

using namespace std;

void ingresso();
void calcolo();
void stampa();

int a, b, c;
int delta; 
float x1, x2; 

int main() {
	
	ingresso();
	
    if (a == 0) {
        cout << "L'equazione non e' quadratica (a non puo' essere zero)." << endl;
        return 1;
    }

	calcolo();
	stampa();
	
	return 0;
}

void ingresso() {
     cout << "Inserisci il coefficiente 'a' (ax^2): ";
     cin >> a;
     cout << "Inserisci il coefficiente 'b' (bx): ";
     cin >> b;
     cout << "Inserisci il coefficiente 'c' (costante): ";
     cin >> c;
}
     
void calcolo() {
   
    delta = (b * b) - 4 * a * c;

    if (delta > 0) {
        float quad = sqrt((float)delta);
        x1 = (-b + quad) / (2.0f * a);
        x2 = (-b - quad) / (2.0f * a); 
    } else if (delta == 0) {
        x1 = -b / (2.0f * a); 
        x2 = x1;
    }
}


void stampa() {
    
    if (delta > 0) {
        cout << "L'equazione ha due soluzioni reali e distinte:" << endl;
        cout << "X1 = " << x1 << endl;
        cout << "X2 = " << x2 << endl;
    } else if (delta == 0) {
        cout << "L'equazione ha un'unica soluzione reale (doppia):" << endl;
        cout << "X = " << x1 << endl;
    } else { 
        cout << "Il discriminante (" << delta << ") e' negativo. L'equazione e' impossibile nel campo dei numeri reali." << endl;
    } 
}