#include "Daten.h"

Daten::Daten() {
    this->addZutatenEinheiten("Backpulver", "g");
    this->addZutatenEinheiten("Backzeit", "min");
/*        
        "Eier" : "l",
        "GroesseX" : "mm",
        "GroesseY" : "mm",
        "Haselnuesse" : "g",
        "Kakao" : "g",
        "Kakaoguss" : "l",
        "Mandeln" : "g",
        "Marmelade" : "l",
        "Mehl" : "g",
        "Milch" : "l",
        "Pflanzenfett" : "g",
        "Puderzucker" : "g",
        "Rum" : "l",
        "Schokostreusel" : "g",
        "Temperatur" : "°C",
        "Vanillezucker" : "g",
        "Walnuesse" : "g",
        "Zimt" : "g",
        "Zitronenguss" : "l",
        "Zitronenpulver" : "g",
        "Zitronenzimtguss" : "l",
        "Zucker" : "g",
        "Zuckerstreusel(bunt)" : "g",
*/

}

Daten::Daten(const Daten %)
{
    throw gcnew System::InvalidOperationException("Daten cannot be copy-constructed");
}

ArrayList ^ Daten::getZutatenEinheiten()
{
    return einheiten;
}

Void Daten::addZutatenEinheiten(String^ nm, String^ unit)
{
    einheiten->Add(gcnew Einheit(nm, unit));
    return Void();
}
