#include "Rezept.h"

Rezept::Rezept(String^ tn, Double^ bAnz, String^ fo, Double^ gX, Double^ gY, Double^ bTemp, Double^ bz)
{
    teigname = tn;
    basisAnzahl = bAnz;
    form = fo;
    groesseX = gX;
    groesseY = gY;
    backTemperatur = bTemp;
    backZeit = bz;
}

Void Rezept::addZutat(Zutat^ ingredient)
{
    zutaten->Add(ingredient->getName(), ingredient);
    return Void();
}

Void Rezept::addVerzierung(Zutat^ ingredient)
{
    verzierungen->Add(ingredient->getName(), ingredient);
    return Void();
}

String^ Rezept::getKonfigdatei(Int32^ totalAnzahlKekse)
{
    double rezeptfactor = *totalAnzahlKekse / *basisAnzahl;
    Rezept^ daRezept = this->Clone();
    daRezept->factorForProduktionBatch(rezeptfactor);
    array<String^>^ config = gcnew array<String^>(9);
    config[0] = "teigname:" + daRezept->getTeigname();
    config[1] = "basisAnzahl:" + daRezept->getBasisAnzahl();
    config[2] = "form:" + daRezept->getForm();
    config[3] = "groesseX:" + daRezept->getGroesseX()->ToString();
    config[4] = "groesseY:" + daRezept->getGroesseY()->ToString();
    config[5] = "backTemperatur:" + daRezept->getBackTemperatur()->ToString();
    config[6] = "backZeit:" + daRezept->getBackZeit()->ToString();
    config[7] = daRezept->getZutatenWriteStr();
    config[8] = daRezept->getVerzierungenWriteStr();
    return String::Join("\t", config);
}

String^ Rezept::getTeigname()
{
    return teigname;
}

Double^ Rezept::getBasisAnzahl()
{
    return basisAnzahl;
}

String^ Rezept::getForm()
{
    return form;
}

Double^ Rezept::getGroesseX()
{
    return groesseX;
}

Double^ Rezept::getGroesseY()
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

Void Rezept::setTeigname(String^ tn)
{
    teigname = tn;
    return Void();
}

Void Rezept::setBasisAnzahl(Double^ ba)
{
    basisAnzahl = ba;
    return Void();
}

Void Rezept::setForm(String^ f)
{
    form = f;
    return Void();
}

Void Rezept::setGroesseX(Double^ gX)
{
    groesseX = gX;
    return Void();
}

Void Rezept::setGroesseY(Double^ gY)
{
    groesseY = gY;
    return Void();
}

Void Rezept::setBackTemperatur(Double^ bT)
{
    backTemperatur = bT;
    return Void();
}

Void Rezept::setBackZeit(Double^ bZ)
{
    backZeit = bZ;
    return Void();
}

Rezept ^ Rezept::Clone()
{
    Rezept^ daClone = gcnew Rezept(teigname->ToString(), *basisAnzahl, form->ToString(), *groesseX, *groesseY, *backTemperatur, *backZeit);
    for each(KeyValuePair<String^, Zutat^> kvp in zutaten)
    {
        daClone->addZutat(kvp.Value->Clone());
    }
    for each(KeyValuePair<String^, Zutat^> kvp in verzierungen) {
        daClone->addVerzierung(kvp.Value->Clone());
    }
    return daClone;
}

String ^ Rezept::getZutatenWriteStr()
{
    array<String^>^ zuts = gcnew array<String^>(zutaten->Count);
    int i = 0;
    for each(KeyValuePair<String^, Zutat^> kvp in zutaten)
    {
        zuts[i] = kvp.Value->getCommaStr();
        i += 1;
    }
    return "Zutaten:" + String::Join("|", zuts);
}



String ^ Rezept::getVerzierungenWriteStr()
{
    array<String^>^ vers = gcnew array<String^>(verzierungen->Count);
    int i = 0;
    for each(KeyValuePair<String^, Zutat^> kvp in verzierungen)
    {
        vers[i] = kvp.Value->getCommaStr();
        i += 1;
    }
    return "Verzierungen:" + String::Join("|", vers);
}

Void Rezept::factorForProduktionBatch(Double rezeptfactor)
{
    *basisAnzahl *= rezeptfactor;
    for each (KeyValuePair<String^, Zutat^> kvp in zutaten)
    {
        kvp.Value->setMenge(*kvp.Value->getMenge() * rezeptfactor);
    }
    for each (KeyValuePair<String^, Zutat^> kvp in verzierungen)
    {
        kvp.Value->setMenge(*kvp.Value->getMenge() * rezeptfactor);
    }
}

Rezept::~Rezept() {}
