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
		String^ configuration = L"datasource=localhost ; port=3306; username=root; password=zaq1@WSX; database=taxiappdb";

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
	private: System::Windows::Forms::TextBox^ txt_reg_surname_driver;


	private: System::Windows::Forms::TextBox^ txt_reg_name_driver;

	private: System::Windows::Forms::TextBox^ txt_reg_repeat_password_driver;

	private: System::Windows::Forms::TextBox^ txt_reg_password_driver;

	private: System::Windows::Forms::TextBox^ txt_reg_login_driver;


	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label14;



	private: System::Windows::Forms::TextBox^ txt_reg_email_driver;

	private: System::Windows::Forms::Label^ label16;

	private: System::Windows::Forms::Button^ btn_register_as_driver;
	private: System::Windows::Forms::TextBox^ txt_reg_phone_driver;




	private: System::Windows::Forms::Label^ label15;






	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::TextBox^ txt_pesel_driver;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label18;




	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
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
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txt_pesel_driver = (gcnew System::Windows::Forms::TextBox());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->btn_register_as_driver = (gcnew System::Windows::Forms::Button());
			this->txt_reg_phone_driver = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->txt_reg_email_driver = (gcnew System::Windows::Forms::TextBox());
			this->txt_reg_surname_driver = (gcnew System::Windows::Forms::TextBox());
			this->txt_reg_name_driver = (gcnew System::Windows::Forms::TextBox());
			this->txt_reg_repeat_password_driver = (gcnew System::Windows::Forms::TextBox());
			this->txt_reg_password_driver = (gcnew System::Windows::Forms::TextBox());
			this->txt_reg_login_driver = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(682, 450);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::White;
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->label17);
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
			this->tabPage1->Size = System::Drawing::Size(674, 424);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Rejestracja u¿ytkownika";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(298, 380);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 28;
			this->button2->Text = L"Powrót";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Register::button2_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label17->Location = System::Drawing::Point(226, 24);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(233, 28);
			this->label17->TabIndex = 15;
			this->label17->Text = L"Rejestracja jako klient";
			// 
			// btn_register_as_custumer
			// 
			this->btn_register_as_custumer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(161)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->btn_register_as_custumer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_register_as_custumer->ForeColor = System::Drawing::Color::White;
			this->btn_register_as_custumer->Location = System::Drawing::Point(203, 286);
			this->btn_register_as_custumer->Name = L"btn_register_as_custumer";
			this->btn_register_as_custumer->Size = System::Drawing::Size(260, 30);
			this->btn_register_as_custumer->TabIndex = 14;
			this->btn_register_as_custumer->Text = L"Zarejestruj siê!";
			this->btn_register_as_custumer->UseVisualStyleBackColor = false;
			this->btn_register_as_custumer->Click += gcnew System::EventHandler(this, &Register::btn_register_as_custumer_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(226, 193);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(56, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Nazwisko:";
			// 
			// txt_reg_phone
			// 
			this->txt_reg_phone->Location = System::Drawing::Point(298, 244);
			this->txt_reg_phone->Name = L"txt_reg_phone";
			this->txt_reg_phone->Size = System::Drawing::Size(165, 20);
			this->txt_reg_phone->TabIndex = 12;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(252, 166);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(29, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Imiê:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(200, 247);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(82, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Numer telefonu:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(246, 220);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Email:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(203, 139);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Powtórz has³o:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(242, 112);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(39, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Has³o:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(245, 86);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(36, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Login:";
			this->label1->Click += gcnew System::EventHandler(this, &Register::label1_Click);
			// 
			// txt_reg_email
			// 
			this->txt_reg_email->Location = System::Drawing::Point(298, 217);
			this->txt_reg_email->Name = L"txt_reg_email";
			this->txt_reg_email->Size = System::Drawing::Size(165, 20);
			this->txt_reg_email->TabIndex = 5;
			// 
			// txt_reg_surname
			// 
			this->txt_reg_surname->Location = System::Drawing::Point(298, 190);
			this->txt_reg_surname->Name = L"txt_reg_surname";
			this->txt_reg_surname->Size = System::Drawing::Size(165, 20);
			this->txt_reg_surname->TabIndex = 4;
			// 
			// txt_reg_name
			// 
			this->txt_reg_name->Location = System::Drawing::Point(298, 163);
			this->txt_reg_name->Name = L"txt_reg_name";
			this->txt_reg_name->Size = System::Drawing::Size(165, 20);
			this->txt_reg_name->TabIndex = 3;
			// 
			// txt_reg_repeat_password
			// 
			this->txt_reg_repeat_password->Location = System::Drawing::Point(298, 136);
			this->txt_reg_repeat_password->Name = L"txt_reg_repeat_password";
			this->txt_reg_repeat_password->PasswordChar = '*';
			this->txt_reg_repeat_password->Size = System::Drawing::Size(165, 20);
			this->txt_reg_repeat_password->TabIndex = 2;
			// 
			// txt_reg_password
			// 
			this->txt_reg_password->Location = System::Drawing::Point(298, 109);
			this->txt_reg_password->Name = L"txt_reg_password";
			this->txt_reg_password->PasswordChar = '*';
			this->txt_reg_password->Size = System::Drawing::Size(165, 20);
			this->txt_reg_password->TabIndex = 1;
			// 
			// txt_reg_login
			// 
			this->txt_reg_login->Location = System::Drawing::Point(298, 83);
			this->txt_reg_login->Name = L"txt_reg_login";
			this->txt_reg_login->Size = System::Drawing::Size(165, 20);
			this->txt_reg_login->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label18);
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Controls->Add(this->txt_pesel_driver);
			this->tabPage2->Controls->Add(this->checkedListBox1);
			this->tabPage2->Controls->Add(this->label16);
			this->tabPage2->Controls->Add(this->btn_register_as_driver);
			this->tabPage2->Controls->Add(this->txt_reg_phone_driver);
			this->tabPage2->Controls->Add(this->label15);
			this->tabPage2->Controls->Add(this->label14);
			this->tabPage2->Controls->Add(this->txt_reg_email_driver);
			this->tabPage2->Controls->Add(this->txt_reg_surname_driver);
			this->tabPage2->Controls->Add(this->txt_reg_name_driver);
			this->tabPage2->Controls->Add(this->txt_reg_repeat_password_driver);
			this->tabPage2->Controls->Add(this->txt_reg_password_driver);
			this->tabPage2->Controls->Add(this->txt_reg_login_driver);
			this->tabPage2->Controls->Add(this->label13);
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(674, 424);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Zostañ kierowc¹ taxi";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label18->Location = System::Drawing::Point(226, 24);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(267, 28);
			this->label18->TabIndex = 28;
			this->label18->Text = L"Rejestracja jako kierowca";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(298, 380);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 27;
			this->button1->Text = L"Powrót";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Register::button1_Click);
			// 
			// txt_pesel_driver
			// 
			this->txt_pesel_driver->Location = System::Drawing::Point(298, 220);
			this->txt_pesel_driver->Name = L"txt_pesel_driver";
			this->txt_pesel_driver->Size = System::Drawing::Size(165, 20);
			this->txt_pesel_driver->TabIndex = 26;
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->CheckOnClick = true;
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->HorizontalScrollbar = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"A", L"B", L"C", L"D" });
			this->checkedListBox1->Location = System::Drawing::Point(363, 273);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(100, 34);
			this->checkedListBox1->TabIndex = 25;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(192, 284);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(166, 13);
			this->label16->TabIndex = 20;
			this->label16->Text = L"Posiadane kategorie prawa jazdy:";
			this->label16->Click += gcnew System::EventHandler(this, &Register::label16_Click);
			// 
			// btn_register_as_driver
			// 
			this->btn_register_as_driver->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(161)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->btn_register_as_driver->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_register_as_driver->ForeColor = System::Drawing::Color::White;
			this->btn_register_as_driver->Location = System::Drawing::Point(204, 326);
			this->btn_register_as_driver->Name = L"btn_register_as_driver";
			this->btn_register_as_driver->Size = System::Drawing::Size(260, 30);
			this->btn_register_as_driver->TabIndex = 18;
			this->btn_register_as_driver->Text = L"Zarejestruj siê!";
			this->btn_register_as_driver->UseVisualStyleBackColor = false;
			this->btn_register_as_driver->Click += gcnew System::EventHandler(this, &Register::btn_register_as_driver_Click);
			// 
			// txt_reg_phone_driver
			// 
			this->txt_reg_phone_driver->Location = System::Drawing::Point(298, 247);
			this->txt_reg_phone_driver->Name = L"txt_reg_phone_driver";
			this->txt_reg_phone_driver->Size = System::Drawing::Size(165, 20);
			this->txt_reg_phone_driver->TabIndex = 15;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(238, 250);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(46, 13);
			this->label15->TabIndex = 14;
			this->label15->Text = L"Telefon:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(249, 198);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(35, 13);
			this->label14->TabIndex = 13;
			this->label14->Text = L"Email:";
			this->label14->Click += gcnew System::EventHandler(this, &Register::label14_Click);
			// 
			// txt_reg_email_driver
			// 
			this->txt_reg_email_driver->Location = System::Drawing::Point(298, 195);
			this->txt_reg_email_driver->Name = L"txt_reg_email_driver";
			this->txt_reg_email_driver->Size = System::Drawing::Size(165, 20);
			this->txt_reg_email_driver->TabIndex = 11;
			this->txt_reg_email_driver->TextChanged += gcnew System::EventHandler(this, &Register::textBox6_TextChanged);
			// 
			// txt_reg_surname_driver
			// 
			this->txt_reg_surname_driver->Location = System::Drawing::Point(298, 169);
			this->txt_reg_surname_driver->Name = L"txt_reg_surname_driver";
			this->txt_reg_surname_driver->Size = System::Drawing::Size(165, 20);
			this->txt_reg_surname_driver->TabIndex = 10;
			// 
			// txt_reg_name_driver
			// 
			this->txt_reg_name_driver->Location = System::Drawing::Point(298, 143);
			this->txt_reg_name_driver->Name = L"txt_reg_name_driver";
			this->txt_reg_name_driver->Size = System::Drawing::Size(165, 20);
			this->txt_reg_name_driver->TabIndex = 9;
			// 
			// txt_reg_repeat_password_driver
			// 
			this->txt_reg_repeat_password_driver->Location = System::Drawing::Point(298, 117);
			this->txt_reg_repeat_password_driver->Name = L"txt_reg_repeat_password_driver";
			this->txt_reg_repeat_password_driver->PasswordChar = '*';
			this->txt_reg_repeat_password_driver->Size = System::Drawing::Size(165, 20);
			this->txt_reg_repeat_password_driver->TabIndex = 8;
			// 
			// txt_reg_password_driver
			// 
			this->txt_reg_password_driver->Location = System::Drawing::Point(298, 91);
			this->txt_reg_password_driver->Name = L"txt_reg_password_driver";
			this->txt_reg_password_driver->PasswordChar = '*';
			this->txt_reg_password_driver->Size = System::Drawing::Size(165, 20);
			this->txt_reg_password_driver->TabIndex = 7;
			// 
			// txt_reg_login_driver
			// 
			this->txt_reg_login_driver->Location = System::Drawing::Point(298, 65);
			this->txt_reg_login_driver->Name = L"txt_reg_login_driver";
			this->txt_reg_login_driver->Size = System::Drawing::Size(165, 20);
			this->txt_reg_login_driver->TabIndex = 6;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(248, 223);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(36, 13);
			this->label13->TabIndex = 5;
			this->label13->Text = L"Pesel:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(228, 172);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(56, 13);
			this->label12->TabIndex = 4;
			this->label12->Text = L"Nazwisko:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(255, 146);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(29, 13);
			this->label11->TabIndex = 3;
			this->label11->Text = L"Imie:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(206, 120);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(78, 13);
			this->label10->TabIndex = 2;
			this->label10->Text = L"Powtórz has³o:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(245, 94);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(39, 13);
			this->label9->TabIndex = 1;
			this->label9->Text = L"Has³o:";
			this->label9->Click += gcnew System::EventHandler(this, &Register::label9_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(248, 68);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(36, 13);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Login:";
			// 
			// Register
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(682, 450);
			this->Controls->Add(this->tabControl1);
			this->Name = L"Register";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TaxiApp - Rejestracja";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
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

		query->CommandText = "INSERT INTO tbl_customer SET  tbl_customer.user_id=last_insert_id(), name='" + txt_reg_name->Text + "', surname ='" + txt_reg_surname->Text + "', tel_number='" + txt_reg_phone->Text + "'";

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
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label16_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_register_as_driver_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txt_reg_name_driver->Text->Length < 3 || txt_reg_surname_driver->Text->Length < 3 || txt_reg_email_driver->Text->Length < 3)
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
		query->CommandText = "INSERT INTO tbl_user SET login='" + txt_reg_login_driver->Text + "', password=md5('" + txt_reg_password_driver->Text + "'), email = '" + txt_reg_email_driver->Text + "', role = 'driver'; ";
		query->ExecuteNonQuery();

		//Pobranie ID uzytkownika z tbl_user
		int idUser = (int)query->LastInsertedId;

		//Odczyt zaznaczonych kategorii prawa jazdy
		int tab[4];
		for (int i = 0; i <= 3; i++)
		{
			if (checkedListBox1->GetItemChecked(i))
			{
				tab[i] = 1;
			}
			else {
				tab[i] = 0;
			}		
		}

		query->CommandText = "INSERT INTO tbl_licence (cat_a,cat_b,cat_c,cat_d) VALUES ("+ tab[0]+" , "+tab[1]+", "+tab[2]+", "+tab[3]+")";
		query->ExecuteNonQuery();

		query->CommandText = "INSERT INTO tbl_driver SET licence_id=last_insert_id(), name='" + txt_reg_name_driver->Text + "', surname ='" + txt_reg_surname_driver->Text + "', pesel="+txt_pesel_driver->Text + ", tel_number = '" + txt_reg_phone_driver->Text + "', busy = 1, user_id = " + idUser + "";
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
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
