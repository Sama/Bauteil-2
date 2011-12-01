#include "Flipflop.h"

using namespace std;

bool Flipflop::getIsFlipflop()
{return true;
}

short Flipflop::getSetupTime()
{return setupTime;
}

short Flipflop::getHoldTime()
{return holdTime;
}

short Flipflop::getLastKapazitaetClock()
{return lastKapazitaetClock;
}

void Flipflop::setSetupTime(short st)
{setupTime = st;
}

void Flipflop::setHoldTime(short ht)
{holdTime = ht;
}

void Flipflop::setLastKapazitaetClock(short lkc)
{lastKapazitaetClock = lkc;
}

