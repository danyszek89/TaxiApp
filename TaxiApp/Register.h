#pragma once

namespace TaxiApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o Register
	/// </summary>
	public ref class Register : public System::Windows::Forms::Form
	{
	public:
		Register(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~Register()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_reg_email;

	private: System::Windows::Forms::TextBox^ txt_reg_surname;

	private: System::Windows::Forms::TextBox^ txt_reg_name;

	private: System::Windows::Forms::TextBox^ txt_reg_repeat_password;

	private: System::Windows::Forms::TextBox^ txt_reg_password;

	private: System::Windows::Forms::TextBox^ txt_reg_login;

	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txt_reg_phone;
	private: System::Windows::Forms::Button^ btn_register_as_custumer;


	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->txt_reg_login = (gcnew System::Windows::Forms::TextBox());
			this->txt_reg_password = (gcnew System::Windows::Forms::TextBox());
			this->txt_reg_repeat_password = (gcnew System::Windows::Forms::TextBox());
			this->txt_reg_name = (gcnew System::Windows::Forms::TextBox());
			this->txt_reg_surname = (gcnew System::Windows::Forms::TextBox());
			this->txt_reg_email = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txt_reg_phone = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btn_register_as_custumer = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(33, 30);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(405, 344);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->btn_register_as_custumer);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->txt_reg_phone);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->txt_reg_email);
			this->tabPage1->Controls->Add(this->txt_reg_surname);
			this->tabPage1->Controls->Add(this->txt_reg_name);
			this->tabPage1->Controls->Add(this->txt_reg_repeat_password);
			this->tabPage1->Controls->Add(this->txt_reg_password);
			this->tabPage1->Controls->Add(this->txt_reg_login);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(397, 318);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Rejestracja u¿ytkownika";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(397, 318);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Zostañ kierowc¹ taxi";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// txt_reg_login
			// 
			this->txt_reg_login->Location = System::Drawing::Point(177, 50);
			this->txt_reg_login->Name = L"txt_reg_login";
			this->txt_reg_login->Size = System::Drawing::Size(100, 20);
			this->txt_reg_login->TabIndex = 0;
			// 
			// txt_reg_password
			// 
			this->txt_reg_password->Location = System::Drawing::Point(177, 76);
			this->txt_reg_password->Name = L"txt_reg_password";
			this->txt_reg_password->Size = System::Drawing::Size(100, 20);
			this->txt_reg_password->TabIndex = 1;
			// 
			// txt_reg_repeat_password
			// 
			this->txt_reg_repeat_password->Location = System::Drawing::Point(177, 103);
			this->txt_reg_repeat_password->Name = L"txt_reg_repeat_password";
			this->txt_reg_repeat_password->Size = System::Drawing::Size(100, 20);
			this->txt_reg_repeat_password->TabIndex = 2;
			// 
			// txt_reg_name
			// 
			this->txt_reg_name->Location = System::Drawing::Point(177, 130);
			this->txt_reg_name->Name = L"txt_reg_name";
			this->txt_reg_name->Size = System::Drawing::Size(100, 20);
			this->txt_reg_name->TabIndex = 3;
			// 
			// txt_reg_surname
			// 
			this->txt_reg_surname->Location = System::Drawing::Point(177, 157);
			this->txt_reg_surname->Name = L"txt_reg_surname";
			this->txt_reg_surname->Size = System::Drawing::Size(100, 20);
			this->txt_reg_surname->TabIndex = 4;
			// 
			// txt_reg_email
			// 
			this->txt_reg_email->Location = System::Drawing::Point(177, 184);
			this->txt_reg_email->Name = L"txt_reg_email";
			this->txt_reg_email->Size = System::Drawing::Size(100, 20);
			this->txt_reg_email->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(138, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(33, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Login";
			this->label1->Click += gcnew System::EventHandler(this, &Register::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(135, 76);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Has³o";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(96, 103);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Powtórz has³o";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(139, 184);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(32, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Email";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(92, 211);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(79, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Numer telefonu";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(145, 130);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(26, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Imiê";
			// 
			// txt_reg_phone
			// 
			this->txt_reg_phone->Location = System::Drawing::Point(177, 211);
			this->txt_reg_phone->Name = L"txt_reg_phone";
			this->txt_reg_phone->Size = System::Drawing::Size(100, 20);
			this->txt_reg_phone->TabIndex = 12;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(118, 157);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(53, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Nazwisko";
			// 
			// btn_register_as_custumer
			// 
			this->btn_register_as_custumer->Location = System::Drawing::Point(95, 238);
			this->btn_register_as_custumer->Name = L"btn_register_as_custumer";
			this->btn_register_as_custumer->Size = System::Drawing::Size(182, 23);
			this->btn_register_as_custumer->TabIndex = 14;
			this->btn_register_as_custumer->Text = L"Zarejestruj siê!";
			this->btn_register_as_custumer->UseVisualStyleBackColor = true;
			// 
			// Register
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(465, 386);
			this->Controls->Add(this->tabControl1);
			this->Name = L"Register";
			this->Text = L"Register";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
