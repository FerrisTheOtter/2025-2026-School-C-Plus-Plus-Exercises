#include <iostream>
#include <stdlib.h>

using namespace std;

float voto;
bool giudizio1;
bool giudizio2;

void ingresso ();
void controllo ();
void stampa();

	int main () {
    ingresso();
    controllo();
    stampa();
    return 0; 
	}
    
	void ingresso () {
	 cout << "inserire un voto" <<endl;
     cin >> voto;
     return;
	}
	
	void controllo () {
		if (voto >= 6) {
			giudizio1=true;
			giudizio2=false;
		} else if (voto > 4 && voto < 6) {
			giudizio1=false;
			giudizio2=true;
		} else if (voto >= 4) {
			giudizio1=false;
			giudizio2=false;
		}
		return;
	}
	
	void stampa () {
		if (giudizio1==true && giudizio2==false) {
			cout << "il voto e' sufficiente" <<endl;
		} else if (giudizio1==false && giudizio2==true) {
			cout << "il voto e' lievemente insufficiente" <<endl;
		} else if (giudizio1==false && giudizio2==false) {
			cout << "il voto e' gravemente insufficiente" <<endl;
		}
	}
	