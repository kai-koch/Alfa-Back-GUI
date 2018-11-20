#include "Rezept.h"

Rezept::Rezept(String ^ tn, Double ^ bAnz, String ^ fo, Double ^ gX, Double ^ gY, Double ^ bTemp, Double ^ bz)
{
    teigname = tn;
    basisAnzahl = bAnz;
    form = fo;
    groesseX = gX;
    groesseY = gY;
    backTemperatur = bTemp;
    backZeit = bz;
}

Void Rezept::addZutat(Zutat ^ ingredient)
{
    zutaten->Add(ingredient->getName(), ingredient);
    return Void();
}

Void Rezept::addVerzierung(Zutat ^ ingredient)
{
    verzierungen->Add(ingredient->getName(), ingredient);
    return Void();
}

String ^ Rezept::getKonfigdatei(Int32 ^ totalAnzahlKekse)
{
    double rezeptfactor = *totalAnzahlKekse / *basisAnzahl;

    return "";
}

String ^ Rezept::getTeigname()
{
    return teigname;
}

Double ^ Rezept::getBasisAnzahl()
{
    return basisAnzahl;
}

String ^ Rezept::getForm()
{
    return form;
}

Double ^ Rezept::getGroesseX()
{
    return groesseX;
}

Double ^ Rezept::getGroesseY()
{
    return groesseY;
}

Double ^ Rezept::getBackTemperatur()
{
    return backTemperatur;
}

Double ^ Rezept::getBackZeit()
{
    return backZeit;
}

Void Rezept::setTeigname(String ^ tn)
{
    teigname = tn;
    return Void();
}

Void Rezept::setBasisAnzahl(Double ^ ba)
{
    basisAnzahl = ba;
    return Void();
}

Void Rezept::setForm(String ^ f)
{
    form = f;
    return Void();
}

Void Rezept::setGroesseX(Double ^ gX)
{
    groesseX = gX;
    return Void();
}

Void Rezept::setGroesseY(Double ^ gY)
{
    groesseY = gY;
    return Void();
}

Void Rezept::setBackTemperatur(Double ^ bT)
{
    backTemperatur = bT;
    return Void();
}

Void Rezept::setBackZeit(Double ^ bZ)
{
    backZeit = bZ;
    return Void();
}

Rezept::~Rezept() {}
