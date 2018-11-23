#include "Alfa-Back-Form.h"
#include "Daten.h"
#include "Zutat.h"
#include "Rezept.h"

using namespace AlfaBackGUI;

int main()
{
    Daten^ cookies = Daten::InstanceOf;
    cookies->readFromDataFile();
    for each(KeyValuePair<String^,Rezept^> kvp in cookies->getAllRezepte()) {
        cookies->writeKonfigDatei(kvp.Value->getKonfigdatei(10000), kvp.Key + "-konfig.txt");
    }

    AlfaBackForm ^ daForm = gcnew AlfaBackForm();
    daForm->ShowDialog();
    return 0;
}