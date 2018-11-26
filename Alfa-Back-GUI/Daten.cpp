#include "Daten.h"
#include "Zutat.h"
#include "Rezept.h"

using namespace System::IO;

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
    //Key Neu oder ueberschreben wenn bereits vorhanden!
    rezepte[daRezept->getTeigname()->ToString()] = daRezept->Clone();
    return Void();
}

Void Daten::setZutatByName(Zutat ^ daZutat)
{
    //Key Neu oder ueberschreben wenn bereits vorhanden!
    zutaten[daZutat->getName()->ToString()] = daZutat->Clone();
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
    // Rezeptebeispiele
    Rezept^ aRez = gcnew Rezept("Schokokeks", 100.0, "Kreis", "mittel", 180.0, 40.0);
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

    aRez = gcnew Rezept("Zitronensterne", 100.0, "Stern", "mittel", 200.0, 30.0);
    aRez->addZutat(gcnew Zutat("Backpulver", 100.0, "g"));
    aRez->addZutat(gcnew Zutat("Eier", 1.1, "l"));
    aRez->addZutat(gcnew Zutat("Mehl", 1200.0, "g"));
    aRez->addZutat(gcnew Zutat("Milch", 5.0, "l"));
    aRez->addZutat(gcnew Zutat("Pflanzenfett", 800.0, "g"));
    aRez->addZutat(gcnew Zutat("Zucker", 1100.0, "g"));
    aRez->addZutat(gcnew Zutat("Zitronenpulver", 200.0, "g"));
    aRez->addVerzierung(gcnew Zutat("Zuckerstreusel(bunt)", 333.0, "g"));
    aRez->addVerzierung(gcnew Zutat("Zitronenguss", 0.3333, "l"));
    setRezeptByName(aRez);

    aRez = gcnew Rezept("Bauernkeks", 100.0, "Fuenfeck", "gross", 220.0, 35.0);
    aRez->addZutat(gcnew Zutat("Backpulver", 100.0, "g"));
    aRez->addZutat(gcnew Zutat("Eier", 1.5, "l"));
    aRez->addZutat(gcnew Zutat("Mehl", 1700.0, "g"));
    aRez->addZutat(gcnew Zutat("Milch", 5.0, "l"));
    aRez->addZutat(gcnew Zutat("Pflanzenfett", 400.0, "g"));
    aRez->addZutat(gcnew Zutat("Zucker", 700.0, "g"));
    aRez->addZutat(gcnew Zutat("Kakao", 2000.0, "g"));
    aRez->addVerzierung(gcnew Zutat("Zimt", 300.0, "g"));
    aRez->addVerzierung(gcnew Zutat("Kakaoguss", 0.3, "l"));
    setRezeptByName(aRez);    

    aRez = gcnew Rezept("Nusseckkeks", 200.0, "Dreieck", "gross", 225.0, 40.0);
    aRez->addZutat(gcnew Zutat("Backpulver", 700.0, "g"));
    aRez->addZutat(gcnew Zutat("Eier", 1.5, "l"));
    aRez->addZutat(gcnew Zutat("Mehl", 1700.0, "g"));
    aRez->addZutat(gcnew Zutat("Milch", 5.0, "l"));
    aRez->addZutat(gcnew Zutat("Pflanzenfett", 900.0, "g"));
    aRez->addZutat(gcnew Zutat("Zucker", 700.0, "g"));
    aRez->addZutat(gcnew Zutat("Kakao", 2000.0, "g"));
    aRez->addZutat(gcnew Zutat("Rum", 0.2, "l"));
    aRez->addZutat(gcnew Zutat("Vanillinzucker",300.0, "g"));
    aRez->addVerzierung(gcnew Zutat("Haselnuesse", 300.0, "g"));
    aRez->addVerzierung(gcnew Zutat("Kakaoguss", 0.3, "l"));
    aRez->addVerzierung(gcnew Zutat("Mandeln", 300.0, "g"));
    aRez->addVerzierung(gcnew Zutat("Marmelade", 3.0, "l"));
    aRez->addVerzierung(gcnew Zutat("Walnuesse", 300.0, "g"));
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
    StreamWriter^ sw = gcnew StreamWriter(Filename);
    for each(KeyValuePair<String^, Zutat^> kvp in zutaten)
    {
        sw->WriteLine(kvp.Value->getCommaStr());
    }
    sw->WriteLine("--");
    for each(KeyValuePair<String^, Rezept^> kvp in rezepte) 
    {
        sw->WriteLine(kvp.Value->getDataLine());
    }
    sw->Close();
    return Void();
}

Void Daten::writeKonfigDatei(String ^ daRezept)
{
    writeKonfigDatei(daRezept, "back-konfig.txt");
    return Void();
}

Void Daten::writeKonfigDatei(String^ daRezept, String ^ Filename)
{
    Console::WriteLine("Konfig nach " + Filename + " schreiben.");
    StreamWriter^ sw = gcnew StreamWriter("./konfig-dateien/" + Filename);
    sw->WriteLine(daRezept);
    sw->Close();
    return Void();
}

Void Daten::buildZutatenlisteFromRezepteListe()
{
    Console::WriteLine("Zutatenliste aufbauen");
    for each(KeyValuePair<String^,Rezept^> kvp in rezepte)
    {
        for each (KeyValuePair<String^, Zutat^> swp in kvp.Value->getZutatenListe())
        {
            zutaten[swp.Value->getName()->ToString()] = gcnew Zutat(swp.Value->getName()->ToString(), 0.0, swp.Value->getMasseinheit()->ToString());
        }
        for each (KeyValuePair<String^, Zutat^> swp in kvp.Value->getVerzierungsListe())
        {
            zutaten[swp.Value->getName()->ToString()] = gcnew Zutat(swp.Value->getName()->ToString(), 0.0, swp.Value->getMasseinheit()->ToString());
        }
    }
    return Void();
}
