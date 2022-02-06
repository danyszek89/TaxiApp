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
	/// Podsumowanie informacji o DriverProgram
	/// </summary>
	public ref class DriverProgram : public System::Windows::Forms::Form
	{
	public:
		int id_driver;
		int id_user;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Button^ btnChangePassword;
	private: System::Windows::Forms::TextBox^ txtRepeatPassword;
	private: System::Windows::Forms::TextBox^ txtNewPassword;
	private: System::Windows::Forms::TextBox^ txtOldPassword;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::DataGridView^ dGMyTrips;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ btnCalculate;
	private: System::Windows::Forms::TextBox^ txtCostSum;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtKmSum;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtCount;
	private: System::Windows::Forms::Button^ btnMonth;
	private: System::Windows::Forms::Button^ btnWeek;
	private: System::Windows::Forms::Button^ btnYear;


	private: System::Windows::Forms::Label^ label17;

	public:
		String^ configuration = L"datasource=localhost ; port=3306; username=root; password=12345; database=taxiappdb";
		DriverProgram(int driver, int user)
		{
			InitializeComponent();
			id_driver = driver;
			id_user = user;
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~DriverProgram()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Button^ btnCarChoose;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dGDCars;
	private: System::Windows::Forms::TabPage^ tabPage2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DriverProgram::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnCarChoose = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dGDCars = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->btnChangePassword = (gcnew System::Windows::Forms::Button());
			this->txtRepeatPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtOldPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtNewPassword = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->btnWeek = (gcnew System::Windows::Forms::Button());
			this->btnYear = (gcnew System::Windows::Forms::Button());
			this->btnMonth = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtKmSum = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtCount = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->btnCalculate = (gcnew System::Windows::Forms::Button());
			this->txtCostSum = (gcnew System::Windows::Forms::TextBox());
			this->dGMyTrips = (gcnew System::Windows::Forms::DataGridView());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dGDCars))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dGMyTrips))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1404, 705);
			this->tabControl1->TabIndex = 34;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->btnCarChoose);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->dGDCars);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage1->Size = System::Drawing::Size(1396, 676);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Wybierz samochód";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(71, 34);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(194, 25);
			this->label2->TabIndex = 34;
			this->label2->Text = L"Twój samochód to:";
			this->label2->Click += gcnew System::EventHandler(this, &DriverProgram::label2_Click);
			// 
			// btnCarChoose
			// 
			this->btnCarChoose->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->btnCarChoose->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCarChoose->ForeColor = System::Drawing::Color::White;
			this->btnCarChoose->Location = System::Drawing::Point(76, 208);
			this->btnCarChoose->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnCarChoose->Name = L"btnCarChoose";
			this->btnCarChoose->Size = System::Drawing::Size(228, 58);
			this->btnCarChoose->TabIndex = 33;
			this->btnCarChoose->Text = L"Wybierz";
			this->btnCarChoose->UseVisualStyleBackColor = false;
			this->btnCarChoose->Click += gcnew System::EventHandler(this, &DriverProgram::btnCarChoose_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(19, 68);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(301, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nie masz wybranego samochodu";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// dGDCars
			// 
			this->dGDCars->AllowUserToAddRows = false;
			this->dGDCars->AllowUserToOrderColumns = true;
			this->dGDCars->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dGDCars->Location = System::Drawing::Point(701, 43);
			this->dGDCars->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dGDCars->Name = L"dGDCars";
			this->dGDCars->RowHeadersWidth = 51;
			this->dGDCars->RowTemplate->Height = 24;
			this->dGDCars->Size = System::Drawing::Size(652, 598);
			this->dGDCars->TabIndex = 32;
			this->dGDCars->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &DriverProgram::dGDCars_CellClick);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label17);
			this->tabPage2->Controls->Add(this->btnChangePassword);
			this->tabPage2->Controls->Add(this->txtRepeatPassword);
			this->tabPage2->Controls->Add(this->txtOldPassword);
			this->tabPage2->Controls->Add(this->txtNewPassword);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage2->Size = System::Drawing::Size(1396, 676);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Zmieñ has³o";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label17->Location = System::Drawing::Point(575, 60);
			this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(193, 35);
			this->label17->TabIndex = 17;
			this->label17->Text = L"Zmiana has³a:";
			// 
			// btnChangePassword
			// 
			this->btnChangePassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(161)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->btnChangePassword->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnChangePassword->ForeColor = System::Drawing::Color::White;
			this->btnChangePassword->Location = System::Drawing::Point(475, 292);
			this->btnChangePassword->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnChangePassword->Name = L"btnChangePassword";
			this->btnChangePassword->Size = System::Drawing::Size(349, 39);
			this->btnChangePassword->TabIndex = 6;
			this->btnChangePassword->Text = L"Zmieñ has³o";
			this->btnChangePassword->UseVisualStyleBackColor = false;
			this->btnChangePassword->Click += gcnew System::EventHandler(this, &DriverProgram::btnChangePassword_Click);
			// 
			// txtRepeatPassword
			// 
			this->txtRepeatPassword->Location = System::Drawing::Point(604, 239);
			this->txtRepeatPassword->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtRepeatPassword->Name = L"txtRepeatPassword";
			this->txtRepeatPassword->Size = System::Drawing::Size(219, 22);
			this->txtRepeatPassword->TabIndex = 5;
			// 
			// txtOldPassword
			// 
			this->txtOldPassword->Location = System::Drawing::Point(604, 149);
			this->txtOldPassword->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtOldPassword->Name = L"txtOldPassword";
			this->txtOldPassword->Size = System::Drawing::Size(219, 22);
			this->txtOldPassword->TabIndex = 3;
			// 
			// txtNewPassword
			// 
			this->txtNewPassword->Location = System::Drawing::Point(604, 193);
			this->txtNewPassword->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtNewPassword->Name = L"txtNewPassword";
			this->txtNewPassword->Size = System::Drawing::Size(219, 22);
			this->txtNewPassword->TabIndex = 4;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(488, 153);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(81, 16);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Stare has³o:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(484, 197);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(84, 16);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Nowe has³o:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(471, 242);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(96, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Powtórz has³o:";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->btnWeek);
			this->tabPage3->Controls->Add(this->btnYear);
			this->tabPage3->Controls->Add(this->btnMonth);
			this->tabPage3->Controls->Add(this->label8);
			this->tabPage3->Controls->Add(this->txtKmSum);
			this->tabPage3->Controls->Add(this->label7);
			this->tabPage3->Controls->Add(this->txtCount);
			this->tabPage3->Controls->Add(this->label6);
			this->tabPage3->Controls->Add(this->btnCalculate);
			this->tabPage3->Controls->Add(this->txtCostSum);
			this->tabPage3->Controls->Add(this->dGMyTrips);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(1396, 676);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Moje kursy";
			this->tabPage3->UseVisualStyleBackColor = true;
			this->tabPage3->Click += gcnew System::EventHandler(this, &DriverProgram::tabPage3_Click);
			// 
			// btnWeek
			// 
			this->btnWeek->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->btnWeek->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnWeek->ForeColor = System::Drawing::Color::White;
			this->btnWeek->Location = System::Drawing::Point(462, 357);
			this->btnWeek->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnWeek->Name = L"btnWeek";
			this->btnWeek->Size = System::Drawing::Size(133, 33);
			this->btnWeek->TabIndex = 10;
			this->btnWeek->Text = L"Tydzieñ";
			this->btnWeek->UseVisualStyleBackColor = false;
			this->btnWeek->Click += gcnew System::EventHandler(this, &DriverProgram::btnWeek_Click);
			// 
			// btnYear
			// 
			this->btnYear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->btnYear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnYear->ForeColor = System::Drawing::Color::White;
			this->btnYear->Location = System::Drawing::Point(105, 357);
			this->btnYear->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnYear->Name = L"btnYear";
			this->btnYear->Size = System::Drawing::Size(133, 33);
			this->btnYear->TabIndex = 9;
			this->btnYear->Text = L"Rok";
			this->btnYear->UseVisualStyleBackColor = false;
			this->btnYear->Click += gcnew System::EventHandler(this, &DriverProgram::btnYear_Click);
			// 
			// btnMonth
			// 
			this->btnMonth->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->btnMonth->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMonth->ForeColor = System::Drawing::Color::White;
			this->btnMonth->Location = System::Drawing::Point(280, 357);
			this->btnMonth->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnMonth->Name = L"btnMonth";
			this->btnMonth->Size = System::Drawing::Size(133, 33);
			this->btnMonth->TabIndex = 8;
			this->btnMonth->Text = L"Miesi¹c";
			this->btnMonth->UseVisualStyleBackColor = false;
			this->btnMonth->Click += gcnew System::EventHandler(this, &DriverProgram::btnMonth_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(167, 144);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(121, 16);
			this->label8->TabIndex = 7;
			this->label8->Text = L"£¹cznie kilometrów";
			// 
			// txtKmSum
			// 
			this->txtKmSum->Location = System::Drawing::Point(181, 185);
			this->txtKmSum->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtKmSum->Name = L"txtKmSum";
			this->txtKmSum->Size = System::Drawing::Size(100, 22);
			this->txtKmSum->TabIndex = 6;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(27, 144);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(91, 16);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Liczba kursów";
			// 
			// txtCount
			// 
			this->txtCount->Location = System::Drawing::Point(29, 185);
			this->txtCount->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtCount->Name = L"txtCount";
			this->txtCount->Size = System::Drawing::Size(100, 22);
			this->txtCount->TabIndex = 4;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(321, 144);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(117, 16);
			this->label6->TabIndex = 3;
			this->label6->Text = L"£¹cznie zarobione";
			// 
			// btnCalculate
			// 
			this->btnCalculate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->btnCalculate->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCalculate->ForeColor = System::Drawing::Color::White;
			this->btnCalculate->Location = System::Drawing::Point(463, 181);
			this->btnCalculate->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnCalculate->Name = L"btnCalculate";
			this->btnCalculate->Size = System::Drawing::Size(124, 31);
			this->btnCalculate->TabIndex = 2;
			this->btnCalculate->Text = L"Oblicz";
			this->btnCalculate->UseVisualStyleBackColor = false;
			this->btnCalculate->Click += gcnew System::EventHandler(this, &DriverProgram::btnCalculate_Click);
			// 
			// txtCostSum
			// 
			this->txtCostSum->Location = System::Drawing::Point(324, 185);
			this->txtCostSum->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtCostSum->Name = L"txtCostSum";
			this->txtCostSum->Size = System::Drawing::Size(100, 22);
			this->txtCostSum->TabIndex = 1;
			// 
			// dGMyTrips
			// 
			this->dGMyTrips->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dGMyTrips->Location = System::Drawing::Point(701, 43);
			this->dGMyTrips->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dGMyTrips->Name = L"dGMyTrips";
			this->dGMyTrips->RowHeadersWidth = 51;
			this->dGMyTrips->RowTemplate->Height = 24;
			this->dGMyTrips->Size = System::Drawing::Size(652, 598);
			this->dGMyTrips->TabIndex = 0;
			// 
			// DriverProgram
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1404, 705);
			this->Controls->Add(this->tabControl1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"DriverProgram";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TaxiApp - Kierowca";
			this->Load += gcnew System::EventHandler(this, &DriverProgram::DriverProgram_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dGDCars))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dGMyTrips))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		int record_id;
	private: void show_cars()
	{
		MySqlConnection^ baseConnection = gcnew MySqlConnection(configuration);
		MySqlCommand^ query = gcnew MySqlCommand("SELECT car_id, brand as 'marka', model, reg_number as 'numer rejestracyjny', class as 'klasa' FROM tbl_car WHERE driver_id is NULL", baseConnection);

		try
		{
			baseConnection->Open();
			MySqlDataAdapter^ TaxiBase = gcnew MySqlDataAdapter();
			TaxiBase->SelectCommand = query;
			DataTable^ Utabela = gcnew DataTable();
			TaxiBase->Fill(Utabela);
			BindingSource^ sourceTaxi = gcnew BindingSource();
			sourceTaxi->DataSource = Utabela;
			dGDCars->DataSource = sourceTaxi;
			baseConnection->Close();
		}
		catch (Exception^ komunikat)
		{
			MessageBox::Show(komunikat->Message);
		}


		dGDCars->Columns[0]->Visible = false;
	}
		   String^ week = "NOW() - INTERVAL 7 DAY";
		   String^ month = "NOW() - INTERVAL 30 DAY";
		   String^ year = "NOW() - INTERVAL 365 DAY";




		   private: void show_mytrips(String ^period)
		   {
			   MySqlConnection^ baseConnection = gcnew MySqlConnection(configuration);
			   MySqlCommand^ query = gcnew MySqlCommand("SELECT trip_id, date, distance, cost, driver_id FROM tbl_trip WHERE driver_id="+id_driver+" AND date > "+period+" ", baseConnection);

			   try
			   {
				   baseConnection->Open();
				   MySqlDataAdapter^ TaxiBase = gcnew MySqlDataAdapter();
				   TaxiBase->SelectCommand = query;
				   DataTable^ Tripstabela = gcnew DataTable();
				   TaxiBase->Fill(Tripstabela);
				   BindingSource^ sourceTaxi = gcnew BindingSource();
				   sourceTaxi->DataSource = Tripstabela;
				   dGMyTrips->DataSource = sourceTaxi;
				   baseConnection->Close();
			   }
			   catch (Exception^ komunikat)
			   {
				   MessageBox::Show(komunikat->Message);
			   }


			   dGMyTrips->Columns[0]->Visible = false;
			   dGMyTrips->Columns[4]->Visible = false;

		   }
	
	private: void yourcar()
	{
		MySqlConnection^ baseConnection = gcnew MySqlConnection(configuration);
		MySqlCommand^ querycar = gcnew MySqlCommand("SELECT * FROM tbl_car WHERE driver_id = '" + id_driver + "'", baseConnection);
		MySqlDataReader^ readingcar;
		baseConnection->Open();
		readingcar = querycar->ExecuteReader();
		if (readingcar->Read())



		{

			String^ brand = readingcar->GetString(1);
			String^ model = readingcar->GetString(2);

			label1->Text = brand + " " + model;
		}
	}
	private: System::Void DriverProgram_Load(System::Object^ sender, System::EventArgs^ e) {
		show_cars();
		yourcar();
		show_mytrips(year);

	}
private: System::Void dGDCars_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	record_id = Convert::ToInt32(dGDCars->Rows[e->RowIndex]->Cells[0]->Value);
}
private: System::Void btnCarChoose_Click(System::Object^ sender, System::EventArgs^ e) {
	MySqlConnection^ baseConnection = gcnew MySqlConnection(configuration);
	MySqlCommand^ query = baseConnection->CreateCommand();
	MySqlTransaction^ transaction;
	baseConnection->Open();
	transaction = baseConnection->BeginTransaction(IsolationLevel::ReadCommitted);


	query->Connection = baseConnection;
	query->Transaction = transaction;


	try
	{




		query->CommandText = "UPDATE tbl_car SET driver_id= NULL WHERE driver_id='" + id_driver + "'; ";

		query->ExecuteNonQuery();


		query->CommandText = "UPDATE tbl_car SET driver_id='" + id_driver + "'WHERE car_id='" + record_id + "'; ";

		query->ExecuteNonQuery();




		transaction->Commit();

	}




	catch (Exception^ komunikat)
	{

		MessageBox::Show(komunikat->Message);
		transaction->Rollback();

	}
	show_cars();
	yourcar();


	baseConnection->Close();
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnChangePassword_Click(System::Object^ sender, System::EventArgs^ e) {
	MySqlConnection^ baseConnection = gcnew MySqlConnection(configuration);
	MySqlCommand^ query = gcnew MySqlCommand(" UPDATE tbl_user SET password = md5('" + txtNewPassword->Text + "') WHERE user_id = " + id_user + "  AND password = md5('" + txtOldPassword->Text + "')", baseConnection);

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
private: System::Void tabPage3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnCalculate_Click(System::Object^ sender, System::EventArgs^ e) {
	int cost_sum = 0;
	int km_sum = 0;
	DateTime data;
	for (int i = 0; i < dGMyTrips->Rows->Count; ++i)
	{
		
		cost_sum += Convert::ToInt32(dGMyTrips->Rows[i]->Cells["cost"]->Value);
		km_sum += Convert::ToInt32(dGMyTrips->Rows[i]->Cells["distance"]->Value);


	}

	txtCostSum -> Text = Convert::ToString(cost_sum);
	txtCount->Text = Convert::ToString(dGMyTrips->Rows->Count-1);
	txtKmSum->Text = Convert::ToString(km_sum);


}
private: System::Void btnMonth_Click(System::Object^ sender, System::EventArgs^ e) {
	show_mytrips(month);
}
private: System::Void btnYear_Click(System::Object^ sender, System::EventArgs^ e) {
	show_mytrips(year);

}
private: System::Void btnWeek_Click(System::Object^ sender, System::EventArgs^ e) {
	show_mytrips(week);

}

};
}
