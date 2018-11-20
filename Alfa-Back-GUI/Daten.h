#pragma once
#include "Einheit.h"

using namespace System;
using namespace System::Collections;
ref class Daten {
private:
    Daten();
    Daten(const Daten%);
    static Daten instance;
    ArrayList^ einheiten = gcnew ArrayList;
public:
    static property Daten^ InstanceOf { Daten^ get() { return %instance; } }
    ArrayList^ getZutatenEinheiten();
    Void addZutatenEinheiten(String^ nm, String^ unit);
};





