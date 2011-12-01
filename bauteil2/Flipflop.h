#pragma once

#include <string>
#include "Gattertyp.h"

using namespace std;
class Flipflop : public Gattertyp
{
private:

short setupTime, holdTime, lastKapazitaetClock;

public:

bool getIsFlipflop();
short getSetupTime();
short getHoldTime();
short getLastKapazitaetClock();
void setSetupTime(short st);
void setHoldTime(short ht);
void setLastKapazitaetClock(short lkc);



};
