#include "Bibliothek.h"
#include <iostream>

int main() {
	Bibliothek bib;
	bib.pfadEinlesen("C:\\Dokumente und Einstellungen\\upcem\\Praktikumspaket_IT_WS11_12\\bib.txt");
	bib.dateiAuswertung();
	cin.ignore();
	cin.get();
}