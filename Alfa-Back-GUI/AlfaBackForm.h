#pragma once
#include "Daten.h"
#include "Zutat.h"
#include "Rezept.h"

namespace AlfaBackGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für AlfaBackForm
	/// </summary>
	public ref class AlfaBackForm : public System::Windows::Forms::Form
	{
    private:
        Daten ^ cookies = Daten::InstanceOf;

	public:
		AlfaBackForm(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
            // Rezeptdaten einlesen
            cookies->readFromDataFile();
            // Für jede Sorte 10000 Stueck in Config datei.
            for each(KeyValuePair<String^, Rezept^> kvp in cookies->getAllRezepte()) {
                cookies->writeKonfigDatei(kvp.Value->getKonfigdatei(10000), kvp.Key + "-10000-konfig.txt");
            }
            cookies->buildZutatenlisteFromRezepteListe();
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~AlfaBackForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Zweites_Fenster;

	private: System::Windows::Forms::Button^  buttonSchreiben;

	private: System::Windows::Forms::Label^  labelZutat;
	private: System::Windows::Forms::Label^  labelGuss;
	private: System::Windows::Forms::ComboBox^  comboBox2;
    private: System::Windows::Forms::ComboBox^  rezeptAuswahl;

	private: System::Windows::Forms::Label^  labelBackware;
	private: System::Windows::Forms::Button^  buttonClose;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox1;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  button1;
	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
            this->Zweites_Fenster = (gcnew System::Windows::Forms::Button());
            this->buttonSchreiben = (gcnew System::Windows::Forms::Button());
            this->labelZutat = (gcnew System::Windows::Forms::Label());
            this->labelGuss = (gcnew System::Windows::Forms::Label());
            this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
            this->rezeptAuswahl = (gcnew System::Windows::Forms::ComboBox());
            this->labelBackware = (gcnew System::Windows::Forms::Label());
            this->buttonClose = (gcnew System::Windows::Forms::Button());
            this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
            this->listBox1 = (gcnew System::Windows::Forms::ListBox());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // Zweites_Fenster
            // 
            this->Zweites_Fenster->Location = System::Drawing::Point(321, 391);
            this->Zweites_Fenster->Name = L"Zweites_Fenster";
            this->Zweites_Fenster->Size = System::Drawing::Size(127, 23);
            this->Zweites_Fenster->TabIndex = 0;
            this->Zweites_Fenster->Text = L"Formen";
            this->Zweites_Fenster->UseVisualStyleBackColor = true;
            this->Zweites_Fenster->Click += gcnew System::EventHandler(this, &AlfaBackForm::Zweites_Fenster_Click);
            // 
            // buttonSchreiben
            // 
            this->buttonSchreiben->Location = System::Drawing::Point(59, 391);
            this->buttonSchreiben->Name = L"buttonSchreiben";
            this->buttonSchreiben->Size = System::Drawing::Size(117, 23);
            this->buttonSchreiben->TabIndex = 2;
            this->buttonSchreiben->Text = L"Rezept schreiben";
            this->buttonSchreiben->UseVisualStyleBackColor = true;
            this->buttonSchreiben->Click += gcnew System::EventHandler(this, &AlfaBackForm::button1_Click);
            // 
            // labelZutat
            // 
            this->labelZutat->AutoSize = true;
            this->labelZutat->Location = System::Drawing::Point(57, 136);
            this->labelZutat->Name = L"labelZutat";
            this->labelZutat->Size = System::Drawing::Size(44, 13);
            this->labelZutat->TabIndex = 3;
            this->labelZutat->Text = L"Zutaten";
            this->labelZutat->Click += gcnew System::EventHandler(this, &AlfaBackForm::labelZutat_Click);
            // 
            // labelGuss
            // 
            this->labelGuss->AutoSize = true;
            this->labelGuss->Location = System::Drawing::Point(57, 243);
            this->labelGuss->Name = L"labelGuss";
            this->labelGuss->Size = System::Drawing::Size(31, 13);
            this->labelGuss->TabIndex = 4;
            this->labelGuss->Text = L"Guss";
            // 
            // comboBox2
            // 
            this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->comboBox2->FormattingEnabled = true;
            this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"klar", L"braun", L"weiss", L"Kakaoguss" });
            this->comboBox2->Location = System::Drawing::Point(177, 235);
            this->comboBox2->Name = L"comboBox2";
            this->comboBox2->Size = System::Drawing::Size(121, 21);
            this->comboBox2->TabIndex = 5;
            // 
            // rezeptAuswahl
            // 
            this->rezeptAuswahl->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->rezeptAuswahl->FormattingEnabled = true;
            this->rezeptAuswahl->Location = System::Drawing::Point(177, 41);
            this->rezeptAuswahl->Name = L"rezeptAuswahl";
            this->rezeptAuswahl->Size = System::Drawing::Size(121, 21);
            this->rezeptAuswahl->Sorted = true;
            this->rezeptAuswahl->TabIndex = 6;
            this->rezeptAuswahl->SelectedIndexChanged += gcnew System::EventHandler(this, &AlfaBackForm::rezeptAuswahl_SelectedIndexChanged);
            // 
            // labelBackware
            // 
            this->labelBackware->AutoSize = true;
            this->labelBackware->Location = System::Drawing::Point(57, 41);
            this->labelBackware->Name = L"labelBackware";
            this->labelBackware->Size = System::Drawing::Size(55, 13);
            this->labelBackware->TabIndex = 7;
            this->labelBackware->Text = L"Backware";
            // 
            // buttonClose
            // 
            this->buttonClose->Location = System::Drawing::Point(199, 473);
            this->buttonClose->Name = L"buttonClose";
            this->buttonClose->Size = System::Drawing::Size(89, 23);
            this->buttonClose->TabIndex = 8;
            this->buttonClose->Text = L"Close";
            this->buttonClose->UseVisualStyleBackColor = true;
            this->buttonClose->Click += gcnew System::EventHandler(this, &AlfaBackForm::buttonClose_Click);
            // 
            // checkedListBox1
            // 
            this->checkedListBox1->FormattingEnabled = true;
            this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
                L"Milch", L"Zucker ", L"Eier", L"Backpulver",
                    L"Nuesse", L"Kakao", L"Planzenfett"
            });
            this->checkedListBox1->Location = System::Drawing::Point(177, 81);
            this->checkedListBox1->Name = L"checkedListBox1";
            this->checkedListBox1->Size = System::Drawing::Size(128, 109);
            this->checkedListBox1->TabIndex = 9;
            this->checkedListBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &AlfaBackForm::checkedListBox1_SelectedIndexChanged);
            // 
            // listBox1
            // 
            this->listBox1->FormattingEnabled = true;
            this->listBox1->Location = System::Drawing::Point(321, 93);
            this->listBox1->Name = L"listBox1";
            this->listBox1->Size = System::Drawing::Size(133, 95);
            this->listBox1->TabIndex = 10;
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(189, 391);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(116, 23);
            this->button1->TabIndex = 11;
            this->button1->Text = L"Rezept lesen";
            this->button1->UseVisualStyleBackColor = true;
            // 
            // AlfaBackForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(484, 521);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->listBox1);
            this->Controls->Add(this->checkedListBox1);
            this->Controls->Add(this->buttonClose);
            this->Controls->Add(this->labelBackware);
            this->Controls->Add(this->rezeptAuswahl);
            this->Controls->Add(this->comboBox2);
            this->Controls->Add(this->labelGuss);
            this->Controls->Add(this->labelZutat);
            this->Controls->Add(this->buttonSchreiben);
            this->Controls->Add(this->Zweites_Fenster);
            this->Name = L"AlfaBackForm";
            this->Text = L"AlfaBackForm";
            this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &AlfaBackForm::AlfaBackForm_FormClosing);
            this->Load += gcnew System::EventHandler(this, &AlfaBackForm::AlfaBackForm_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
	private: System::Void Zweites_Fenster_Click(System::Object^  sender, System::EventArgs^  e);
    private: System::Void AlfaBackForm_Load(System::Object^  sender, System::EventArgs^  e);
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void labelZutat_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void buttonClose_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void rezeptAuswahl_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void AlfaBackForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
    // Rezept und Zutatendaten in Daten-File schreiben
    cookies->writeToDataFile();
}
};
}
