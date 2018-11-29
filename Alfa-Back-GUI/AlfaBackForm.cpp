#include "AlfaBackForm.h"
#include "MyFormPaint.h"

System::Void AlfaBackGUI::AlfaBackForm::Zweites_Fenster_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	MyFormPaint ^ MFP = gcnew MyFormPaint();
	//zf->Show();
	MFP->ShowDialog();
}

System::Void AlfaBackGUI::AlfaBackForm::AlfaBackForm_Load(System::Object ^ sender, System::EventArgs ^ e)
{
    
        //add items to combo
    

    return System::Void();
}
