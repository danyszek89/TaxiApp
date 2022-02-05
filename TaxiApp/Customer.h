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
	/// Podsumowanie informacji o Customer
	/// </summary>
	public ref class Customer : public System::Windows::Forms::Form
	{
	public:
		int id_customer;
		int id_user;
	private: System::Windows::Forms::Button^ btnChangePasswordCustomer;
	public:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtOldPasswordCustomer;
	private: System::Windows::Forms::TextBox^ txtRepeatPasswordCustomer;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtNewPasswordCustomer;
	private: System::Windows::Forms::Label^ label17;

	public:


	public:









		   String^ configuration = L"datasource=localhost ; port=3306; username=root; password=zaq1@WSX; database=taxiappdb";
		Customer(int customer, int user)
		{
			InitializeComponent();

			id_customer = customer;
			id_user = user;
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~Customer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;

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
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->btnChangePasswordCustomer = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtOldPasswordCustomer = (gcnew System::Windows::Forms::TextBox());
			this->txtRepeatPasswordCustomer = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtNewPasswordCustomer = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Margin = System::Windows::Forms::Padding(2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(782, 387);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Margin = System::Windows::Forms::Padding(2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(2);
			this->tabPage1->Size = System::Drawing::Size(774, 361);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Rezerwacja";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &Customer::tabPage1_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label17);
			this->tabPage2->Controls->Add(this->btnChangePasswordCustomer);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Controls->Add(this->txtOldPasswordCustomer);
			this->tabPage2->Controls->Add(this->txtRepeatPasswordCustomer);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->txtNewPasswordCustomer);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Margin = System::Windows::Forms::Padding(2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(2);
			this->tabPage2->Size = System::Drawing::Size(774, 361);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Zmieñ has³o";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label17->Location = System::Drawing::Point(303, 34);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(152, 28);
			this->label17->TabIndex = 16;
			this->label17->Text = L"Zmiana has³a:";
			// 
			// btnChangePasswordCustomer
			// 
			this->btnChangePasswordCustomer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(161)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->btnChangePasswordCustomer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnChangePasswordCustomer->ForeColor = System::Drawing::Color::White;
			this->btnChangePasswordCustomer->Location = System::Drawing::Point(250, 202);
			this->btnChangePasswordCustomer->Name = L"btnChangePasswordCustomer";
			this->btnChangePasswordCustomer->Size = System::Drawing::Size(260, 30);
			this->btnChangePasswordCustomer->TabIndex = 6;
			this->btnChangePasswordCustomer->Text = L"ZMIEÑ";
			this->btnChangePasswordCustomer->UseVisualStyleBackColor = false;
			this->btnChangePasswordCustomer->Click += gcnew System::EventHandler(this, &Customer::btnChangePasswordCustomer_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(236, 100);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(82, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Aktualne has³o:";
			// 
			// txtOldPasswordCustomer
			// 
			this->txtOldPasswordCustomer->Location = System::Drawing::Point(345, 97);
			this->txtOldPasswordCustomer->Name = L"txtOldPasswordCustomer";
			this->txtOldPasswordCustomer->PasswordChar = '*';
			this->txtOldPasswordCustomer->Size = System::Drawing::Size(165, 20);
			this->txtOldPasswordCustomer->TabIndex = 3;
			// 
			// txtRepeatPasswordCustomer
			// 
			this->txtRepeatPasswordCustomer->Location = System::Drawing::Point(345, 155);
			this->txtRepeatPasswordCustomer->Name = L"txtRepeatPasswordCustomer";
			this->txtRepeatPasswordCustomer->PasswordChar = '*';
			this->txtRepeatPasswordCustomer->Size = System::Drawing::Size(165, 20);
			this->txtRepeatPasswordCustomer->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(232, 158);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"PotwierdŸ has³o:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(250, 127);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nowe has³o:";
			// 
			// txtNewPasswordCustomer
			// 
			this->txtNewPasswordCustomer->Location = System::Drawing::Point(345, 124);
			this->txtNewPasswordCustomer->Name = L"txtNewPasswordCustomer";
			this->txtNewPasswordCustomer->PasswordChar = '*';
			this->txtNewPasswordCustomer->Size = System::Drawing::Size(165, 20);
			this->txtNewPasswordCustomer->TabIndex = 4;
			// 
			// Customer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(782, 387);
			this->Controls->Add(this->tabControl1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Customer";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TaxiApp - Klient";
			this->tabControl1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnChangePasswordCustomer_Click(System::Object^ sender, System::EventArgs^ e) {

		MySqlConnection^ baseConnection = gcnew MySqlConnection(configuration);
		MySqlCommand^ query = gcnew MySqlCommand(" UPDATE tbl_user SET password = md5('" + txtNewPasswordCustomer->Text + "') WHERE user_id = " + id_user + "  AND password = md5('" + txtOldPasswordCustomer->Text + "')", baseConnection);

		try
		{
			baseConnection->Open();

			if (query->ExecuteNonQuery())
			{
				MessageBox::Show("Has³o zosta³o zmienione");
			}

			else
			{
				MessageBox::Show("Has³o niepoprawne");
			}
			baseConnection->Close();

		}
		catch (Exception^ komunikat)
		{
			MessageBox::Show(komunikat->Message);
		}

	}
};
}
