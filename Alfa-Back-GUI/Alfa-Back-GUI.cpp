#include "Alfa-Back-Form.h"
#include "Daten.h"


using namespace AlfaBackGUI;

int main()
{
    AlfaBackForm ^ daForm = gcnew AlfaBackForm();
    daForm->ShowDialog();
    return 0;
}