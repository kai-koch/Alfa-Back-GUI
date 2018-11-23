#include "AlfaBackForm.h"
#include "Daten.h"
#include "Zutat.h"
#include "Rezept.h"

using namespace AlfaBackGUI;

int main()
{
    Daten^ cookies = Daten::InstanceOf;
    // Rezeptdaten einlesen
    cookies->readFromDataFile();
    // Für jede Sorte 10000 Stueck in Config datei.
    for each(KeyValuePair<String^,Rezept^> kvp in cookies->getAllRezepte()) {
        cookies->writeKonfigDatei(kvp.Value->getKonfigdatei(10000), kvp.Key + "-konfig.txt");
    }
    // Rezept und Zutatendaten in Daten-File schreiben
    cookies->writeToDataFile();

    // GUI
    AlfaBackForm ^ daForm = gcnew AlfaBackForm();
    daForm->ShowDialog();
    return 0;
}