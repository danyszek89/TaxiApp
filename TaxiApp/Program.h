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
	/// Podsumowanie informacji o Program
	/// </summary>
	public ref class Program : public System::Windows::Forms::Form
	{
	public:
		String^ configuration = L"datasource=localhost ; port=3306; username=root; password=12345; database=taxiappdb";

		Program(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczy�� wszystkie u�ywane zasoby.
		/// </summary>
		~Program()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txt_cust_phone;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txt_cust_email;
	private: System::Windows::Forms::TextBox^ txt_cust_surname;
	private: System::Windows::Forms::TextBox^ txt_cust_name;

	private: System::Windows::Forms::TextBox^ txt_cust_login;
	private: System::Windows::Forms::Button^ btnCustomerDelete;
	private: System::Windows::Forms::Button^ btnKlientSzukaj;
	private: System::Windows::Forms::TextBox^ txtCustomerSearch;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dGCustomers;
	private: System::Windows::Forms::Button^ btnCustomerAdd;
	private: System::Windows::Forms::Button^ btnCustomerEdit;
	private: System::Windows::Forms::GroupBox^ gBCostumer;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::GroupBox^ gbCar;

	private: System::Windows::Forms::TextBox^ txtCarBrand;
	private: System::Windows::Forms::TextBox^ txtCarModel;
	private: System::Windows::Forms::TextBox^ txtCarRegNumber;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtCarClass;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;


	private: System::Windows::Forms::Button^ btnCarAdd;
	private: System::Windows::Forms::Button^ btnCarDelete;


	private: System::Windows::Forms::Button^ btnCarSearch;
	private: System::Windows::Forms::TextBox^ txtCarSearch;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::DataGridView^ dGCars;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::Button^ btnCarEdit;
	private: System::Windows::Forms::DataGridView^ dGDrivers;
	private: System::Windows::Forms::GroupBox^ gbDrivers;

	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ txt_pesel_driver;


	private: System::Windows::Forms::TextBox^ txt_phone_driver;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ txt_email_driver;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ txt_surname_driver;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ txt_name_driver;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label13;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ txt_login_driver;
	private: System::Windows::Forms::Button^ btnDriverSearch;
	private: System::Windows::Forms::TextBox^ txtDriverSearch;
	private: System::Windows::Forms::Label^ Kierowca;
	private: System::Windows::Forms::Button^ btnDriverEdit;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ btnDriverDelete;
	private: System::Windows::Forms::CheckBox^ checkBoxD;
	private: System::Windows::Forms::CheckBox^ checkBoxC;
	private: System::Windows::Forms::CheckBox^ checkBoxB;
	private: System::Windows::Forms::CheckBox^ checkBoxA;




	protected:











	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs�ugi projektanta � nie nale�y modyfikowa�
		/// jej zawarto�ci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Program::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->gBCostumer = (gcnew System::Windows::Forms::GroupBox());
			this->txt_cust_login = (gcnew System::Windows::Forms::TextBox());
			this->txt_cust_name = (gcnew System::Windows::Forms::TextBox());
			this->txt_cust_surname = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txt_cust_email = (gcnew System::Windows::Forms::TextBox());
			this->txt_cust_phone = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnCustomerEdit = (gcnew System::Windows::Forms::Button());
			this->btnCustomerAdd = (gcnew System::Windows::Forms::Button());
			this->btnCustomerDelete = (gcnew System::Windows::Forms::Button());
			this->btnKlientSzukaj = (gcnew System::Windows::Forms::Button());
			this->txtCustomerSearch = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dGCustomers = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->btnCarEdit = (gcnew System::Windows::Forms::Button());
			this->gbCar = (gcnew System::Windows::Forms::GroupBox());
			this->txtCarBrand = (gcnew System::Windows::Forms::TextBox());
			this->txtCarModel = (gcnew System::Windows::Forms::TextBox());
			this->txtCarRegNumber = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtCarClass = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->btnCarAdd = (gcnew System::Windows::Forms::Button());
			this->btnCarDelete = (gcnew System::Windows::Forms::Button());
			this->btnCarSearch = (gcnew System::Windows::Forms::Button());
			this->txtCarSearch = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->dGCars = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->btnDriverSearch = (gcnew System::Windows::Forms::Button());
			this->txtDriverSearch = (gcnew System::Windows::Forms::TextBox());
			this->Kierowca = (gcnew System::Windows::Forms::Label());
			this->btnDriverEdit = (gcnew System::Windows::Forms::Button());
			this->gbDrivers = (gcnew System::Windows::Forms::GroupBox());
			this->checkBoxD = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxC = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxB = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxA = (gcnew System::Windows::Forms::CheckBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->txt_pesel_driver = (gcnew System::Windows::Forms::TextBox());
			this->txt_phone_driver = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->txt_email_driver = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->txt_surname_driver = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txt_name_driver = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->txt_login_driver = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dGDrivers = (gcnew System::Windows::Forms::DataGridView());
			this->btnDriverDelete = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->gBCostumer->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dGCustomers))->BeginInit();
			this->tabPage1->SuspendLayout();
			this->gbCar->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dGCars))->BeginInit();
			this->tabPage3->SuspendLayout();
			this->gbDrivers->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dGDrivers))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Margin = System::Windows::Forms::Padding(2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1053, 573);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->gBCostumer);
			this->tabPage2->Controls->Add(this->btnCustomerEdit);
			this->tabPage2->Controls->Add(this->btnCustomerAdd);
			this->tabPage2->Controls->Add(this->btnCustomerDelete);
			this->tabPage2->Controls->Add(this->btnKlientSzukaj);
			this->tabPage2->Controls->Add(this->txtCustomerSearch);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Controls->Add(this->dGCustomers);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Margin = System::Windows::Forms::Padding(2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(2);
			this->tabPage2->Size = System::Drawing::Size(1045, 547);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Klienci";
			this->tabPage2->UseVisualStyleBackColor = true;
			this->tabPage2->Click += gcnew System::EventHandler(this, &Program::tabPage2_Click);
			// 
			// gBCostumer
			// 
			this->gBCostumer->Controls->Add(this->txt_cust_login);
			this->gBCostumer->Controls->Add(this->txt_cust_name);
			this->gBCostumer->Controls->Add(this->txt_cust_surname);
			this->gBCostumer->Controls->Add(this->label7);
			this->gBCostumer->Controls->Add(this->txt_cust_email);
			this->gBCostumer->Controls->Add(this->txt_cust_phone);
			this->gBCostumer->Controls->Add(this->label8);
			this->gBCostumer->Controls->Add(this->label6);
			this->gBCostumer->Controls->Add(this->label4);
			this->gBCostumer->Controls->Add(this->label5);
			this->gBCostumer->Location = System::Drawing::Point(76, 137);
			this->gBCostumer->Margin = System::Windows::Forms::Padding(2);
			this->gBCostumer->Name = L"gBCostumer";
			this->gBCostumer->Padding = System::Windows::Forms::Padding(2);
			this->gBCostumer->Size = System::Drawing::Size(404, 181);
			this->gBCostumer->TabIndex = 30;
			this->gBCostumer->TabStop = false;
			this->gBCostumer->Text = L"Dane klienta";
			// 
			// txt_cust_login
			// 
			this->txt_cust_login->Location = System::Drawing::Point(125, 28);
			this->txt_cust_login->Name = L"txt_cust_login";
			this->txt_cust_login->Size = System::Drawing::Size(165, 20);
			this->txt_cust_login->TabIndex = 14;
			// 
			// txt_cust_name
			// 
			this->txt_cust_name->Location = System::Drawing::Point(125, 56);
			this->txt_cust_name->Name = L"txt_cust_name";
			this->txt_cust_name->Size = System::Drawing::Size(165, 20);
			this->txt_cust_name->TabIndex = 17;
			// 
			// txt_cust_surname
			// 
			this->txt_cust_surname->Location = System::Drawing::Point(125, 83);
			this->txt_cust_surname->Name = L"txt_cust_surname";
			this->txt_cust_surname->Size = System::Drawing::Size(165, 20);
			this->txt_cust_surname->TabIndex = 18;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(54, 86);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(56, 13);
			this->label7->TabIndex = 27;
			this->label7->Text = L"Nazwisko:";
			// 
			// txt_cust_email
			// 
			this->txt_cust_email->Location = System::Drawing::Point(125, 109);
			this->txt_cust_email->Name = L"txt_cust_email";
			this->txt_cust_email->Size = System::Drawing::Size(165, 20);
			this->txt_cust_email->TabIndex = 19;
			// 
			// txt_cust_phone
			// 
			this->txt_cust_phone->Location = System::Drawing::Point(125, 138);
			this->txt_cust_phone->Name = L"txt_cust_phone";
			this->txt_cust_phone->Size = System::Drawing::Size(165, 20);
			this->txt_cust_phone->TabIndex = 26;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(74, 31);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(36, 13);
			this->label8->TabIndex = 20;
			this->label8->Text = L"Login:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(81, 59);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(29, 13);
			this->label6->TabIndex = 25;
			this->label6->Text = L"Imi�:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(74, 113);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 23;
			this->label4->Text = L"Email:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(27, 141);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(82, 13);
			this->label5->TabIndex = 24;
			this->label5->Text = L"Numer telefonu:";
			// 
			// btnCustomerEdit
			// 
			this->btnCustomerEdit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->btnCustomerEdit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCustomerEdit->ForeColor = System::Drawing::Color::White;
			this->btnCustomerEdit->Location = System::Drawing::Point(360, 331);
			this->btnCustomerEdit->Margin = System::Windows::Forms::Padding(2);
			this->btnCustomerEdit->Name = L"btnCustomerEdit";
			this->btnCustomerEdit->Size = System::Drawing::Size(78, 30);
			this->btnCustomerEdit->TabIndex = 29;
			this->btnCustomerEdit->Text = L"Edytuj";
			this->btnCustomerEdit->UseVisualStyleBackColor = false;
			this->btnCustomerEdit->Click += gcnew System::EventHandler(this, &Program::btnCustomerEdit_Click);
			// 
			// btnCustomerAdd
			// 
			this->btnCustomerAdd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->btnCustomerAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCustomerAdd->ForeColor = System::Drawing::Color::White;
			this->btnCustomerAdd->Location = System::Drawing::Point(111, 331);
			this->btnCustomerAdd->Margin = System::Windows::Forms::Padding(2);
			this->btnCustomerAdd->Name = L"btnCustomerAdd";
			this->btnCustomerAdd->Size = System::Drawing::Size(78, 30);
			this->btnCustomerAdd->TabIndex = 28;
			this->btnCustomerAdd->Text = L"Dodaj";
			this->btnCustomerAdd->UseVisualStyleBackColor = false;
			this->btnCustomerAdd->Click += gcnew System::EventHandler(this, &Program::btnCustomerAdd_Click);
			// 
			// btnCustomerDelete
			// 
			this->btnCustomerDelete->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(161)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->btnCustomerDelete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCustomerDelete->ForeColor = System::Drawing::Color::White;
			this->btnCustomerDelete->Location = System::Drawing::Point(234, 331);
			this->btnCustomerDelete->Margin = System::Windows::Forms::Padding(2);
			this->btnCustomerDelete->Name = L"btnCustomerDelete";
			this->btnCustomerDelete->Size = System::Drawing::Size(78, 30);
			this->btnCustomerDelete->TabIndex = 4;
			this->btnCustomerDelete->Text = L"Usu�";
			this->btnCustomerDelete->UseVisualStyleBackColor = false;
			this->btnCustomerDelete->Click += gcnew System::EventHandler(this, &Program::btnCustomerDelete_Click);
			// 
			// btnKlientSzukaj
			// 
			this->btnKlientSzukaj->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->btnKlientSzukaj->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnKlientSzukaj->ForeColor = System::Drawing::Color::White;
			this->btnKlientSzukaj->Location = System::Drawing::Point(387, 88);
			this->btnKlientSzukaj->Margin = System::Windows::Forms::Padding(2);
			this->btnKlientSzukaj->Name = L"btnKlientSzukaj";
			this->btnKlientSzukaj->Size = System::Drawing::Size(93, 29);
			this->btnKlientSzukaj->TabIndex = 3;
			this->btnKlientSzukaj->Text = L"Szukaj";
			this->btnKlientSzukaj->UseVisualStyleBackColor = false;
			this->btnKlientSzukaj->Click += gcnew System::EventHandler(this, &Program::btnKlientSzukaj_Click);
			// 
			// txtCustomerSearch
			// 
			this->txtCustomerSearch->Location = System::Drawing::Point(201, 93);
			this->txtCustomerSearch->Margin = System::Windows::Forms::Padding(2);
			this->txtCustomerSearch->Name = L"txtCustomerSearch";
			this->txtCustomerSearch->Size = System::Drawing::Size(165, 20);
			this->txtCustomerSearch->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(150, 96);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(36, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Klient:";
			// 
			// dGCustomers
			// 
			this->dGCustomers->AllowUserToAddRows = false;
			this->dGCustomers->AllowUserToOrderColumns = true;
			this->dGCustomers->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dGCustomers->Location = System::Drawing::Point(526, 35);
			this->dGCustomers->Margin = System::Windows::Forms::Padding(2);
			this->dGCustomers->Name = L"dGCustomers";
			this->dGCustomers->RowHeadersWidth = 51;
			this->dGCustomers->RowTemplate->Height = 24;
			this->dGCustomers->Size = System::Drawing::Size(489, 486);
			this->dGCustomers->TabIndex = 0;
			this->dGCustomers->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Program::dGCustomers_CellClick);
			this->dGCustomers->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Program::dGKlienci_CellContentClick);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->btnCarEdit);
			this->tabPage1->Controls->Add(this->gbCar);
			this->tabPage1->Controls->Add(this->btnCarAdd);
			this->tabPage1->Controls->Add(this->btnCarDelete);
			this->tabPage1->Controls->Add(this->btnCarSearch);
			this->tabPage1->Controls->Add(this->txtCarSearch);
			this->tabPage1->Controls->Add(this->label12);
			this->tabPage1->Controls->Add(this->dGCars);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Margin = System::Windows::Forms::Padding(2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Size = System::Drawing::Size(1045, 547);
			this->tabPage1->TabIndex = 2;
			this->tabPage1->Text = L"Samochody";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// btnCarEdit
			// 
			this->btnCarEdit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->btnCarEdit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCarEdit->ForeColor = System::Drawing::Color::White;
			this->btnCarEdit->Location = System::Drawing::Point(332, 301);
			this->btnCarEdit->Margin = System::Windows::Forms::Padding(2);
			this->btnCarEdit->Name = L"btnCarEdit";
			this->btnCarEdit->Size = System::Drawing::Size(78, 30);
			this->btnCarEdit->TabIndex = 39;
			this->btnCarEdit->Text = L"Edytuj";
			this->btnCarEdit->UseVisualStyleBackColor = false;
			this->btnCarEdit->Click += gcnew System::EventHandler(this, &Program::btnCarEdit_Click);
			// 
			// gbCar
			// 
			this->gbCar->Controls->Add(this->txtCarBrand);
			this->gbCar->Controls->Add(this->txtCarModel);
			this->gbCar->Controls->Add(this->txtCarRegNumber);
			this->gbCar->Controls->Add(this->label2);
			this->gbCar->Controls->Add(this->txtCarClass);
			this->gbCar->Controls->Add(this->label3);
			this->gbCar->Controls->Add(this->label9);
			this->gbCar->Controls->Add(this->label10);
			this->gbCar->Location = System::Drawing::Point(76, 137);
			this->gbCar->Margin = System::Windows::Forms::Padding(2);
			this->gbCar->Name = L"gbCar";
			this->gbCar->Padding = System::Windows::Forms::Padding(2);
			this->gbCar->Size = System::Drawing::Size(404, 145);
			this->gbCar->TabIndex = 38;
			this->gbCar->TabStop = false;
			this->gbCar->Text = L"Dane samochodu";
			// 
			// txtCarBrand
			// 
			this->txtCarBrand->Location = System::Drawing::Point(125, 28);
			this->txtCarBrand->Name = L"txtCarBrand";
			this->txtCarBrand->Size = System::Drawing::Size(165, 20);
			this->txtCarBrand->TabIndex = 14;
			// 
			// txtCarModel
			// 
			this->txtCarModel->Location = System::Drawing::Point(125, 54);
			this->txtCarModel->Name = L"txtCarModel";
			this->txtCarModel->Size = System::Drawing::Size(165, 20);
			this->txtCarModel->TabIndex = 17;
			// 
			// txtCarRegNumber
			// 
			this->txtCarRegNumber->Location = System::Drawing::Point(125, 80);
			this->txtCarRegNumber->Name = L"txtCarRegNumber";
			this->txtCarRegNumber->Size = System::Drawing::Size(165, 20);
			this->txtCarRegNumber->TabIndex = 18;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(8, 83);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(102, 13);
			this->label2->TabIndex = 27;
			this->label2->Text = L"Numer rejestracyjny:";
			// 
			// txtCarClass
			// 
			this->txtCarClass->Location = System::Drawing::Point(125, 106);
			this->txtCarClass->Name = L"txtCarClass";
			this->txtCarClass->Size = System::Drawing::Size(165, 20);
			this->txtCarClass->TabIndex = 19;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(72, 31);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 13);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Marka:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(72, 57);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(39, 13);
			this->label9->TabIndex = 25;
			this->label9->Text = L"Model:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(72, 109);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(36, 13);
			this->label10->TabIndex = 23;
			this->label10->Text = L"Klasa:";
			this->label10->Click += gcnew System::EventHandler(this, &Program::label10_Click);
			// 
			// btnCarAdd
			// 
			this->btnCarAdd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->btnCarAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCarAdd->ForeColor = System::Drawing::Color::White;
			this->btnCarAdd->Location = System::Drawing::Point(110, 301);
			this->btnCarAdd->Margin = System::Windows::Forms::Padding(2);
			this->btnCarAdd->Name = L"btnCarAdd";
			this->btnCarAdd->Size = System::Drawing::Size(78, 30);
			this->btnCarAdd->TabIndex = 36;
			this->btnCarAdd->Text = L"Dodaj";
			this->btnCarAdd->UseVisualStyleBackColor = false;
			this->btnCarAdd->Click += gcnew System::EventHandler(this, &Program::btnCarAdd_Click);
			// 
			// btnCarDelete
			// 
			this->btnCarDelete->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->btnCarDelete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCarDelete->ForeColor = System::Drawing::Color::White;
			this->btnCarDelete->Location = System::Drawing::Point(220, 301);
			this->btnCarDelete->Margin = System::Windows::Forms::Padding(2);
			this->btnCarDelete->Name = L"btnCarDelete";
			this->btnCarDelete->Size = System::Drawing::Size(78, 30);
			this->btnCarDelete->TabIndex = 35;
			this->btnCarDelete->Text = L"Usu�";
			this->btnCarDelete->UseVisualStyleBackColor = false;
			this->btnCarDelete->Click += gcnew System::EventHandler(this, &Program::btnCarDelete_Click);
			// 
			// btnCarSearch
			// 
			this->btnCarSearch->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->btnCarSearch->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCarSearch->ForeColor = System::Drawing::Color::White;
			this->btnCarSearch->Location = System::Drawing::Point(394, 87);
			this->btnCarSearch->Margin = System::Windows::Forms::Padding(2);
			this->btnCarSearch->Name = L"btnCarSearch";
			this->btnCarSearch->Size = System::Drawing::Size(93, 29);
			this->btnCarSearch->TabIndex = 34;
			this->btnCarSearch->Text = L"Szukaj";
			this->btnCarSearch->UseVisualStyleBackColor = false;
			this->btnCarSearch->Click += gcnew System::EventHandler(this, &Program::btnCarSearch_Click);
			// 
			// txtCarSearch
			// 
			this->txtCarSearch->Location = System::Drawing::Point(201, 93);
			this->txtCarSearch->Margin = System::Windows::Forms::Padding(2);
			this->txtCarSearch->Name = L"txtCarSearch";
			this->txtCarSearch->Size = System::Drawing::Size(165, 20);
			this->txtCarSearch->TabIndex = 33;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(127, 96);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(61, 13);
			this->label12->TabIndex = 32;
			this->label12->Text = L"Samoch�d:";
			// 
			// dGCars
			// 
			this->dGCars->AllowUserToAddRows = false;
			this->dGCars->AllowUserToOrderColumns = true;
			this->dGCars->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dGCars->Location = System::Drawing::Point(526, 35);
			this->dGCars->Margin = System::Windows::Forms::Padding(2);
			this->dGCars->Name = L"dGCars";
			this->dGCars->RowHeadersWidth = 51;
			this->dGCars->RowTemplate->Height = 24;
			this->dGCars->Size = System::Drawing::Size(489, 486);
			this->dGCars->TabIndex = 31;
			this->dGCars->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Program::dGCars_CellClick);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->btnDriverSearch);
			this->tabPage3->Controls->Add(this->txtDriverSearch);
			this->tabPage3->Controls->Add(this->Kierowca);
			this->tabPage3->Controls->Add(this->btnDriverEdit);
			this->tabPage3->Controls->Add(this->gbDrivers);
			this->tabPage3->Controls->Add(this->button2);
			this->tabPage3->Controls->Add(this->dGDrivers);
			this->tabPage3->Controls->Add(this->btnDriverDelete);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Margin = System::Windows::Forms::Padding(2);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(1045, 547);
			this->tabPage3->TabIndex = 3;
			this->tabPage3->Text = L"Kierowcy";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// btnDriverSearch
			// 
			this->btnDriverSearch->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->btnDriverSearch->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDriverSearch->ForeColor = System::Drawing::Color::White;
			this->btnDriverSearch->Location = System::Drawing::Point(397, 88);
			this->btnDriverSearch->Margin = System::Windows::Forms::Padding(2);
			this->btnDriverSearch->Name = L"btnDriverSearch";
			this->btnDriverSearch->Size = System::Drawing::Size(93, 29);
			this->btnDriverSearch->TabIndex = 50;
			this->btnDriverSearch->Text = L"Szukaj";
			this->btnDriverSearch->UseVisualStyleBackColor = false;
			this->btnDriverSearch->Click += gcnew System::EventHandler(this, &Program::btnDriverSearch_Click);
			// 
			// txtDriverSearch
			// 
			this->txtDriverSearch->Location = System::Drawing::Point(201, 93);
			this->txtDriverSearch->Margin = System::Windows::Forms::Padding(2);
			this->txtDriverSearch->Name = L"txtDriverSearch";
			this->txtDriverSearch->Size = System::Drawing::Size(165, 20);
			this->txtDriverSearch->TabIndex = 49;
			// 
			// Kierowca
			// 
			this->Kierowca->AutoSize = true;
			this->Kierowca->Location = System::Drawing::Point(132, 96);
			this->Kierowca->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Kierowca->Name = L"Kierowca";
			this->Kierowca->Size = System::Drawing::Size(54, 13);
			this->Kierowca->TabIndex = 48;
			this->Kierowca->Text = L"Kierowca:";
			// 
			// btnDriverEdit
			// 
			this->btnDriverEdit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->btnDriverEdit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDriverEdit->ForeColor = System::Drawing::Color::White;
			this->btnDriverEdit->Location = System::Drawing::Point(363, 389);
			this->btnDriverEdit->Margin = System::Windows::Forms::Padding(2);
			this->btnDriverEdit->Name = L"btnDriverEdit";
			this->btnDriverEdit->Size = System::Drawing::Size(78, 30);
			this->btnDriverEdit->TabIndex = 47;
			this->btnDriverEdit->Text = L"Edytuj";
			this->btnDriverEdit->UseVisualStyleBackColor = false;
			this->btnDriverEdit->Click += gcnew System::EventHandler(this, &Program::btnDriverEdit_Click);
			// 
			// gbDrivers
			// 
			this->gbDrivers->Controls->Add(this->checkBoxD);
			this->gbDrivers->Controls->Add(this->checkBoxC);
			this->gbDrivers->Controls->Add(this->checkBoxB);
			this->gbDrivers->Controls->Add(this->checkBoxA);
			this->gbDrivers->Controls->Add(this->label20);
			this->gbDrivers->Controls->Add(this->txt_pesel_driver);
			this->gbDrivers->Controls->Add(this->txt_phone_driver);
			this->gbDrivers->Controls->Add(this->label16);
			this->gbDrivers->Controls->Add(this->txt_email_driver);
			this->gbDrivers->Controls->Add(this->label17);
			this->gbDrivers->Controls->Add(this->txt_surname_driver);
			this->gbDrivers->Controls->Add(this->label11);
			this->gbDrivers->Controls->Add(this->txt_name_driver);
			this->gbDrivers->Controls->Add(this->label15);
			this->gbDrivers->Controls->Add(this->label13);
			this->gbDrivers->Controls->Add(this->label14);
			this->gbDrivers->Controls->Add(this->txt_login_driver);
			this->gbDrivers->Location = System::Drawing::Point(76, 137);
			this->gbDrivers->Margin = System::Windows::Forms::Padding(2);
			this->gbDrivers->Name = L"gbDrivers";
			this->gbDrivers->Padding = System::Windows::Forms::Padding(2);
			this->gbDrivers->Size = System::Drawing::Size(404, 233);
			this->gbDrivers->TabIndex = 45;
			this->gbDrivers->TabStop = false;
			this->gbDrivers->Text = L"Dane kierowcy";
			// 
			// checkBoxD
			// 
			this->checkBoxD->AutoSize = true;
			this->checkBoxD->Location = System::Drawing::Point(308, 198);
			this->checkBoxD->Margin = System::Windows::Forms::Padding(2);
			this->checkBoxD->Name = L"checkBoxD";
			this->checkBoxD->Size = System::Drawing::Size(34, 17);
			this->checkBoxD->TabIndex = 48;
			this->checkBoxD->Text = L"D";
			this->checkBoxD->UseVisualStyleBackColor = true;
			// 
			// checkBoxC
			// 
			this->checkBoxC->AutoSize = true;
			this->checkBoxC->Location = System::Drawing::Point(271, 198);
			this->checkBoxC->Margin = System::Windows::Forms::Padding(2);
			this->checkBoxC->Name = L"checkBoxC";
			this->checkBoxC->Size = System::Drawing::Size(33, 17);
			this->checkBoxC->TabIndex = 47;
			this->checkBoxC->Text = L"C";
			this->checkBoxC->UseVisualStyleBackColor = true;
			// 
			// checkBoxB
			// 
			this->checkBoxB->AutoSize = true;
			this->checkBoxB->Location = System::Drawing::Point(234, 198);
			this->checkBoxB->Margin = System::Windows::Forms::Padding(2);
			this->checkBoxB->Name = L"checkBoxB";
			this->checkBoxB->Size = System::Drawing::Size(33, 17);
			this->checkBoxB->TabIndex = 46;
			this->checkBoxB->Text = L"B";
			this->checkBoxB->UseVisualStyleBackColor = true;
			// 
			// checkBoxA
			// 
			this->checkBoxA->AutoSize = true;
			this->checkBoxA->Location = System::Drawing::Point(197, 198);
			this->checkBoxA->Margin = System::Windows::Forms::Padding(2);
			this->checkBoxA->Name = L"checkBoxA";
			this->checkBoxA->Size = System::Drawing::Size(33, 17);
			this->checkBoxA->TabIndex = 45;
			this->checkBoxA->Text = L"A";
			this->checkBoxA->UseVisualStyleBackColor = true;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(76, 37);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(36, 13);
			this->label20->TabIndex = 27;
			this->label20->Text = L"Login:";
			// 
			// txt_pesel_driver
			// 
			this->txt_pesel_driver->Location = System::Drawing::Point(125, 138);
			this->txt_pesel_driver->Name = L"txt_pesel_driver";
			this->txt_pesel_driver->Size = System::Drawing::Size(165, 20);
			this->txt_pesel_driver->TabIndex = 44;
			// 
			// txt_phone_driver
			// 
			this->txt_phone_driver->Location = System::Drawing::Point(125, 164);
			this->txt_phone_driver->Name = L"txt_phone_driver";
			this->txt_phone_driver->Size = System::Drawing::Size(165, 20);
			this->txt_phone_driver->TabIndex = 41;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(17, 199);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(166, 13);
			this->label16->TabIndex = 42;
			this->label16->Text = L"Posiadane kategorie prawa jazdy:";
			// 
			// txt_email_driver
			// 
			this->txt_email_driver->Location = System::Drawing::Point(125, 112);
			this->txt_email_driver->Name = L"txt_email_driver";
			this->txt_email_driver->Size = System::Drawing::Size(165, 20);
			this->txt_email_driver->TabIndex = 38;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(83, 63);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(29, 13);
			this->label17->TabIndex = 30;
			this->label17->Text = L"Imie:";
			// 
			// txt_surname_driver
			// 
			this->txt_surname_driver->Location = System::Drawing::Point(125, 86);
			this->txt_surname_driver->Name = L"txt_surname_driver";
			this->txt_surname_driver->Size = System::Drawing::Size(165, 20);
			this->txt_surname_driver->TabIndex = 37;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(56, 89);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(56, 13);
			this->label11->TabIndex = 31;
			this->label11->Text = L"Nazwisko:";
			this->label11->Click += gcnew System::EventHandler(this, &Program::label11_Click);
			// 
			// txt_name_driver
			// 
			this->txt_name_driver->Location = System::Drawing::Point(125, 60);
			this->txt_name_driver->Name = L"txt_name_driver";
			this->txt_name_driver->Size = System::Drawing::Size(165, 20);
			this->txt_name_driver->TabIndex = 36;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(66, 167);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(46, 13);
			this->label15->TabIndex = 40;
			this->label15->Text = L"Telefon:";
			this->label15->Click += gcnew System::EventHandler(this, &Program::label15_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(76, 141);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(36, 13);
			this->label13->TabIndex = 32;
			this->label13->Text = L"Pesel:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(76, 115);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(35, 13);
			this->label14->TabIndex = 39;
			this->label14->Text = L"Email:";
			// 
			// txt_login_driver
			// 
			this->txt_login_driver->Location = System::Drawing::Point(125, 34);
			this->txt_login_driver->Name = L"txt_login_driver";
			this->txt_login_driver->Size = System::Drawing::Size(165, 20);
			this->txt_login_driver->TabIndex = 33;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(116, 389);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(78, 30);
			this->button2->TabIndex = 46;
			this->button2->Text = L"Dodaj";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Program::button2_Click);
			// 
			// dGDrivers
			// 
			this->dGDrivers->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dGDrivers->Location = System::Drawing::Point(526, 35);
			this->dGDrivers->Margin = System::Windows::Forms::Padding(2);
			this->dGDrivers->Name = L"dGDrivers";
			this->dGDrivers->RowHeadersWidth = 51;
			this->dGDrivers->RowTemplate->Height = 24;
			this->dGDrivers->Size = System::Drawing::Size(489, 486);
			this->dGDrivers->TabIndex = 0;
			this->dGDrivers->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Program::dGDrivers_CellClick);
			// 
			// btnDriverDelete
			// 
			this->btnDriverDelete->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->btnDriverDelete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDriverDelete->ForeColor = System::Drawing::Color::White;
			this->btnDriverDelete->Location = System::Drawing::Point(241, 389);
			this->btnDriverDelete->Margin = System::Windows::Forms::Padding(2);
			this->btnDriverDelete->Name = L"btnDriverDelete";
			this->btnDriverDelete->Size = System::Drawing::Size(78, 30);
			this->btnDriverDelete->TabIndex = 45;
			this->btnDriverDelete->Text = L"Usu�";
			this->btnDriverDelete->UseVisualStyleBackColor = false;
			this->btnDriverDelete->Click += gcnew System::EventHandler(this, &Program::btnDriverDelete_Click);
			// 
			// Program
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1053, 573);
			this->Controls->Add(this->tabControl1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Program";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TaxiApp";
			this->Load += gcnew System::EventHandler(this, &Program::Program_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->gBCostumer->ResumeLayout(false);
			this->gBCostumer->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dGCustomers))->EndInit();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->gbCar->ResumeLayout(false);
			this->gbCar->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dGCars))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->gbDrivers->ResumeLayout(false);
			this->gbDrivers->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dGDrivers))->EndInit();
			this->ResumeLayout(false);

		}


#pragma endregion
		int record_id;
		int recordlicence_id;
		 private: Void clear(Control^ controls)
		 {
			 for each (Control ^ element in controls->Controls)
			 {
				 if (element->GetType() == TextBox::typeid)
					 element->Text = "";
			 }

		 }


		 private: void show_customers()
		 {
			 MySqlConnection^ baseConnection = gcnew MySqlConnection(configuration);
			 MySqlCommand^ query = gcnew MySqlCommand("SELECT tbl_user.user_id, tbl_user.login, tbl_user.email, tbl_customer.name, tbl_customer.surname, tbl_customer.tel_number FROM tbl_user, tbl_customer WHERE tbl_user.user_id=tbl_customer.user_id AND concat(name,  '',surname, login) LIKE '%" + txtCustomerSearch->Text + "%'; ", baseConnection);

			 try
			 {
				 baseConnection->Open();
				 MySqlDataAdapter^ TaxiBase = gcnew MySqlDataAdapter();
				 TaxiBase->SelectCommand = query;
				 DataTable^ Ctabela = gcnew DataTable();
				 TaxiBase->Fill(Ctabela);
				 BindingSource^ sourceTaxi = gcnew BindingSource();
				 sourceTaxi->DataSource = Ctabela;
				 dGCustomers->DataSource = sourceTaxi;
				 baseConnection->Close();
			 }
			 catch (Exception^ komunikat)
			 {
				 MessageBox::Show(komunikat->Message);
			 }


			 dGCustomers->Columns[0]->Visible = false;
		 }


	private: System::Void btnKlientSzukaj_Click(System::Object^ sender, System::EventArgs^ e) {
		show_customers();
	}

	
private: System::Void dGKlienci_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	
}
private: System::Void btnCustomerDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	MySqlConnection^ baseConnection = gcnew MySqlConnection(configuration);
	MySqlCommand^ query = baseConnection->CreateCommand();
	MySqlTransaction^ transaction;
	baseConnection->Open();
	transaction = baseConnection->BeginTransaction(IsolationLevel::ReadCommitted);

	query->Connection = baseConnection;
	query->Transaction = transaction;

	try {

		transaction->Commit();

		if (MessageBox::Show("Czy na pewno usun�� klienta?", "Uwaga!!!", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{
		
				query->CommandText = "DELETE FROM tbl_customer WHERE user_id = " + record_id + " ;";
				query->ExecuteNonQuery();


			}
		query->CommandText = "DELETE FROM tbl_user WHERE user_id = " + record_id + " ;";
		query->ExecuteNonQuery();
		MessageBox::Show("Dane  zosta�y usuni�te");
		show_customers();
		clear(gBCostumer);



	}
	catch (Exception^ komunikat)
	{
		MessageBox::Show(komunikat->Message);
		transaction->Rollback();

	}
	baseConnection->Close();
}
private: System::Void dGCustomers_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	record_id = Convert::ToInt32(dGCustomers->Rows[e->RowIndex]->Cells[0]->Value);
	txt_cust_login->Text = dGCustomers->Rows[e->RowIndex]->Cells["login"]->Value->ToString();
	txt_cust_email->Text = dGCustomers->Rows[e->RowIndex]->Cells["email"]->Value->ToString();
	txt_cust_name->Text = dGCustomers->Rows[e->RowIndex]->Cells["name"]->Value->ToString();
	txt_cust_surname->Text = dGCustomers->Rows[e->RowIndex]->Cells["surname"]->Value->ToString();
	txt_cust_phone->Text = dGCustomers->Rows[e->RowIndex]->Cells["tel_number"]->Value->ToString();



}
private: System::Void btnCustomerAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txt_cust_name->Text->Length < 3 || txt_cust_surname->Text->Length < 3 || txt_cust_email->Text->Length < 3)
	{
		MessageBox::Show("Wprowad� dane poprawnie");
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

		query->CommandText = "INSERT INTO tbl_user SET login='" + txt_cust_login->Text + "', password=md5('" + txt_cust_login->Text + "'), email = '" + txt_cust_email->Text + "', role = 'customer'; ";

		query->ExecuteNonQuery();

		query->CommandText = "INSERT INTO tbl_customer SET  tbl_customer.user_id=last_insert_id(), name='" + txt_cust_name->Text + "', surname ='" + txt_cust_surname->Text + "', tel_number='" + txt_cust_phone->Text + "'";

		query->ExecuteNonQuery();


		transaction->Commit();

		MessageBox::Show("Klient zosta� dodany");

	}


	catch (Exception^ komunikat)
	{
		MessageBox::Show(komunikat->Message);
		transaction->Rollback();

	}
	show_customers();
	clear(gBCostumer);

	baseConnection->Close();


}
private: System::Void btnCustomerEdit_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txt_cust_name->Text->Length < 3 || txt_cust_surname->Text->Length < 3 || txt_cust_email->Text->Length < 3)
	{
		MessageBox::Show("Wprowad� dane poprawnie");
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

		query->CommandText = "UPDATE tbl_user SET login='" + txt_cust_login->Text + "', password=md5('" + txt_cust_login->Text + "'), email = '" + txt_cust_email->Text + "', role = 'customer' WHERE user_id='"+record_id+"'; ";

		query->ExecuteNonQuery();

		query->CommandText = "UPDATE  tbl_customer SET name='" + txt_cust_name->Text + "', surname ='" + txt_cust_surname->Text + "', tel_number='" + txt_cust_phone->Text + "' WHERE user_id='" + record_id + "' ";

		query->ExecuteNonQuery();


		transaction->Commit();

		MessageBox::Show("Klient zosta� edytowany");

	}


	catch (Exception^ komunikat)
	{

		MessageBox::Show(komunikat->Message);
		transaction->Rollback();

	}
	show_customers();
	clear(gBCostumer);
	baseConnection->Close();
}
private: System::Void tabPage2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Program_Load(System::Object^ sender, System::EventArgs^ e) {
	show_customers();
	show_cars();
	show_drivers();
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}

		 private: void show_cars()
		 {
			 MySqlConnection^ baseConnection = gcnew MySqlConnection(configuration);
			 MySqlCommand^ query = gcnew MySqlCommand("SELECT car_id, brand as 'marka', model, reg_number as 'numer rejestracyjny', class as 'klasa' FROM tbl_car WHERE concat(brand, '', model) LIKE '%" + txtCarSearch->Text + "%'; ", baseConnection);

			 try
			 {
				 baseConnection->Open();
				 MySqlDataAdapter^ TaxiBase = gcnew MySqlDataAdapter();
				 TaxiBase->SelectCommand = query;
				 DataTable^ Utabela = gcnew DataTable();
				 TaxiBase->Fill(Utabela);
				 BindingSource^ sourceTaxi = gcnew BindingSource();
				 sourceTaxi->DataSource = Utabela;
				 dGCars->DataSource = sourceTaxi;
				 baseConnection->Close();
			 }
			 catch (Exception^ komunikat)
			 {
				 MessageBox::Show(komunikat->Message);
			 }


			 dGCars->Columns[0]->Visible = false;
		 }



private: System::Void btnCarSearch_Click(System::Object^ sender, System::EventArgs^ e) {
	show_cars();
}
private: System::Void btnCarAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtCarBrand->Text->Length < 3 || txtCarModel->Text->Length < 3)
	{
		MessageBox::Show("Wprowad� dane poprawnie");
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

		query->CommandText = "INSERT INTO tbl_car SET brand='" + txtCarBrand->Text + "', model = '" +txtCarModel->Text + "', reg_number = '"+txtCarRegNumber->Text+"', class = '"+txtCarClass->Text+"'; ";

		query->ExecuteNonQuery();

		


		transaction->Commit();

		MessageBox::Show("Samoch�d zosta� dodany");

	}


	catch (Exception^ komunikat)
	{
		MessageBox::Show(komunikat->Message);
		transaction->Rollback();

	}
	show_cars();
	clear(gbCar);

	baseConnection->Close();
}
private: System::Void dGCars_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	record_id = Convert::ToInt32(dGCars->Rows[e->RowIndex]->Cells[0]->Value);
	txtCarBrand->Text = dGCars->Rows[e->RowIndex]->Cells[1]->Value->ToString();
	txtCarModel->Text = dGCars->Rows[e->RowIndex]->Cells[2]->Value->ToString();
	txtCarRegNumber->Text = dGCars->Rows[e->RowIndex]->Cells[3]->Value->ToString();
	txtCarClass->Text = dGCars->Rows[e->RowIndex]->Cells[4]->Value->ToString();

}
private: System::Void btnCarDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	MySqlConnection^ baseConnection = gcnew MySqlConnection(configuration);
	MySqlCommand^ query = baseConnection->CreateCommand();
	MySqlTransaction^ transaction;
	baseConnection->Open();
	transaction = baseConnection->BeginTransaction(IsolationLevel::ReadCommitted);

	query->Connection = baseConnection;
	query->Transaction = transaction;

	try {

		transaction->Commit();

		if (MessageBox::Show("Czy na pewno usun�� samoch�d?", "Uwaga!!!", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{

			query->CommandText = "DELETE FROM tbl_car WHERE car_id = " + record_id + " ;";
			query->ExecuteNonQuery();


		}
		
		MessageBox::Show("Dane samochodu zosta�y usuni�te");
		show_cars();
		clear(gbCar);



	}
	catch (Exception^ komunikat)
	{
		MessageBox::Show(komunikat->Message);
		transaction->Rollback();

	}
	baseConnection->Close();
}
private: System::Void btnCarEdit_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtCarBrand->Text->Length < 3 || txtCarModel->Text->Length < 3)
	{
		MessageBox::Show("Wprowad� dane poprawnie");
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

		query->CommandText = "UPDATE tbl_car SET brand='" + txtCarBrand->Text + "', model = '" + txtCarModel->Text + "', reg_number = '" + txtCarRegNumber->Text + "', class = '" + txtCarClass->Text + "' WHERE car_id='"+record_id+"'; ";

		query->ExecuteNonQuery();




		transaction->Commit();

		MessageBox::Show("Samoch�d zosta� edytowany");

	}


	catch (Exception^ komunikat)
	{
		MessageBox::Show(komunikat->Message);
		transaction->Rollback();

	}
	show_cars();
	clear(gbCar);

	baseConnection->Close();
}
	   int cat_a;
	   int cat_b;
	   int cat_c;
	   int cat_d;

	   private: Void category()
	   {

		   if (checkBoxA->Checked)
		   {
			   cat_a = 1;
		   }
		   else
		   {
			   cat_a = 0;
		   }
		   if (checkBoxB->Checked)
		   {
			   cat_b = 1;
		   }
		   else
		   {
			   cat_b = 0;
		   }
		   if (checkBoxC->Checked)
		   {
			   cat_c = 1;
		   }
		   else
		   {
			   cat_c = 0;
		   }
		   if (checkBoxD->Checked)
		   {
			   cat_d = 1;
		   }
		   else
		   {
			   cat_d = 0;
		   }
	   }

		private: void show_drivers()
		{
			MySqlConnection^ baseConnection = gcnew MySqlConnection(configuration);
			MySqlCommand^ query = gcnew MySqlCommand("SELECT tbl_user.user_id, tbl_user.login, tbl_user.email, tbl_driver.name, tbl_driver.surname, tbl_driver.pesel, tbl_driver.tel_number, tbl_licence.cat_a, tbl_licence.cat_b, tbl_licence.cat_c,tbl_licence.cat_d, tbl_driver.licence_id FROM tbl_user, tbl_driver, tbl_licence WHERE tbl_user.user_id=tbl_driver.user_id AND tbl_licence.licence_id = tbl_driver.licence_id AND concat(name,  '',surname, login) LIKE '%" + txtDriverSearch->Text + "%'; ", baseConnection);

			try
			{
				baseConnection->Open();
				MySqlDataAdapter^ TaxiBase = gcnew MySqlDataAdapter();
				TaxiBase->SelectCommand = query;
				DataTable^ Drivertabela = gcnew DataTable();
				TaxiBase->Fill(Drivertabela);
				BindingSource^ sourceTaxi = gcnew BindingSource();
				sourceTaxi->DataSource = Drivertabela;
				dGDrivers->DataSource = sourceTaxi;
				baseConnection->Close();
			}
			catch (Exception^ komunikat)
			{
				MessageBox::Show(komunikat->Message);
			}


			dGDrivers->Columns[0]->Visible = false;
			dGDrivers->Columns[7]->Visible = false;
			dGDrivers->Columns[8]->Visible = false;
			dGDrivers->Columns[9]->Visible = false;
			dGDrivers->Columns[10]->Visible = false;
			dGDrivers->Columns[11]->Visible = false;





		}

private: System::Void btnDriverSearch_Click(System::Object^ sender, System::EventArgs^ e) {
	show_drivers();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txt_name_driver->Text->Length < 3 || txt_surname_driver->Text->Length < 3 || txt_email_driver->Text->Length < 3)
	{
		MessageBox::Show("Wprowad� dane poprawnie");
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
		query->CommandText = "INSERT INTO tbl_user SET login='" + txt_login_driver->Text + "', password=md5('" + txt_login_driver->Text + "'), email = '" + txt_email_driver->Text + "', role = 'driver'; ";
		query->ExecuteNonQuery();

		int idUser = (int)query->LastInsertedId;

		//Odczyt zaznaczonych kategorii prawa jazdy
		category();

		query->CommandText = "INSERT INTO tbl_licence (cat_a,cat_b,cat_c,cat_d) VALUES (" + cat_a + " , " + cat_b + ", " + cat_c + ", " + cat_d + ")";
		query->ExecuteNonQuery();

		query->CommandText = "INSERT INTO tbl_driver SET licence_id=last_insert_id(), name='" + txt_name_driver->Text + "', surname ='" + txt_surname_driver->Text + "', pesel=" + txt_pesel_driver->Text + ", tel_number = '" + txt_phone_driver->Text + "', busy = 1, user_id = " + idUser + "";
		query->ExecuteNonQuery();

		transaction->Commit();

		MessageBox::Show("Kierowca zosta� dodany");

	}

	catch (Exception^ komunikat)
	{
		MessageBox::Show(komunikat->Message);
		transaction->Rollback();

	}
	show_drivers();
	clear(gbDrivers);

	baseConnection->Close();

}
private: System::Void dGDrivers_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	record_id = Convert::ToInt32(dGDrivers->Rows[e->RowIndex]->Cells[0]->Value);
	txt_login_driver->Text = dGDrivers->Rows[e->RowIndex]->Cells["login"]->Value->ToString();
	txt_email_driver->Text = dGDrivers->Rows[e->RowIndex]->Cells["email"]->Value->ToString();
	txt_name_driver->Text = dGDrivers->Rows[e->RowIndex]->Cells["name"]->Value->ToString();
	txt_surname_driver->Text = dGDrivers->Rows[e->RowIndex]->Cells["surname"]->Value->ToString();
	txt_phone_driver->Text = dGDrivers->Rows[e->RowIndex]->Cells["tel_number"]->Value->ToString();
	txt_pesel_driver->Text = dGDrivers->Rows[e->RowIndex]->Cells["pesel"]->Value->ToString();
	checkBoxA->Checked = Convert::ToBoolean(dGDrivers->Rows[e->RowIndex]->Cells["cat_a"]->Value);
	checkBoxB->Checked = Convert::ToBoolean(dGDrivers->Rows[e->RowIndex]->Cells["cat_b"]->Value);
	checkBoxC->Checked = Convert::ToBoolean(dGDrivers->Rows[e->RowIndex]->Cells["cat_c"]->Value);
	checkBoxD->Checked = Convert::ToBoolean(dGDrivers->Rows[e->RowIndex]->Cells["cat_d"]->Value);
	recordlicence_id = Convert::ToInt32(dGDrivers->Rows[e->RowIndex]->Cells["licence_id"]->Value);




}
private: System::Void btnDriverDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	MySqlConnection^ baseConnection = gcnew MySqlConnection(configuration);
	MySqlCommand^ query = baseConnection->CreateCommand();
	MySqlTransaction^ transaction;
	baseConnection->Open();
	transaction = baseConnection->BeginTransaction(IsolationLevel::ReadCommitted);

	query->Connection = baseConnection;
	query->Transaction = transaction;

	try {

		transaction->Commit();

		if (MessageBox::Show("Czy na pewno usun�� kierowce?", "Uwaga!!!", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{

			

			query->CommandText = "DELETE FROM tbl_driver WHERE user_id = " + record_id + " ;";
			query->ExecuteNonQuery();

			query->CommandText = "DELETE FROM tbl_licence WHERE licence_id = " + recordlicence_id + ";";
			query->ExecuteNonQuery();


		}
		query->CommandText = "DELETE FROM tbl_user WHERE user_id = " + record_id + " ;";
		query->ExecuteNonQuery();
		MessageBox::Show("Dane  zosta�y usuni�te");
		show_drivers();
		clear(gbDrivers);



	}
	catch (Exception^ komunikat)
	{
		MessageBox::Show(komunikat->Message);
		transaction->Rollback();

	}
	baseConnection->Close();
}
private: System::Void btnDriverEdit_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txt_name_driver->Text->Length < 3 || txt_surname_driver->Text->Length < 3 || txt_email_driver->Text->Length < 3)
	{
		MessageBox::Show("Wprowad� dane poprawnie");
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
		query->CommandText = "UPDATE tbl_user SET login='" + txt_login_driver->Text + "', email = '" + txt_email_driver->Text + "' WHERE user_id='"+record_id+"'; ";
		query->ExecuteNonQuery();


		category();


		query->CommandText = "UPDATE tbl_licence SET cat_a=" + cat_a + ", cat_b= " + cat_b + ",cat_c=" + cat_c + ",cat_d = " + cat_d + " WHERE licence_id='" + recordlicence_id + "'";
		query->ExecuteNonQuery();


		query->CommandText = "UPDATE  tbl_driver SET name='" + txt_name_driver->Text + "', surname ='" + txt_surname_driver->Text + "', pesel=" + txt_pesel_driver->Text + ", tel_number = '" + txt_phone_driver->Text + "' WHERE user_id='" + record_id + "'";
		query->ExecuteNonQuery();

		transaction->Commit();

		MessageBox::Show("Kierowca zosta� edytowany");

	}

	catch (Exception^ komunikat)
	{
		MessageBox::Show(komunikat->Message);
		transaction->Rollback();

	}
	clear(gbDrivers);
	show_drivers();
	baseConnection->Close();
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
