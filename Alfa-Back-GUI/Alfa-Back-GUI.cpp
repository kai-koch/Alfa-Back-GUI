#include "AlfaBackForm.h"
using namespace AlfaBackGUI;
[STAThreadAttribute]
int main()
{
    // GUI
    AlfaBackForm ^ daForm = gcnew AlfaBackForm();
    daForm->ShowDialog();
    return 0;
}