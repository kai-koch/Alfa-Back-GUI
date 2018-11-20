#include "Zutat.h"

Zutat::Zutat(String ^ nm, Double ^ mng, String ^ unit)
{
    Name = nm;
    Menge = mng;
    Masseinheit = unit;
}

String ^ Zutat::getName()
{
    return Name;
}

Double ^ Zutat::getMenge()
{
    return Menge;
}

String ^ Zutat::getMasseinheit()
{
    return Masseinheit;
}
