#include <iostream>
#include <stdlib.h>

using namespace std;

int spesa, controllo;
float netto, sconto;

void ingresso ();
void calcolo ();
void stampa ();

int main () {
	ingresso();
	calcolo();
	stampa();
}

void ingresso () {
	cout <<"inserire il costo della spesa" <<endl;
	cin >> spesa;
	return;
}


void calcolo () {
	if (spesa<=50) {
		controllo=1;
	} else if (spesa<=65) {
		controllo=2;
	} else if (spesa<=80) {
		controllo=3;
	} else if (spesa>80) {
		controllo=4;
	}
	return;
}

void stampa () {
	if (controllo==1) {
		sconto = spesa * (5.0/100.0);
		netto = spesa - sconto;
	} else if (controllo==2) {
		sconto = spesa * (6.0/100.0);
		netto= spesa - sconto;
	} else if (controllo==3) {
		sconto = spesa * (8.0/100.0);
		netto = spesa - sconto;
	} else if (controllo==4) {
		sconto = spesa * (10.0/100.0);
		netto = spesa - sconto;
	}
	
	cout << "il costo scontato totale della spesa e' " <<netto;
	
	return;
}