#include <vector>
#include <string>
#include "Bibliothek.h"
#include "Gattertyp.h"
#include "Flipflop.h"
#include <fstream>
#include <iostream>

using namespace std;

Bibliothek::Bibliothek() {
}

Bibliothek::~Bibliothek(){
	clearList();
}

void Bibliothek::clearList() {
	for(size_t i=0; i<bibElemente.size(); i++) {
		delete bibElemente[i];
	}
	bibElemente.clear();

}

void Bibliothek::dateiAusgabe()
{
	if(datei != "") {
		ifstream stream(datei);
		int Zeile = 0;
		
		while( !stream.eof()){ //
			string Text;
			stream>> Text;
			cout<< Zeile <<"\t" << Text<< endl;
			Zeile++;
		}
	} else {
		readError();
	}
}

void Bibliothek::dateiAuswertung()
{
	if(datei != "") {
		ifstream stream(datei);
		bool begin = false;
		string baustein;
		vector<string> attribute;
		clearList();
		while( !stream.eof()) { //Textdatei wird durchgelesen
			string Text;
			stream>> Text;
			if(Text == "#begin") { 
				begin = true;
			} else if(Text == "#endfile") {
				begin = false;
			} else if(begin) { // Die eigentlichen Daten
				if(Text[0] == '[') {
					string name = Text.substr(1, Text.length() - 2); // erste und letzte Zeichen werden abgeschnitten
					if(name != "[Bausteine]") { // wenn der Name Bautsein ist, wird er ingoriert
						if(baustein != "") { // wenn wir einen Baustein schonhaben, fügen wir in die liste ein
							addElement(baustein, attribute);
						}


						baustein = name; // ein neuer Baustein wird begonnen
						attribute.clear();
					}
					
				} else {

					attribute.push_back(Text); // Text beschreibt ein Attribut
				}
			}
		}
		if(baustein != "") {
			addElement(baustein, attribute); // Füge noch den letzten Baustein hinzu
		}
	} else {
		readError();
	}
}

void Bibliothek::addElement(string name, vector<string> attribute) {
	// erstellen eines gatters und setze alle attribute, füge den Gatter in bib elemente.
	Gattertyp* gatter;

	if(name=="dff") {
		gatter = new Flipflop();
	} else {
		gatter = new Gattertyp();
	}
	gatter->setName(name);

	//TODO: attribute setzen

	bibElemente.push_back(gatter);

	//zum testen:
	cout << name << endl; 
	for(int i=0; i<attribute.size(); i++) {
		cout << "  " << attribute[i] << endl;
	}
}

bool Bibliothek::pfadEinlesen(string Pfad)
{
	ifstream stream(Pfad);
	if(stream.good()) {
		datei = Pfad;
		return true;
	} else {
		openError();
		datei = "";
		return false;
	}
}

string Bibliothek::getPfad()
{
	return datei;
}

void Bibliothek::openError()
{
	cout<< "Error: Könnte Datei nicht öffnen" << endl;
}

void Bibliothek::readError()
{
	cout<< "Error: Fehler beim Lesen der Datei" << endl;
} 

Gattertyp* Bibliothek::getBibElement(string typ)
{
	return 0;
}