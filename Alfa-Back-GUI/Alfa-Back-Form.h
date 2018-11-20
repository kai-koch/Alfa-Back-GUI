#pragma once

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
	public:
		AlfaBackForm(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
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
    private: System::Windows::Forms::Button^  __identifier(export);
    private: System::Windows::Forms::ComboBox^  Ausahl;

    private: System::Windows::Forms::Label^  label1;
    private: System::Windows::Forms::RichTextBox^  detail;
    private: System::Windows::Forms::Label^  label2;
    private: System::Windows::Forms::TextBox^  anzahlKekse;
    private: System::Windows::Forms::Label^  labelAnzKekse;
    protected:

    protected:

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
            this->__identifier(export) = (gcnew System::Windows::Forms::Button());
            this->Ausahl = (gcnew System::Windows::Forms::ComboBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->detail = (gcnew System::Windows::Forms::RichTextBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->anzahlKekse = (gcnew System::Windows::Forms::TextBox());
            this->labelAnzKekse = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // export
            // 
            this->__identifier(export)->Location = System::Drawing::Point(26, 383);
            this->__identifier(export)->Name = L"export";
            this->__identifier(export)->Size = System::Drawing::Size(211, 23);
            this->__identifier(export)->TabIndex = 0;
            this->__identifier(export)->Text = L"Konfiguration exportieren";
            this->__identifier(export)->UseVisualStyleBackColor = true;
            // 
            // Ausahl
            // 
            this->Ausahl->FormattingEnabled = true;
            this->Ausahl->Location = System::Drawing::Point(29, 56);
            this->Ausahl->Name = L"Ausahl";
            this->Ausahl->Size = System::Drawing::Size(208, 21);
            this->Ausahl->Sorted = true;
            this->Ausahl->TabIndex = 1;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(26, 40);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(80, 13);
            this->label1->TabIndex = 2;
            this->label1->Text = L"Rezeptauswahl";
            // 
            // detail
            // 
            this->detail->Location = System::Drawing::Point(29, 106);
            this->detail->Name = L"detail";
            this->detail->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
            this->detail->Size = System::Drawing::Size(208, 204);
            this->detail->TabIndex = 3;
            this->detail->Text = L"";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(26, 90);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(76, 13);
            this->label2->TabIndex = 4;
            this->label2->Text = L"Rezept Details";
            // 
            // anzahlKekse
            // 
            this->anzahlKekse->Location = System::Drawing::Point(26, 345);
            this->anzahlKekse->Name = L"anzahlKekse";
            this->anzahlKekse->Size = System::Drawing::Size(211, 20);
            this->anzahlKekse->TabIndex = 5;
            this->anzahlKekse->Text = L"10000";
            this->anzahlKekse->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            // 
            // labelAnzKekse
            // 
            this->labelAnzKekse->AutoSize = true;
            this->labelAnzKekse->Location = System::Drawing::Point(26, 326);
            this->labelAnzKekse->Name = L"labelAnzKekse";
            this->labelAnzKekse->Size = System::Drawing::Size(140, 13);
            this->labelAnzKekse->TabIndex = 6;
            this->labelAnzKekse->Text = L"Anzahl zu backender Kekse";
            // 
            // AlfaBackForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(276, 493);
            this->Controls->Add(this->labelAnzKekse);
            this->Controls->Add(this->anzahlKekse);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->detail);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->Ausahl);
            this->Controls->Add(this->__identifier(export));
            this->Name = L"AlfaBackForm";
            this->Text = L"AlfaBackForm";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
	};
}
