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
		/// Wyczyœæ wszystkie u¿ywane zasoby.
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
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
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
			this->tabControl1->Location = System::Drawing::Point(30, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1349, 681);
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
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1341, 652);
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
			this->gBCostumer->Location = System::Drawing::Point(17, 66);
			this->gBCostumer->Name = L"gBCostumer";
			this->gBCostumer->Size = System::Drawing::Size(306, 251);
			this->gBCostumer->TabIndex = 30;
			this->gBCostumer->TabStop = false;
			this->gBCostumer->Text = L"Dane klienta";
			// 
			// txt_cust_login
			// 
			this->txt_cust_login->Location = System::Drawing::Point(113, 34);
			this->txt_cust_login->Margin = System::Windows::Forms::Padding(4);
			this->txt_cust_login->Name = L"txt_cust_login";
			this->txt_cust_login->Size = System::Drawing::Size(132, 22);
			this->txt_cust_login->TabIndex = 14;
			// 
			// txt_cust_name
			// 
			this->txt_cust_name->Location = System::Drawing::Point(113, 78);
			this->txt_cust_name->Margin = System::Windows::Forms::Padding(4);
			this->txt_cust_name->Name = L"txt_cust_name";
			this->txt_cust_name->Size = System::Drawing::Size(132, 22);
			this->txt_cust_name->TabIndex = 17;
			// 
			// txt_cust_surname
			// 
			this->txt_cust_surname->Location = System::Drawing::Point(113, 111);
			this->txt_cust_surname->Margin = System::Windows::Forms::Padding(4);
			this->txt_cust_surname->Name = L"txt_cust_surname";
			this->txt_cust_surname->Size = System::Drawing::Size(132, 22);
			this->txt_cust_surname->TabIndex = 18;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(34, 111);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(65, 16);
			this->label7->TabIndex = 27;
			this->label7->Text = L"Nazwisko";
			// 
			// txt_cust_email
			// 
			this->txt_cust_email->Location = System::Drawing::Point(113, 144);
			this->txt_cust_email->Margin = System::Windows::Forms::Padding(4);
			this->txt_cust_email->Name = L"txt_cust_email";
			this->txt_cust_email->Size = System::Drawing::Size(132, 22);
			this->txt_cust_email->TabIndex = 19;
			// 
			// txt_cust_phone
			// 
			this->txt_cust_phone->Location = System::Drawing::Point(113, 178);
			this->txt_cust_phone->Margin = System::Windows::Forms::Padding(4);
			this->txt_cust_phone->Name = L"txt_cust_phone";
			this->txt_cust_phone->Size = System::Drawing::Size(132, 22);
			this->txt_cust_phone->TabIndex = 26;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(61, 32);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(40, 16);
			this->label8->TabIndex = 20;
			this->label8->Text = L"Login";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(70, 78);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(32, 16);
			this->label6->TabIndex = 25;
			this->label6->Text = L"Imiê";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(62, 144);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(41, 16);
			this->label4->TabIndex = 23;
			this->label4->Text = L"Email";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(0, 178);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(97, 16);
			this->label5->TabIndex = 24;
			this->label5->Text = L"Numer telefonu";
			// 
			// btnCustomerEdit
			// 
			this->btnCustomerEdit->Location = System::Drawing::Point(245, 323);
			this->btnCustomerEdit->Name = L"btnCustomerEdit";
			this->btnCustomerEdit->Size = System::Drawing::Size(97, 44);
			this->btnCustomerEdit->TabIndex = 29;
			this->btnCustomerEdit->Text = L"Edytuj";
			this->btnCustomerEdit->UseVisualStyleBackColor = true;
			this->btnCustomerEdit->Click += gcnew System::EventHandler(this, &Program::btnCustomerEdit_Click);
			// 
			// btnCustomerAdd
			// 
			this->btnCustomerAdd->Location = System::Drawing::Point(29, 330);
			this->btnCustomerAdd->Name = L"btnCustomerAdd";
			this->btnCustomerAdd->Size = System::Drawing::Size(75, 37);
			this->btnCustomerAdd->TabIndex = 28;
			this->btnCustomerAdd->Text = L"Dodaj";
			this->btnCustomerAdd->UseVisualStyleBackColor = true;
			this->btnCustomerAdd->Click += gcnew System::EventHandler(this, &Program::btnCustomerAdd_Click);
			// 
			// btnCustomerDelete
			// 
			this->btnCustomerDelete->Location = System::Drawing::Point(139, 323);
			this->btnCustomerDelete->Name = L"btnCustomerDelete";
			this->btnCustomerDelete->Size = System::Drawing::Size(75, 44);
			this->btnCustomerDelete->TabIndex = 4;
			this->btnCustomerDelete->Text = L"Usuñ";
			this->btnCustomerDelete->UseVisualStyleBackColor = true;
			this->btnCustomerDelete->Click += gcnew System::EventHandler(this, &Program::btnCustomerDelete_Click);
			// 
			// btnKlientSzukaj
			// 
			this->btnKlientSzukaj->Location = System::Drawing::Point(267, 27);
			this->btnKlientSzukaj->Name = L"btnKlientSzukaj";
			this->btnKlientSzukaj->Size = System::Drawing::Size(75, 23);
			this->btnKlientSzukaj->TabIndex = 3;
			this->btnKlientSzukaj->Text = L"Szukaj";
			this->btnKlientSzukaj->UseVisualStyleBackColor = true;
			this->btnKlientSzukaj->Click += gcnew System::EventHandler(this, &Program::btnKlientSzukaj_Click);
			// 
			// txtCustomerSearch
			// 
			this->txtCustomerSearch->Location = System::Drawing::Point(130, 27);
			this->txtCustomerSearch->Name = L"txtCustomerSearch";
			this->txtCustomerSearch->Size = System::Drawing::Size(100, 22);
			this->txtCustomerSearch->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(55, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(39, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Klient";
			// 
			// dGCustomers
			// 
			this->dGCustomers->AllowUserToAddRows = false;
			this->dGCustomers->AllowUserToOrderColumns = true;
			this->dGCustomers->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dGCustomers->Location = System::Drawing::Point(372, 27);
			this->dGCustomers->Name = L"dGCustomers";
			this->dGCustomers->RowHeadersWidth = 51;
			this->dGCustomers->RowTemplate->Height = 24;
			this->dGCustomers->Size = System::Drawing::Size(572, 387);
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
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Size = System::Drawing::Size(1341, 652);
			this->tabPage1->TabIndex = 2;
			this->tabPage1->Text = L"Samochody";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// btnCarEdit
			// 
			this->btnCarEdit->Location = System::Drawing::Point(291, 325);
			this->btnCarEdit->Name = L"btnCarEdit";
			this->btnCarEdit->Size = System::Drawing::Size(88, 51);
			this->btnCarEdit->TabIndex = 39;
			this->btnCarEdit->Text = L"Edytuj";
			this->btnCarEdit->UseVisualStyleBackColor = true;
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
			this->gbCar->Location = System::Drawing::Point(14, 64);
			this->gbCar->Name = L"gbCar";
			this->gbCar->Size = System::Drawing::Size(365, 251);
			this->gbCar->TabIndex = 38;
			this->gbCar->TabStop = false;
			this->gbCar->Text = L"Dane samochodu";
			// 
			// txtCarBrand
			// 
			this->txtCarBrand->Location = System::Drawing::Point(172, 29);
			this->txtCarBrand->Margin = System::Windows::Forms::Padding(4);
			this->txtCarBrand->Name = L"txtCarBrand";
			this->txtCarBrand->Size = System::Drawing::Size(132, 22);
			this->txtCarBrand->TabIndex = 14;
			// 
			// txtCarModel
			// 
			this->txtCarModel->Location = System::Drawing::Point(172, 78);
			this->txtCarModel->Margin = System::Windows::Forms::Padding(4);
			this->txtCarModel->Name = L"txtCarModel";
			this->txtCarModel->Size = System::Drawing::Size(132, 22);
			this->txtCarModel->TabIndex = 17;
			// 
			// txtCarRegNumber
			// 
			this->txtCarRegNumber->Location = System::Drawing::Point(172, 111);
			this->txtCarRegNumber->Margin = System::Windows::Forms::Padding(4);
			this->txtCarRegNumber->Name = L"txtCarRegNumber";
			this->txtCarRegNumber->Size = System::Drawing::Size(132, 22);
			this->txtCarRegNumber->TabIndex = 18;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(34, 111);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(126, 16);
			this->label2->TabIndex = 27;
			this->label2->Text = L"Numer rejestracyjny";
			// 
			// txtCarClass
			// 
			this->txtCarClass->Location = System::Drawing::Point(172, 141);
			this->txtCarClass->Margin = System::Windows::Forms::Padding(4);
			this->txtCarClass->Name = L"txtCarClass";
			this->txtCarClass->Size = System::Drawing::Size(132, 22);
			this->txtCarClass->TabIndex = 19;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(34, 29);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 16);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Marka";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(34, 81);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(45, 16);
			this->label9->TabIndex = 25;
			this->label9->Text = L"Model";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(34, 144);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(41, 16);
			this->label10->TabIndex = 23;
			this->label10->Text = L"Klasa";
			this->label10->Click += gcnew System::EventHandler(this, &Program::label10_Click);
			// 
			// btnCarAdd
			// 
			this->btnCarAdd->Location = System::Drawing::Point(85, 328);
			this->btnCarAdd->Name = L"btnCarAdd";
			this->btnCarAdd->Size = System::Drawing::Size(75, 37);
			this->btnCarAdd->TabIndex = 36;
			this->btnCarAdd->Text = L"Dodaj";
			this->btnCarAdd->UseVisualStyleBackColor = true;
			this->btnCarAdd->Click += gcnew System::EventHandler(this, &Program::btnCarAdd_Click);
			// 
			// btnCarDelete
			// 
			this->btnCarDelete->Location = System::Drawing::Point(186, 328);
			this->btnCarDelete->Name = L"btnCarDelete";
			this->btnCarDelete->Size = System::Drawing::Size(75, 44);
			this->btnCarDelete->TabIndex = 35;
			this->btnCarDelete->Text = L"Usuñ";
			this->btnCarDelete->UseVisualStyleBackColor = true;
			this->btnCarDelete->Click += gcnew System::EventHandler(this, &Program::btnCarDelete_Click);
			// 
			// btnCarSearch
			// 
			this->btnCarSearch->Location = System::Drawing::Point(323, 25);
			this->btnCarSearch->Name = L"btnCarSearch";
			this->btnCarSearch->Size = System::Drawing::Size(75, 23);
			this->btnCarSearch->TabIndex = 34;
			this->btnCarSearch->Text = L"Szukaj";
			this->btnCarSearch->UseVisualStyleBackColor = true;
			this->btnCarSearch->Click += gcnew System::EventHandler(this, &Program::btnCarSearch_Click);
			// 
			// txtCarSearch
			// 
			this->txtCarSearch->Location = System::Drawing::Point(186, 25);
			this->txtCarSearch->Name = L"txtCarSearch";
			this->txtCarSearch->Size = System::Drawing::Size(100, 22);
			this->txtCarSearch->TabIndex = 33;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(111, 28);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(73, 16);
			this->label12->TabIndex = 32;
			this->label12->Text = L"Samochód";
			// 
			// dGCars
			// 
			this->dGCars->AllowUserToAddRows = false;
			this->dGCars->AllowUserToOrderColumns = true;
			this->dGCars->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dGCars->Location = System::Drawing::Point(428, 51);
			this->dGCars->Name = L"dGCars";
			this->dGCars->RowHeadersWidth = 51;
			this->dGCars->RowTemplate->Height = 24;
			this->dGCars->Size = System::Drawing::Size(572, 361);
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
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(1341, 652);
			this->tabPage3->TabIndex = 3;
			this->tabPage3->Text = L"Kierowcy";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// btnDriverSearch
			// 
			this->btnDriverSearch->Location = System::Drawing::Point(381, 51);
			this->btnDriverSearch->Name = L"btnDriverSearch";
			this->btnDriverSearch->Size = System::Drawing::Size(75, 23);
			this->btnDriverSearch->TabIndex = 50;
			this->btnDriverSearch->Text = L"Szukaj";
			this->btnDriverSearch->UseVisualStyleBackColor = true;
			this->btnDriverSearch->Click += gcnew System::EventHandler(this, &Program::btnDriverSearch_Click);
			// 
			// txtDriverSearch
			// 
			this->txtDriverSearch->Location = System::Drawing::Point(244, 51);
			this->txtDriverSearch->Name = L"txtDriverSearch";
			this->txtDriverSearch->Size = System::Drawing::Size(100, 22);
			this->txtDriverSearch->TabIndex = 49;
			// 
			// Kierowca
			// 
			this->Kierowca->AutoSize = true;
			this->Kierowca->Location = System::Drawing::Point(169, 54);
			this->Kierowca->Name = L"Kierowca";
			this->Kierowca->Size = System::Drawing::Size(73, 16);
			this->Kierowca->TabIndex = 48;
			this->Kierowca->Text = L"Samochód";
			// 
			// btnDriverEdit
			// 
			this->btnDriverEdit->Location = System::Drawing::Point(273, 512);
			this->btnDriverEdit->Name = L"btnDriverEdit";
			this->btnDriverEdit->Size = System::Drawing::Size(88, 51);
			this->btnDriverEdit->TabIndex = 47;
			this->btnDriverEdit->Text = L"Edytuj";
			this->btnDriverEdit->UseVisualStyleBackColor = true;
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
			this->gbDrivers->Location = System::Drawing::Point(64, 98);
			this->gbDrivers->Name = L"gbDrivers";
			this->gbDrivers->Size = System::Drawing::Size(442, 391);
			this->gbDrivers->TabIndex = 45;
			this->gbDrivers->TabStop = false;
			this->gbDrivers->Text = L"groupBox1";
			// 
			// checkBoxD
			// 
			this->checkBoxD->AutoSize = true;
			this->checkBoxD->Location = System::Drawing::Point(239, 342);
			this->checkBoxD->Name = L"checkBoxD";
			this->checkBoxD->Size = System::Drawing::Size(100, 20);
			this->checkBoxD->TabIndex = 48;
			this->checkBoxD->Text = L"Kategoria D";
			this->checkBoxD->UseVisualStyleBackColor = true;
			// 
			// checkBoxC
			// 
			this->checkBoxC->AutoSize = true;
			this->checkBoxC->Location = System::Drawing::Point(239, 309);
			this->checkBoxC->Name = L"checkBoxC";
			this->checkBoxC->Size = System::Drawing::Size(99, 20);
			this->checkBoxC->TabIndex = 47;
			this->checkBoxC->Text = L"Kategoria C";
			this->checkBoxC->UseVisualStyleBackColor = true;
			// 
			// checkBoxB
			// 
			this->checkBoxB->AutoSize = true;
			this->checkBoxB->Location = System::Drawing::Point(239, 283);
			this->checkBoxB->Name = L"checkBoxB";
			this->checkBoxB->Size = System::Drawing::Size(99, 20);
			this->checkBoxB->TabIndex = 46;
			this->checkBoxB->Text = L"Kategoria B";
			this->checkBoxB->UseVisualStyleBackColor = true;
			// 
			// checkBoxA
			// 
			this->checkBoxA->AutoSize = true;
			this->checkBoxA->Location = System::Drawing::Point(239, 257);
			this->checkBoxA->Name = L"checkBoxA";
			this->checkBoxA->Size = System::Drawing::Size(99, 20);
			this->checkBoxA->TabIndex = 45;
			this->checkBoxA->Text = L"Kategoria A";
			this->checkBoxA->UseVisualStyleBackColor = true;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(102, 48);
			this->label20->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(43, 16);
			this->label20->TabIndex = 27;
			this->label20->Text = L"Login:";
			// 
			// txt_pesel_driver
			// 
			this->txt_pesel_driver->Location = System::Drawing::Point(212, 195);
			this->txt_pesel_driver->Margin = System::Windows::Forms::Padding(4);
			this->txt_pesel_driver->Name = L"txt_pesel_driver";
			this->txt_pesel_driver->Size = System::Drawing::Size(132, 22);
			this->txt_pesel_driver->TabIndex = 44;
			// 
			// txt_phone_driver
			// 
			this->txt_phone_driver->Location = System::Drawing::Point(212, 228);
			this->txt_phone_driver->Margin = System::Windows::Forms::Padding(4);
			this->txt_phone_driver->Name = L"txt_phone_driver";
			this->txt_phone_driver->Size = System::Drawing::Size(132, 22);
			this->txt_phone_driver->TabIndex = 41;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(21, 302);
			this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(211, 16);
			this->label16->TabIndex = 42;
			this->label16->Text = L"Posiadane kategorie prawa jazdy:";
			// 
			// txt_email_driver
			// 
			this->txt_email_driver->Location = System::Drawing::Point(212, 164);
			this->txt_email_driver->Margin = System::Windows::Forms::Padding(4);
			this->txt_email_driver->Name = L"txt_email_driver";
			this->txt_email_driver->Size = System::Drawing::Size(132, 22);
			this->txt_email_driver->TabIndex = 38;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(102, 86);
			this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(35, 16);
			this->label17->TabIndex = 30;
			this->label17->Text = L"Imie:";
			// 
			// txt_surname_driver
			// 
			this->txt_surname_driver->Location = System::Drawing::Point(209, 129);
			this->txt_surname_driver->Margin = System::Windows::Forms::Padding(4);
			this->txt_surname_driver->Name = L"txt_surname_driver";
			this->txt_surname_driver->Size = System::Drawing::Size(132, 22);
			this->txt_surname_driver->TabIndex = 37;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(105, 132);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(68, 16);
			this->label11->TabIndex = 31;
			this->label11->Text = L"Nazwisko:";
			// 
			// txt_name_driver
			// 
			this->txt_name_driver->Location = System::Drawing::Point(209, 86);
			this->txt_name_driver->Margin = System::Windows::Forms::Padding(4);
			this->txt_name_driver->Name = L"txt_name_driver";
			this->txt_name_driver->Size = System::Drawing::Size(132, 22);
			this->txt_name_driver->TabIndex = 36;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(95, 233);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(56, 16);
			this->label15->TabIndex = 40;
			this->label15->Text = L"Telefon:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(105, 201);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(42, 16);
			this->label13->TabIndex = 32;
			this->label13->Text = L"Pesel";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(107, 170);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(44, 16);
			this->label14->TabIndex = 39;
			this->label14->Text = L"Email:";
			// 
			// txt_login_driver
			// 
			this->txt_login_driver->Location = System::Drawing::Point(209, 45);
			this->txt_login_driver->Margin = System::Windows::Forms::Padding(4);
			this->txt_login_driver->Name = L"txt_login_driver";
			this->txt_login_driver->Size = System::Drawing::Size(132, 22);
			this->txt_login_driver->TabIndex = 33;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(169, 506);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 65);
			this->button2->TabIndex = 46;
			this->button2->Text = L"Dodaj";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Program::button2_Click);
			// 
			// dGDrivers
			// 
			this->dGDrivers->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dGDrivers->Location = System::Drawing::Point(528, 72);
			this->dGDrivers->Name = L"dGDrivers";
			this->dGDrivers->RowHeadersWidth = 51;
			this->dGDrivers->RowTemplate->Height = 24;
			this->dGDrivers->Size = System::Drawing::Size(770, 388);
			this->dGDrivers->TabIndex = 0;
			this->dGDrivers->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Program::dGDrivers_CellClick);
			// 
			// btnDriverDelete
			// 
			this->btnDriverDelete->Location = System::Drawing::Point(390, 515);
			this->btnDriverDelete->Name = L"btnDriverDelete";
			this->btnDriverDelete->Size = System::Drawing::Size(75, 44);
			this->btnDriverDelete->TabIndex = 45;
			this->btnDriverDelete->Text = L"Usuñ";
			this->btnDriverDelete->UseVisualStyleBackColor = true;
			this->btnDriverDelete->Click += gcnew System::EventHandler(this, &Program::btnDriverDelete_Click);
			// 
			// Program
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1404, 705);
			this->Controls->Add(this->tabControl1);
			this->Name = L"Program";
			this->Text = L"Program";
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

		if (MessageBox::Show("Czy na pewno usun¹æ klienta?", "Uwaga!!!", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{
		
				query->CommandText = "DELETE FROM tbl_customer WHERE user_id = " + record_id + " ;";
				query->ExecuteNonQuery();


			}
		query->CommandText = "DELETE FROM tbl_user WHERE user_id = " + record_id + " ;";
		query->ExecuteNonQuery();
		MessageBox::Show("Dane  zosta³y usuniête");
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
		MessageBox::Show("WprowadŸ dane poprawnie");
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

		MessageBox::Show("Klient zosta³ dodany");

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
		MessageBox::Show("WprowadŸ dane poprawnie");
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

		MessageBox::Show("Klient zosta³ edytowany");

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
		MessageBox::Show("WprowadŸ dane poprawnie");
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

		MessageBox::Show("Samochód zosta³ dodany");

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

		if (MessageBox::Show("Czy na pewno usun¹æ samochód?", "Uwaga!!!", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{

			query->CommandText = "DELETE FROM tbl_car WHERE car_id = " + record_id + " ;";
			query->ExecuteNonQuery();


		}
		
		MessageBox::Show("Dane samochodu zosta³y usuniête");
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
		MessageBox::Show("WprowadŸ dane poprawnie");
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

		MessageBox::Show("Samochód zosta³ edytowany");

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
		MessageBox::Show("WprowadŸ dane poprawnie");
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

		MessageBox::Show("Kierowca zosta³ dodany");

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

		if (MessageBox::Show("Czy na pewno usun¹æ kierowce?", "Uwaga!!!", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{

			

			query->CommandText = "DELETE FROM tbl_driver WHERE user_id = " + record_id + " ;";
			query->ExecuteNonQuery();

			query->CommandText = "DELETE FROM tbl_licence WHERE licence_id = " + recordlicence_id + ";";
			query->ExecuteNonQuery();


		}
		query->CommandText = "DELETE FROM tbl_user WHERE user_id = " + record_id + " ;";
		query->ExecuteNonQuery();
		MessageBox::Show("Dane  zosta³y usuniête");
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
		MessageBox::Show("WprowadŸ dane poprawnie");
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

		MessageBox::Show("Kierowca zosta³ edytowany");

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
};
}
