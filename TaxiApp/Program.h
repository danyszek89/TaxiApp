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
			this->tabControl1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->gBCostumer->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dGCustomers))->BeginInit();
			this->tabPage1->SuspendLayout();
			this->gbCar->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dGCars))->BeginInit();
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
			this->tabControl1->Size = System::Drawing::Size(1081, 465);
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
			this->tabPage2->Size = System::Drawing::Size(1073, 436);
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
			this->label6->Text = L"Imi�";
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
			this->btnCustomerDelete->Text = L"Usu�";
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
			this->tabPage1->Controls->Add(this->gbCar);
			this->tabPage1->Controls->Add(this->btnCarAdd);
			this->tabPage1->Controls->Add(this->btnCarDelete);
			this->tabPage1->Controls->Add(this->btnCarSearch);
			this->tabPage1->Controls->Add(this->txtCarSearch);
			this->tabPage1->Controls->Add(this->label12);
			this->tabPage1->Controls->Add(this->dGCars);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Size = System::Drawing::Size(1073, 436);
			this->tabPage1->TabIndex = 2;
			this->tabPage1->Text = L"Samochody";
			this->tabPage1->UseVisualStyleBackColor = true;
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
			this->btnCarDelete->Location = System::Drawing::Point(224, 321);
			this->btnCarDelete->Name = L"btnCarDelete";
			this->btnCarDelete->Size = System::Drawing::Size(75, 44);
			this->btnCarDelete->TabIndex = 35;
			this->btnCarDelete->Text = L"Usu�";
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
			this->label12->Size = System::Drawing::Size(28, 16);
			this->label12->TabIndex = 32;
			this->label12->Text = L"Car";
			// 
			// dGCars
			// 
			this->dGCars->AllowUserToAddRows = false;
			this->dGCars->AllowUserToOrderColumns = true;
			this->dGCars->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dGCars->Location = System::Drawing::Point(428, 25);
			this->dGCars->Name = L"dGCars";
			this->dGCars->RowHeadersWidth = 51;
			this->dGCars->RowTemplate->Height = 24;
			this->dGCars->Size = System::Drawing::Size(572, 387);
			this->dGCars->TabIndex = 31;
			this->dGCars->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Program::dGCars_CellClick);
			// 
			// tabPage3
			// 
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(1073, 436);
			this->tabPage3->TabIndex = 3;
			this->tabPage3->Text = L"tabPage3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// Program
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1195, 518);
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
			this->ResumeLayout(false);

		}


#pragma endregion
		int record_id;
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
				 DataTable^ Utabela = gcnew DataTable();
				 TaxiBase->Fill(Utabela);
				 BindingSource^ sourceTaxi = gcnew BindingSource();
				 sourceTaxi->DataSource = Utabela;
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

		if (MessageBox::Show("Czy na pewno usun�� u�ytkownika?", "Uwaga!!!", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
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
};
}
