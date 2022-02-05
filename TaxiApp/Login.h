#pragma once
#include "Program.h"
#include "Register.h"
#include "Customer.h"
#include "DriverProgram.h"



namespace TaxiApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Podsumowanie informacji o Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
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
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtLogin;
	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::Button^ btnLogin;




	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtLogin = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(116, 110);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(187, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"WprowadŸ swoj¹ nazwê u¿ytkownika:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(116, 156);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"WprowadŸ has³o:";
			// 
			// txtLogin
			// 
			this->txtLogin->Location = System::Drawing::Point(119, 126);
			this->txtLogin->Name = L"txtLogin";
			this->txtLogin->Size = System::Drawing::Size(204, 20);
			this->txtLogin->TabIndex = 2;
			// 
			// txtPassword
			// 
			this->txtPassword->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtPassword->Location = System::Drawing::Point(119, 172);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(204, 20);
			this->txtPassword->TabIndex = 3;
			// 
			// btnLogin
			// 
			this->btnLogin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->btnLogin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLogin->ForeColor = System::Drawing::Color::White;
			this->btnLogin->Location = System::Drawing::Point(119, 209);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(204, 31);
			this->btnLogin->TabIndex = 4;
			this->btnLogin->Text = L"Zaloguj";
			this->btnLogin->UseVisualStyleBackColor = false;
			this->btnLogin->Click += gcnew System::EventHandler(this, &Login::btnLogin_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(126, 259);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(86, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Nie masz konta\?";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->linkLabel1->Location = System::Drawing::Point(234, 259);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(73, 13);
			this->linkLabel1->TabIndex = 10;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Utwórz konto!";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Login::linkLabel1_LinkClicked);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(189, 369);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(69, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Version 1.0.2";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Default;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(119, 32);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(197, 57);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(440, 391);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->btnLogin);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtLogin);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TaxiApp - Logowanie";
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		//this->Close();
	}
private: System::Void btnLogin_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ configuration = L"datasource=localhost ; port=3306; username=root; password=zaq1@WSX; database=taxiappdb";
	MySqlConnection^ baseConnection = gcnew MySqlConnection(configuration);
	MySqlCommand^ query = gcnew MySqlCommand("SELECT * FROM tbl_user  WHERE login='" + txtLogin->Text + "' AND password = md5('" + txtPassword->Text + "')", baseConnection);
	MySqlDataReader^ reading;
	MySqlCommand^ querydriver = gcnew MySqlCommand("SELECT * FROM tbl_user, tbl_driver WHERE tbl_user.user_id=tbl_driver.user_id AND login='" + txtLogin->Text + "' ", baseConnection);
	MySqlDataReader^ readingdriver;
	MySqlCommand^ querycustomer = gcnew MySqlCommand("SELECT * FROM tbl_user, tbl_customer WHERE tbl_user.user_id=tbl_customer.user_id AND login='" + txtLogin->Text + "' ", baseConnection);
	MySqlDataReader^ readingcustomer;

	baseConnection->Open();

	readingdriver = querydriver->ExecuteReader();
	int id_driver;
	if (readingdriver->Read())

	{
		id_driver = readingdriver->GetInt32("driver_id");
	}
	readingdriver->Close();

	readingcustomer = querycustomer->ExecuteReader();
	int id_customer;
	if (readingcustomer->Read())

	{
		id_customer = readingcustomer->GetInt32("customer_id");
		String^ test = Convert::ToString(id_customer);
		MessageBox::Show(test);
		id_customer = readingcustomer->GetInt32("customer_id");
	}
	readingcustomer->Close();

	try
	{
		reading = query->ExecuteReader();

		if (reading->Read())
		{
			String^ user_role = reading->GetString("role");

			MessageBox::Show(user_role);
			int id_user = reading->GetInt32(0);


			if (user_role == "admin")
			{
				this->Hide();
				Program^ program = gcnew Program();
				program->ShowDialog();
				this->Close();
			}

			if (user_role == "customer")
			{
				this->Hide();
				Customer^ customer = gcnew Customer(id_customer, id_user);
				customer->ShowDialog();
				this->Close();
			}

			if (user_role == "driver")
			{

				


					this->Hide();
					DriverProgram^ driver = gcnew DriverProgram(id_driver, id_user);
					driver->ShowDialog();
					this->Close();
				}
			
		}

		else
		{
			MessageBox::Show("Podaj poprawne dane! " "", "B³êdne dane logowania", MessageBoxButtons::OK, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::Yes;
			//MessageBox::Show("Podaj poprawne dane logowania");
		}


	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
	baseConnection->Close();
}
private: System::Void btn_register_Click(System::Object^ sender, System::EventArgs^ e) {
	
	
	//Register^ reg= gcnew Register();
	//reg->ShowDialog();
	
}
private: System::Void Login_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	Register^ reg = gcnew Register();
	reg->ShowDialog();
}
};
}
