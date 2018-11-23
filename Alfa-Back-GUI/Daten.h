#pragma once
#include "Zutat.h"
#include "Rezept.h"

using namespace System;
using namespace System::Collections;

ref class Daten {
private:
    /** @constructor */
    Daten();

    /** Verweigere CopyConstructor */
    Daten(const Daten%);

    /** Singleton Instanz */
    static Daten instance;

    /** Alle Zutaten, die moeglich sind */
    Dictionary<String^, Zutat^>^ zutaten = gcnew Dictionary<String^, Zutat^>();

    /** Alle erstellten Rezepte */
    Dictionary<String^, Rezept^>^ rezepte = gcnew Dictionary<String^, Rezept^>();

public:
    /** Gibt die Singleton Instanz zurueck */
    static property Daten^ InstanceOf { Daten^ get() { return %instance; } }
    
    /** Gibt deep-clone von Dictionary mit Liste aller moeglichen Zutaten zurueck */
    Dictionary<String^, Zutat^>^ getAllZutaten();

    /** Gibt deep-clone der Liste mit allen Rezepten zurueck */
    Dictionary<String^, Rezept^>^ getAllRezepte();

    /** 
     * Sucht Rezept by Name und gibt ein DeepCopy zurueck
     * @param Name der gesuchten Zutat
     * @returns Zutat oder nullpointer, wenn nicht gefunden
     */
    Rezept^ getRezeptByName(String^ daName);

    /**
     * Sucht Zutat by Name und gibt eine DeepCopy der Zutat zurueck
     */
    Zutat^ getZutatByName(String^ daName);

    /**
     * Fuegt eine Rezept zum Dictonary hinzu key = Rezept::name
     * @param Rezept das hinzugefügt werden soll
     */
    Void setRezeptByName(Rezept^ daRezept);

    /**
     * Fuegt eine Zutat zum Dictonary hinzu key = Zutat::name
     * @param Zutat, dis hinzugefuegt werden soll
     */
    Void setZutatByName(Zutat^ daZutat);

    /**
     * Default-Filename "rezept-daten.txt" fuer Datenfile wird benutzt
     */
    Void readFromDataFile();

    /**
     * Datenfile fuer Rezepte/Zutaten Lesen
     * @param Name der Datendatei
     * @TODO Lesen von Datei
     * @TODO Throw Errors
     */
    Void readFromDataFile(String^ Filename);

    /**
     * Datenfile mit Defaultnamen "rezept-daten.txt" zurueck schreiben
     */
    Void writeToDataFile();

    /**
     * Datenfile mit angegbenen Namen schreiben.
     * @TODO Schreiboperation
     * @TODO Throw Errors
     */
    Void writeToDataFile(String^ Filename);

    /**
     * KonfigDatei mit Default-Namen "back-konfig.txt" schreiben
     */
    static Void writeKonfigDatei(String^ daRezept);

    /**
     * KonfigDatei mit angegebenen Namen schreiben
     * @TODO Schreiboperation
     * @TODO Throw Errors
     */
    static Void writeKonfigDatei(String^ daRezept, String^ Filename);

};
