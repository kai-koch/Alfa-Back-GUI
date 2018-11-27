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
	private: System::Windows::Forms::Button^  Zweites_Fenster;
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
			this->SuspendLayout();
			// 
			// Zweites_Fenster
			// 
			this->Zweites_Fenster->Location = System::Drawing::Point(273, 354);
			this->Zweites_Fenster->Name = L"Zweites_Fenster";
			this->Zweites_Fenster->Size = System::Drawing::Size(127, 23);
			this->Zweites_Fenster->TabIndex = 0;
			this->Zweites_Fenster->Text = L"Zweites Fenster";
			this->Zweites_Fenster->UseVisualStyleBackColor = true;
			this->Zweites_Fenster->Click += gcnew System::EventHandler(this, &AlfaBackForm::Zweites_Fenster_Click);
			// 
			// AlfaBackForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(421, 389);
			this->Controls->Add(this->Zweites_Fenster);
			this->Name = L"AlfaBackForm";
			this->Text = L"AlfaBackForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Zweites_Fenster_Click(System::Object^  sender, System::EventArgs^  e);
	};
}
