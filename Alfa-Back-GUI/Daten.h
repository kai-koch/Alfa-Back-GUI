#pragma once
#include "Zutat.h"
#include "Rezept.h"

using namespace System;
using namespace System::Collections;

ref class Daten {
private:
    Daten();
    Daten(const Daten%);
    static Daten instance;
    Dictionary<String^, Zutat^>^ zutaten = gcnew Dictionary<String^, Zutat^>();
    Dictionary<String^, Rezept^>^ rezepte = gcnew Dictionary<String^, Rezept^>();
public:
    static property Daten^ InstanceOf { Daten^ get() { return %instance; } }
    
    Dictionary<String^, Zutat^>^ getAllZutaten();
    Dictionary<String^, Rezept^>^ getAllRezepte();

    Rezept^ getRezeptByName(String^ daName);
    Zutat^ getZutatByName(String^ daName);

    Void setRezeptByName(Rezept^ daRezept);
    Void setZutatByName(Zutat^ daZutat);

    Void readFromDataFile();
    Void readFromDataFile(String^ Filename);

    Void writeToDataFile();
    Void writeToDataFile(String^ Filename);

    Void writeKonfigDatei(Rezept^ daRezept);
    Void writeKonfigDatei(Rezept^ daRezept, String^ Filename);
};
