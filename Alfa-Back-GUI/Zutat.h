#pragma once

using namespace System;

/**
 * Klasse repraesentiert Zutaten UND Verzierungen, als Spezialfall von Zutat ohne
 * praktische Diversifizierung
 */
ref class Zutat
{
private:
    /** Name der Zutat */
    String^ Name;
    /** Menge der Zutat */
    Double^ Menge;
    /** Masseinheit der Zutat g, Kg, l, ml */
    String^ Masseinheit;
public:
    /**
     * @constructor
     * @param nm Name der Zutat
     * @param mng Menge der Zutat
     * @param Masseinheit der Zutat
     */
    Zutat(String^ nm, Double^ mng, String^ unit);

    /** Getter Name */
    String^ getName();

    /** Getter Menge */
    Double^ getMenge();

    /** Getter Masseinheit */
    String^ getMasseinheit();

    /** Setter Menge */
    Void setMenge(Double^ mng);

    /** Deep-Clone dieser Instanz */
    Zutat^ Clone();

    /** Gibt Comma-Seperated String f�r Konfig-Datei zurueck */
    String^ getCommaStr();
};

