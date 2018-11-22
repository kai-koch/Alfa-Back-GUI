#include "Daten.h"
#include "Zutat.h"
#include "Rezept.h"


Daten::Daten() {}

Daten::Daten(const Daten %)
{
    throw gcnew System::InvalidOperationException("Daten cannot be copy-constructed");
}

Dictionary<String^, Zutat^>^ Daten::getAllZutaten()
{
    return gcnew Dictionary<String^, Zutat^>(zutaten);
}

Dictionary<String^, Rezept^>^ Daten::getAllRezepte()
{
    return gcnew Dictionary<String^, Rezept^>(rezepte);
}

Rezept ^ Daten::getRezeptByName(String ^ daName)
{
    if (rezepte->ContainsKey(daName)) 
    {
        return rezepte[daName]->Clone();
    }
    else
    {
        return nullptr;
    }
}

Zutat ^ Daten::getZutatByName(String^ daName)
{
    if (zutaten->ContainsKey(daName))
    {
        return zutaten[daName]->Clone();
    }
    else
    {
        return nullptr;
    }
}

Void Daten::setRezeptByName(Rezept^ daRezept)
{
    rezepte->Add(daRezept->getTeigname()->ToString(), daRezept->Clone());
    return Void();
}

Void Daten::setZutatByName(Zutat ^ daZutat)
{
    zutaten->Add(daZutat->getName()->ToString(), daZutat->Clone());    
    return Void();
}

Void Daten::readFromDataFile()
{
    readFromDataFile("rezept-daten.txt");
    return Void();
}

Void Daten::readFromDataFile(String ^ Filename)
{
    Console::WriteLine("Fake Read data from File: " + Filename);
    Rezept^ aRez = gcnew Rezept("Schokokeks", 100.0, "Kreis", 60.0, 60.0, 200.0, 30.0);
    aRez->addZutat(gcnew Zutat("Backpulver", 100.0, "g"));
    aRez->addZutat(gcnew Zutat("Eier", 0.9, "l"));
    aRez->addZutat(gcnew Zutat("Kakao", 700.0, "g"));
    aRez->addZutat(gcnew Zutat("Mehl", 900.0, "g"));
    aRez->addZutat(gcnew Zutat("Milch", 4.0, "l"));
    aRez->addZutat(gcnew Zutat("Pflanzenfett", 500.0, "g"));
    aRez->addZutat(gcnew Zutat("Zucker", 1000.0, "g"));
    aRez->addVerzierung(gcnew Zutat("Kakaoguss", 0.3, "l"));
    aRez->addVerzierung(gcnew Zutat("Schokostreusel", 300.0, "g"));
    setRezeptByName(aRez);
    return Void();
}

Void Daten::writeToDataFile()
{
    writeToDataFile("rezept-daten.txt");
    return Void();
}

Void Daten::writeToDataFile(String ^ Filename)
{
    Console::WriteLine("Write data to File: " + Filename);
    return Void();
}

Void Daten::writeKonfigDatei(Rezept ^ daRezept)
{
    writeKonfigDatei(daRezept, "back-konfig.txt");
    return Void();
}

Void Daten::writeKonfigDatei(Rezept ^ daRezept, String ^ Filename)
{
    Console::WriteLine("Rezept " + daRezept->getTeigname() + " nach " + Filename + " schreiben.");
    String ^ wStr = gcnew String(
        "teigname:" + daRezept->getTeigname() +
        "\tbasisAnzahl:" + daRezept->getBasisAnzahl() +
        "\tform:" + daRezept->getForm() +
        "\tgroesseX:" + daRezept->getGroesseX()->ToString() +
        "\tgroesseY:" + daRezept->getGroesseY()->ToString() +
        "\tbackTemperatur:" + daRezept->getBackTemperatur()->ToString() +
        "\tbackZeit:" + daRezept->getBackZeit()->ToString()
    );
    return Void();
}
