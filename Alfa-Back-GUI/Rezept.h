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
     * Key: Zutatenname, Value: Instanz der Klasse Zutat fuer Basisanzahl
     * von Keksen
     */
    Dictionary<String^, Zutat^>^ zutaten = gcnew Dictionary<String^, Zutat^>();

    /**
     * Key: Verzierungszutatenname, Value: Anzahl Einheiten benoetigt fuer
     * Basisanzahl
     * von Keksen
     */
    Dictionary<String^, Zutat^>^ verzierungen = gcnew Dictionary<String^, Zutat^>();
    /** Name fuer Teig */
    String ^ teigname;

    /** Basis Anzahl Kekse Grundrezept */
    Double ^ basisAnzahl;

    /** Form der Kekse: "Kreis", "Stern", "Oval", "Tanne", etc. */
    String ^ form;

    /** Kantenlaenge x fuer Rechteck in das die Form eingepasst wird */
    Double ^ groesseX;

    /** Kantenlaenge y fuer Rechteck in das die Form eingepasst wird */
    Double ^ groesseY;

    /** Temperatur zum Backen der Kekse in °C */
    Double ^ backTemperatur;

    /** Zeit, die das Rezept benoetigt, in Minuten */
    Double ^ backZeit;

public:

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
    Rezept(String ^ tn, Double ^ bAnz, String ^ fo, Double ^ gX, Double ^ gY, Double ^ bTemp, Double ^ bz);

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
    String getKonfigdatei(Int32 ^ totalAnzahlKekse);

    /**
     * Gibt das Grundrezept fuer Richtextbox als String zurueck
     */
    String getBeschreibung();


    /*
     * Getter
     */
    String ^ getTeigname();
    Double ^ getBasisAnzahl();
    String ^ getForm();
    Double ^ getGroesseX();
    Double ^ getGroesseY();
    Double ^ getBackTemperatur();
    Double ^ getBackZeit();

    /*
     * Setter
     */
    Void setTeigname(String ^ tn);
    Void setBasisAnzahl(Double ^ ba);
    Void setForm(String ^ f);
    Void setGroesseX(Double ^ gX);
    Void setGroesseY(Double ^ gY);
    Void setBackTemperatur(Double ^ bT);
    Void setBackZeit(Double ^ bZ);

    /**
     * @destructor
     */
    ~Rezept();
};
