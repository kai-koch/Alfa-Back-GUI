#pragma once

using namespace System;

ref class Zutat
{
private:
    String^ Name;
    Double^ Menge;
    String^ Masseinheit;
public:
    Zutat(String^ nm, Double^ mng, String^ unit);
    String^ getName();
    Double^ getMenge();
    String^ getMasseinheit();
};

