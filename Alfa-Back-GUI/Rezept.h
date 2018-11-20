#pragma once
#include "Zutat.h"

using namespace System;
using namespace System::Collections::Generic;

/**
 * Klasse Rezept um Teig- und Verzierungszusammensetzung zu speichern
 *  und um Konfiguration zu liefern und Richtextbox zu befuellen.
 */
ref class Rezept
{
private:
    /**
     * Key: Zutatenname, Value: Anzahl Einheiten benoetigt fuer Basisanzahl
     * von Keksen
     */
    Dictionary<String^, Double>^ zutaten = gcnew Dictionary<String^, Double>();

    /**
     * Key: Verzierungszutatenname, Value: Anzahl Einheiten benoetigt fuer
     * Basisanzahl
     * von Keksen
     */
    Dictionary<String^, Double>^ verzierungen = gcnew Dictionary<String^, Double>();

public:
    /** Name fuer Teig */
    property String teigname;

    /** Basis Anzahl Kekse Grundrezept */
    property Double basisAnzahl;

    /** Form der Kekse: "Kreis", "Stern", "Oval", "Tanne", etc. */
    property String form;

    /** Kantenlaenge x fuer Rechteck in das die Form eingepasst wird */
    property Double groesseX;

    /** Kantenlaenge y fuer Rechteck in das die Form eingepasst wird */
    property Double groesseY;

    /** Temperatur zum Backen der Kekse */
    property Double backTemperatur;

    /** Zeit die das Rezept benötigt */
    property Double backzeit;

    /**
     * Properties der Klasse setzen
     * @construktor
     * @param tn Teigname
     * @param bAnz Anzahl an Keksen die beim Grundrezept gestanzt werden koennen
     * @param fo Form der Kekse
     * @param gX Kantenlaenge x
     * @param gY Kantenlaenge Y
     * @param bTemp Backtemperatur
     * @param bz Backzeit
     */
    Rezept(String tn, Double bAnz, String fo, Double gX, Double gY, Double bTemp, Double bz);

    /**
     * Fuegt eine Zutat mit Mengenangabe zur Zutatenliste hinzu
     * @param name Name der Zutat
     * @param einheiten Anzahl der Einheiten, die fuer Rezept benoetigt werden
     */
    Void addZutat(Zutat^ ingredient);

    /**
    * Fuegt eine Verzierungszutat mit Mengenangabe zur Verzierungszutatenliste
    * hinzu
    * @param name Name der Zutat
    * @param einheiten Anzahl der Einheiten, die fuer Rezept benoetigt werden
    */
    Void addVerzierung(Zutat^ ingredient);

    /**
     * Berechnet die Zutatenmenge fuer die Menge an gewuenschten Keksen
     * und gibt den String fuer die Konfigurationsdatei zurueck
     * @param totalAnzahlKekse Anzahl der Kekse, die gebacken werden sollen
     */
    String getKonfigdatei(Int32 totalAnzahlKekse);

    /**
     * Gibt das Grundrezept fuer Richtextbox als String zurueck
     */
    String getBeschreibung();

    /**
     * @destructor
     */
    ~Rezept();
};
