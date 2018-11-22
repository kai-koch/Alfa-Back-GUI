#pragma once
#include "Zutat.h"

using namespace System;
using namespace System::Collections;
ref class Daten {
private:
    Daten();
    Daten(const Daten%);
    static Daten instance;
public:
    static property Daten^ InstanceOf { Daten^ get() { return %instance; } }
};
