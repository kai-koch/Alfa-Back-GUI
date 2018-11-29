#pragma once

namespace AlfaBackGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Drawing2D;

	/// <summary>
	/// Zusammenfassung für MyFormPaint
	/// </summary>
	public ref class MyFormPaint : public System::Windows::Forms::Form
	{
	public:
		System::Collections::Generic::List<System::Drawing::Point>^ _points = gcnew System::Collections::Generic::List<Point>();
		System::Collections::Generic::List<System::Drawing::Point>^ pointFormsKreis = gcnew System::Collections::Generic::List<Point>();
		System::Collections::Generic::List<System::Drawing::Point>^ pointFormsOval = gcnew System::Collections::Generic::List<Point>();
		System::Collections::Generic::List < System::Drawing::Point> ^ pointFormsDreieck = gcnew System::Collections::Generic::List<Point>();
		System::Collections::Generic::List < System::Drawing::Point> ^ pointFormsFuenfeck = gcnew System::Collections::Generic::List<Point>();
		System::Collections::Generic::List < System::Drawing::Point> ^ pointFormsStern = gcnew System::Collections::Generic::List<Point>();


		MyFormPaint(void)
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
		~MyFormPaint()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button_Quadrat;
	protected:
	private: System::Windows::Forms::Button^  button_Oval;
	private: System::Windows::Forms::Button^  button_Stern;
	private: System::Windows::Forms::Button^  button_Kreis;
	private: System::Windows::Forms::Button^  button_Fuenfeck;
	private: System::Windows::Forms::Button^  button_Dreieck;

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
			this->button_Quadrat = (gcnew System::Windows::Forms::Button());
			this->button_Oval = (gcnew System::Windows::Forms::Button());
			this->button_Stern = (gcnew System::Windows::Forms::Button());
			this->button_Kreis = (gcnew System::Windows::Forms::Button());
			this->button_Fuenfeck = (gcnew System::Windows::Forms::Button());
			this->button_Dreieck = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button_Quadrat
			// 
			this->button_Quadrat->Location = System::Drawing::Point(12, 520);
			this->button_Quadrat->Name = L"button_Quadrat";
			this->button_Quadrat->Size = System::Drawing::Size(104, 23);
			this->button_Quadrat->TabIndex = 0;
			this->button_Quadrat->Text = L"Quadrat";
			this->button_Quadrat->UseVisualStyleBackColor = true;
			this->button_Quadrat->Click += gcnew System::EventHandler(this, &MyFormPaint::button_Quadrat_Click);
			// 
			// button_Oval
			// 
			this->button_Oval->Location = System::Drawing::Point(122, 520);
			this->button_Oval->Name = L"button_Oval";
			this->button_Oval->Size = System::Drawing::Size(98, 23);
			this->button_Oval->TabIndex = 1;
			this->button_Oval->Text = L"Oval";
			this->button_Oval->UseVisualStyleBackColor = true;
			this->button_Oval->Click += gcnew System::EventHandler(this, &MyFormPaint::button_Oval_Click);
			// 
			// button_Stern
			// 
			this->button_Stern->Location = System::Drawing::Point(226, 520);
			this->button_Stern->Name = L"button_Stern";
			this->button_Stern->Size = System::Drawing::Size(88, 23);
			this->button_Stern->TabIndex = 2;
			this->button_Stern->Text = L"Stern";
			this->button_Stern->UseVisualStyleBackColor = true;
			this->button_Stern->Click += gcnew System::EventHandler(this, &MyFormPaint::button_Stern_Click);
			// 
			// button_Kreis
			// 
			this->button_Kreis->Location = System::Drawing::Point(320, 520);
			this->button_Kreis->Name = L"button_Kreis";
			this->button_Kreis->Size = System::Drawing::Size(93, 23);
			this->button_Kreis->TabIndex = 3;
			this->button_Kreis->Text = L"Kreis";
			this->button_Kreis->UseVisualStyleBackColor = true;
			this->button_Kreis->Click += gcnew System::EventHandler(this, &MyFormPaint::button_Kreis_Click);
			// 
			// button_Fuenfeck
			// 
			this->button_Fuenfeck->Location = System::Drawing::Point(419, 520);
			this->button_Fuenfeck->Name = L"button_Fuenfeck";
			this->button_Fuenfeck->Size = System::Drawing::Size(86, 23);
			this->button_Fuenfeck->TabIndex = 4;
			this->button_Fuenfeck->Text = L"Fuenfeck";
			this->button_Fuenfeck->UseVisualStyleBackColor = true;
			this->button_Fuenfeck->Click += gcnew System::EventHandler(this, &MyFormPaint::button_Fuenfeck_Click);
			// 
			// button_Dreieck
			// 
			this->button_Dreieck->Location = System::Drawing::Point(511, 520);
			this->button_Dreieck->Name = L"button_Dreieck";
			this->button_Dreieck->Size = System::Drawing::Size(99, 23);
			this->button_Dreieck->TabIndex = 5;
			this->button_Dreieck->Text = L"Dreieck";
			this->button_Dreieck->UseVisualStyleBackColor = true;
			this->button_Dreieck->Click += gcnew System::EventHandler(this, &MyFormPaint::button_Dreieck_Click);
			// 
			// MyFormPaint
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(638, 555);
			this->Controls->Add(this->button_Dreieck);
			this->Controls->Add(this->button_Fuenfeck);
			this->Controls->Add(this->button_Kreis);
			this->Controls->Add(this->button_Stern);
			this->Controls->Add(this->button_Oval);
			this->Controls->Add(this->button_Quadrat);
			this->Name = L"MyFormPaint";
			this->Text = L"MyFormPaint";
			this->Load += gcnew System::EventHandler(this, &MyFormPaint::MyFormPaint_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyFormPaint::MyFormPaint_Paint);
			this->Resize += gcnew System::EventHandler(this, &MyFormPaint::MyFormPaint_Resize);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button_Quadrat_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void button_Oval_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void button_Stern_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void button_Kreis_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void button_Fuenfeck_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void button_Dreieck_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void MyFormPaint_Resize(System::Object^  sender, System::EventArgs^  e);
private: System::Void MyFormPaint_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e);
private: System::Void MyFormPaint_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
