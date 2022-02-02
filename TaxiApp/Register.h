#pragma once

namespace TaxiApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;


	/// <summary>
	/// Podsumowanie informacji o Register
	/// </summary>
	public ref class Register : public System::Windows::Forms::Form
	{
	public:
		String^ configuration = L"datasource=localhost ; port=3306; username=root; password=12345; database=taxiappdb";

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
			this->btn_register_as_custumer = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txt_reg_phone = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_reg_email = (gcnew System::Windows::Forms::TextBox());
			this->txt_reg_surname = (gcnew System::Windows::Forms::TextBox());
			this->txt_reg_name = (gcnew System::Windows::Forms::TextBox());
			this->txt_reg_repeat_password = (gcnew System::Windows::Forms::TextBox());
			this->txt_reg_password = (gcnew System::Windows::Forms::TextBox());
			this->txt_reg_login = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(44, 37);
			this->tabControl1->Margin = System::Windows::Forms::Padding(4);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(540, 423);
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
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Margin = System::Windows::Forms::Padding(4);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(4);
			this->tabPage1->Size = System::Drawing::Size(532, 394);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Rejestracja u¿ytkownika";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// btn_register_as_custumer
			// 
			this->btn_register_as_custumer->Location = System::Drawing::Point(127, 293);
			this->btn_register_as_custumer->Margin = System::Windows::Forms::Padding(4);
			this->btn_register_as_custumer->Name = L"btn_register_as_custumer";
			this->btn_register_as_custumer->Size = System::Drawing::Size(243, 37);
			this->btn_register_as_custumer->TabIndex = 14;
			this->btn_register_as_custumer->Text = L"Zarejestruj siê!";
			this->btn_register_as_custumer->UseVisualStyleBackColor = true;
			this->btn_register_as_custumer->Click += gcnew System::EventHandler(this, &Register::btn_register_as_custumer_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(157, 193);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(65, 16);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Nazwisko";
			// 
			// txt_reg_phone
			// 
			this->txt_reg_phone->Location = System::Drawing::Point(236, 260);
			this->txt_reg_phone->Margin = System::Windows::Forms::Padding(4);
			this->txt_reg_phone->Name = L"txt_reg_phone";
			this->txt_reg_phone->Size = System::Drawing::Size(132, 22);
			this->txt_reg_phone->TabIndex = 12;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(193, 160);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(32, 16);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Imiê";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(123, 260);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(97, 16);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Numer telefonu";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(185, 226);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(41, 16);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Email";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(128, 127);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(93, 16);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Powtórz has³o";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(180, 94);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 16);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Has³o";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(184, 60);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 16);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Login";
			this->label1->Click += gcnew System::EventHandler(this, &Register::label1_Click);
			// 
			// txt_reg_email
			// 
			this->txt_reg_email->Location = System::Drawing::Point(236, 226);
			this->txt_reg_email->Margin = System::Windows::Forms::Padding(4);
			this->txt_reg_email->Name = L"txt_reg_email";
			this->txt_reg_email->Size = System::Drawing::Size(132, 22);
			this->txt_reg_email->TabIndex = 5;
			// 
			// txt_reg_surname
			// 
			this->txt_reg_surname->Location = System::Drawing::Point(236, 193);
			this->txt_reg_surname->Margin = System::Windows::Forms::Padding(4);
			this->txt_reg_surname->Name = L"txt_reg_surname";
			this->txt_reg_surname->Size = System::Drawing::Size(132, 22);
			this->txt_reg_surname->TabIndex = 4;
			// 
			// txt_reg_name
			// 
			this->txt_reg_name->Location = System::Drawing::Point(236, 160);
			this->txt_reg_name->Margin = System::Windows::Forms::Padding(4);
			this->txt_reg_name->Name = L"txt_reg_name";
			this->txt_reg_name->Size = System::Drawing::Size(132, 22);
			this->txt_reg_name->TabIndex = 3;
			// 
			// txt_reg_repeat_password
			// 
			this->txt_reg_repeat_password->Location = System::Drawing::Point(236, 127);
			this->txt_reg_repeat_password->Margin = System::Windows::Forms::Padding(4);
			this->txt_reg_repeat_password->Name = L"txt_reg_repeat_password";
			this->txt_reg_repeat_password->Size = System::Drawing::Size(132, 22);
			this->txt_reg_repeat_password->TabIndex = 2;
			// 
			// txt_reg_password
			// 
			this->txt_reg_password->Location = System::Drawing::Point(236, 94);
			this->txt_reg_password->Margin = System::Windows::Forms::Padding(4);
			this->txt_reg_password->Name = L"txt_reg_password";
			this->txt_reg_password->Size = System::Drawing::Size(132, 22);
			this->txt_reg_password->TabIndex = 1;
			// 
			// txt_reg_login
			// 
			this->txt_reg_login->Location = System::Drawing::Point(236, 62);
			this->txt_reg_login->Margin = System::Windows::Forms::Padding(4);
			this->txt_reg_login->Name = L"txt_reg_login";
			this->txt_reg_login->Size = System::Drawing::Size(132, 22);
			this->txt_reg_login->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Margin = System::Windows::Forms::Padding(4);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(4);
			this->tabPage2->Size = System::Drawing::Size(532, 394);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Zostañ kierowc¹ taxi";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// Register
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(620, 475);
			this->Controls->Add(this->tabControl1);
			this->Margin = System::Windows::Forms::Padding(4);
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
private: System::Void btn_register_as_custumer_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txt_reg_name->Text->Length < 3 || txt_reg_surname->Text->Length < 3 || txt_reg_email->Text->Length < 3 )
	{
		MessageBox::Show("WprowadŸ dane poprawnie");
		return;
	}

	if (txt_reg_password->Text != txt_reg_repeat_password->Text)
	{
		MessageBox::Show("Has³a nie s¹ takie same");
		return;
	}


	MySqlConnection^ baseConnection = gcnew MySqlConnection(configuration);
	MySqlCommand^ query = baseConnection->CreateCommand();
	MySqlTransaction^ transaction;
	baseConnection->Open();
	transaction = baseConnection->BeginTransaction(IsolationLevel::ReadCommitted);

	query->Connection = baseConnection;
	query->Transaction = transaction;

	try
	{

		query->CommandText = "INSERT INTO tbl_user SET login='" + txt_reg_login->Text + "', password=md5('" + txt_reg_password->Text + "'), email = '" + txt_reg_email->Text + "', role = 'customer'; ";

		query->ExecuteNonQuery();

		query->CommandText = "INSERT INTO tbl_customer SET  user_id=last_insert_id(), name='" + txt_reg_name->Text + "', surname ='" + txt_reg_surname->Text + "', tel_number='" + txt_reg_phone->Text + "'";

		query->ExecuteNonQuery();


		transaction->Commit();

		MessageBox::Show("Rejestracja powiod³a siê. Mo¿esz siê zalogowaæ.");

	}


	catch (Exception^ komunikat)
	{
		MessageBox::Show(komunikat->Message);
		transaction->Rollback();

	}

	this->Hide();
	
	baseConnection->Close();

}
};
}
