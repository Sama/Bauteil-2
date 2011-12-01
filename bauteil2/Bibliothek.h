#pragma once

#include <vector>
#include <string>
#include "Gattertyp.h"

using namespace std;

class Bibliothek
{
private:

vector<Gattertyp*> bibElemente;
string datei;

void openError();
void readError();
void addElement(string name, vector<string> attribute);
void clearList();

public:
Bibliothek();
~Bibliothek();

string getPfad();
Gattertyp* getBibElement(string typ);

void dateiAusgabe();
void dateiAuswertung();
bool pfadEinlesen(string Pfad);

};