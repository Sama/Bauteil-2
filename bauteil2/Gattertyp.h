#pragma once

#include<string>
using namespace std;
class Gattertyp
{
protected:

string name;
double grundLaufzeit;
short lastFaktor, lastKapazitaet, eingaenge;

public:
	string getName();
	double getGrundLaufzeit();
	short getLastFaktor();
	short getLastKapazitaet();
	short getEingaenge();
	bool getIsFlipflop();
	void setGrundLaufzeit(double n);
	void setLastFaktor(short lf); 
	void setLastKapazitaet (short lk);
	void setEingaenge (short ei);
	void setName( string n);

};