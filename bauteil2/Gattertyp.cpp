#include "Gattertyp.h"
#include <string>

using namespace std;

short Gattertyp::getEingaenge()
{return eingaenge;
}

void Gattertyp::setName( string n) {
	name = n;
}
string Gattertyp::getName()
{return name;
}

double Gattertyp::getGrundLaufzeit()
{return grundLaufzeit;
}

short Gattertyp::getLastFaktor()
{return lastFaktor;
}

short Gattertyp::getLastKapazitaet()
{return lastKapazitaet;
}

bool Gattertyp::getIsFlipflop()
{return false;
}

void Gattertyp::setEingaenge(short ei)
{eingaenge = ei;
}

void Gattertyp::setGrundLaufzeit(double gl)
{grundLaufzeit = gl;
}

void Gattertyp::setLastFaktor(short lf)
{lastFaktor = lf;
}

void Gattertyp::setLastKapazitaet(short lk)
{lastKapazitaet = lk;
}

