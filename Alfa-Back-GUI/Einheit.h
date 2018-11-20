#pragma once

using namespace System;
/**
 * Daten-Klasse um Einheiten der Zutaten und Parameter fuer Backstrasse
 * zu speichern
 */
ref class Einheit
{
private:
    String ^ name;
    String ^ einheit;
public:
    /**
     * Instanz erstellen
     * @construktor
     * @param nm Name der Zutat / des Parameter
     * @param unit Einheit der Zutat / des Parameters "g", "l", "°C", etc. 
     */
    Einheit(String ^ nm, String ^ unit);
    String ^ getName();
    String ^ getEinheit();
};

