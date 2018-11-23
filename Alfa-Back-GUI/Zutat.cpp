#include "Zutat.h"

Zutat::Zutat(String^ nm, Double^ mng, String^ unit)
{
    Name = nm;
    Menge = mng;
    Masseinheit = unit;
}

String^ Zutat::getName()
{
    return Name;
}

Double^ Zutat::getMenge()
{
    return Menge;
}

String^ Zutat::getMasseinheit()
{
    return Masseinheit;
}

Void Zutat::setMenge(Double^ mng)
{
    Menge = mng;
    return Void();
}

Zutat^ Zutat::Clone()
{
    return gcnew Zutat(Name->ToString(), *Menge, Masseinheit->ToString());
}

String^ Zutat::getCommaStr()
{
    return String::Join(",", gcnew array<String^>{Name, Menge->ToString(), Masseinheit});
}
