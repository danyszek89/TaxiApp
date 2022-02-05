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
	private: System::Windows::Forms::Button^ btnFuture;
	private: System::Windows::Forms::Button^ btnArchive;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btnCancelTrip;
	private: System::Windows::Forms::DataGridView^ dGTrips;
	private: System::Windows::Forms::MaskedTextBox^ txtTime;
	private: System::Windows::Forms::Button^ btnTripAdd;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtDistance;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtCost;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ComboBox^ comboBox;
	private: System::Windows::Forms::Button^ btnCustomerCalculate;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker;
	private: System::Windows::Forms::DataGridView^ dGTripDriver;

	public:


	public:









		   String^ configuration = L"datasource=localhost ; port=3306; username=root; password=12345; database=taxiappdb";
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Customer::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->btnFuture = (gcnew System::Windows::Forms::Button());
			this->btnArchive = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnCancelTrip = (gcnew System::Windows::Forms::Button());
			this->dGTrips = (gcnew System::Windows::Forms::DataGridView());
			this->txtTime = (gcnew System::Windows::Forms::MaskedTextBox());
			this->btnTripAdd = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtDistance = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtCost = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->btnCustomerCalculate = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->dGTripDriver = (gcnew System::Windows::Forms::DataGridView());
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
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dGTrips))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dGTripDriver))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1357, 713);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->btnFuture);
			this->tabPage1->Controls->Add(this->btnArchive);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->btnCancelTrip);
			this->tabPage1->Controls->Add(this->dGTrips);
			this->tabPage1->Controls->Add(this->txtTime);
			this->tabPage1->Controls->Add(this->btnTripAdd);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->txtDistance);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->txtCost);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->comboBox);
			this->tabPage1->Controls->Add(this->btnCustomerCalculate);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->label10);
			this->tabPage1->Controls->Add(this->dateTimePicker);
			this->tabPage1->Controls->Add(this->dGTripDriver);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage1->Size = System::Drawing::Size(1349, 684);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Rezerwacja";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &Customer::tabPage1_Click);
			// 
			// btnFuture
			// 
			this->btnFuture->Location = System::Drawing::Point(304, 339);
			this->btnFuture->Name = L"btnFuture";
			this->btnFuture->Size = System::Drawing::Size(122, 33);
			this->btnFuture->TabIndex = 40;
			this->btnFuture->Text = L"Przysz³e";
			this->btnFuture->UseVisualStyleBackColor = true;
			this->btnFuture->Click += gcnew System::EventHandler(this, &Customer::btnFuture_Click);
			// 
			// btnArchive
			// 
			this->btnArchive->Location = System::Drawing::Point(197, 337);
			this->btnArchive->Name = L"btnArchive";
			this->btnArchive->Size = System::Drawing::Size(101, 36);
			this->btnArchive->TabIndex = 39;
			this->btnArchive->Text = L"Archiwalne";
			this->btnArchive->UseVisualStyleBackColor = true;
			this->btnArchive->Click += gcnew System::EventHandler(this, &Customer::btnArchive_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(79, 340);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(112, 16);
			this->label4->TabIndex = 38;
			this->label4->Text = L"Twoje rezerwacje";
			// 
			// btnCancelTrip
			// 
			this->btnCancelTrip->Location = System::Drawing::Point(1076, 460);
			this->btnCancelTrip->Name = L"btnCancelTrip";
			this->btnCancelTrip->Size = System::Drawing::Size(137, 84);
			this->btnCancelTrip->TabIndex = 37;
			this->btnCancelTrip->Text = L"Zrezygnuj";
			this->btnCancelTrip->UseVisualStyleBackColor = true;
			this->btnCancelTrip->Click += gcnew System::EventHandler(this, &Customer::btnCancelTrip_Click);
			// 
			// dGTrips
			// 
			this->dGTrips->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dGTrips->Location = System::Drawing::Point(64, 379);
			this->dGTrips->Name = L"dGTrips";
			this->dGTrips->RowHeadersWidth = 51;
			this->dGTrips->RowTemplate->Height = 24;
			this->dGTrips->Size = System::Drawing::Size(987, 259);
			this->dGTrips->TabIndex = 36;
			this->dGTrips->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Customer::dGTrips_CellClick);
			// 
			// txtTime
			// 
			this->txtTime->Location = System::Drawing::Point(236, 111);
			this->txtTime->Mask = L"90:00";
			this->txtTime->Name = L"txtTime";
			this->txtTime->Size = System::Drawing::Size(100, 22);
			this->txtTime->TabIndex = 35;
			this->txtTime->ValidatingType = System::DateTime::typeid;
			// 
			// btnTripAdd
			// 
			this->btnTripAdd->Location = System::Drawing::Point(392, 285);
			this->btnTripAdd->Name = L"btnTripAdd";
			this->btnTripAdd->Size = System::Drawing::Size(177, 41);
			this->btnTripAdd->TabIndex = 34;
			this->btnTripAdd->Text = L"Zarezerwuj";
			this->btnTripAdd->UseVisualStyleBackColor = true;
			this->btnTripAdd->Click += gcnew System::EventHandler(this, &Customer::btnTripAdd_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(592, 46);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(126, 16);
			this->label7->TabIndex = 33;
			this->label7->Text = L"Kierowcy do wyboru";
			// 
			// txtDistance
			// 
			this->txtDistance->Location = System::Drawing::Point(236, 211);
			this->txtDistance->Name = L"txtDistance";
			this->txtDistance->Size = System::Drawing::Size(100, 22);
			this->txtDistance->TabIndex = 32;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(113, 217);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(56, 16);
			this->label6->TabIndex = 31;
			this->label6->Text = L"Dystans";
			// 
			// txtCost
			// 
			this->txtCost->Enabled = false;
			this->txtCost->Location = System::Drawing::Point(245, 256);
			this->txtCost->Name = L"txtCost";
			this->txtCost->Size = System::Drawing::Size(100, 22);
			this->txtCost->TabIndex = 30;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(113, 259);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(39, 16);
			this->label5->TabIndex = 29;
			this->label5->Text = L"Koszt";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(109, 173);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(42, 16);
			this->label8->TabIndex = 28;
			this->label8->Text = L"Strefa";
			// 
			// comboBox
			// 
			this->comboBox->FormattingEnabled = true;
			this->comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Strefa_1", L"Strefa_2" });
			this->comboBox->Location = System::Drawing::Point(236, 165);
			this->comboBox->Name = L"comboBox";
			this->comboBox->Size = System::Drawing::Size(121, 24);
			this->comboBox->TabIndex = 27;
			// 
			// btnCustomerCalculate
			// 
			this->btnCustomerCalculate->Location = System::Drawing::Point(374, 256);
			this->btnCustomerCalculate->Name = L"btnCustomerCalculate";
			this->btnCustomerCalculate->Size = System::Drawing::Size(75, 23);
			this->btnCustomerCalculate->TabIndex = 26;
			this->btnCustomerCalculate->Text = L"Oblicz";
			this->btnCustomerCalculate->UseVisualStyleBackColor = true;
			this->btnCustomerCalculate->Click += gcnew System::EventHandler(this, &Customer::btnCustomerCalculate_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(109, 117);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(60, 16);
			this->label9->TabIndex = 25;
			this->label9->Text = L"Godzina:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(106, 65);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(36, 16);
			this->label10->TabIndex = 24;
			this->label10->Text = L"Data";
			// 
			// dateTimePicker
			// 
			this->dateTimePicker->Location = System::Drawing::Point(221, 65);
			this->dateTimePicker->Name = L"dateTimePicker";
			this->dateTimePicker->Size = System::Drawing::Size(200, 22);
			this->dateTimePicker->TabIndex = 23;
			// 
			// dGTripDriver
			// 
			this->dGTripDriver->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dGTripDriver->Location = System::Drawing::Point(595, 65);
			this->dGTripDriver->Name = L"dGTripDriver";
			this->dGTripDriver->RowHeadersWidth = 51;
			this->dGTripDriver->RowTemplate->Height = 24;
			this->dGTripDriver->Size = System::Drawing::Size(652, 237);
			this->dGTripDriver->TabIndex = 22;
			this->dGTripDriver->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Customer::dGTripDriver_CellClick);
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
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage2->Size = System::Drawing::Size(1349, 684);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Zmieñ has³o";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label17->Location = System::Drawing::Point(637, 195);
			this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(193, 35);
			this->label17->TabIndex = 16;
			this->label17->Text = L"Zmiana has³a:";
			// 
			// btnChangePasswordCustomer
			// 
			this->btnChangePasswordCustomer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(161)), static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->btnChangePasswordCustomer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnChangePasswordCustomer->ForeColor = System::Drawing::Color::White;
			this->btnChangePasswordCustomer->Location = System::Drawing::Point(566, 402);
			this->btnChangePasswordCustomer->Margin = System::Windows::Forms::Padding(4);
			this->btnChangePasswordCustomer->Name = L"btnChangePasswordCustomer";
			this->btnChangePasswordCustomer->Size = System::Drawing::Size(347, 37);
			this->btnChangePasswordCustomer->TabIndex = 6;
			this->btnChangePasswordCustomer->Text = L"ZMIEÑ";
			this->btnChangePasswordCustomer->UseVisualStyleBackColor = false;
			this->btnChangePasswordCustomer->Click += gcnew System::EventHandler(this, &Customer::btnChangePasswordCustomer_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(548, 276);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(101, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Aktualne has³o:";
			// 
			// txtOldPasswordCustomer
			// 
			this->txtOldPasswordCustomer->Location = System::Drawing::Point(693, 272);
			this->txtOldPasswordCustomer->Margin = System::Windows::Forms::Padding(4);
			this->txtOldPasswordCustomer->Name = L"txtOldPasswordCustomer";
			this->txtOldPasswordCustomer->PasswordChar = '*';
			this->txtOldPasswordCustomer->Size = System::Drawing::Size(219, 22);
			this->txtOldPasswordCustomer->TabIndex = 3;
			// 
			// txtRepeatPasswordCustomer
			// 
			this->txtRepeatPasswordCustomer->Location = System::Drawing::Point(693, 344);
			this->txtRepeatPasswordCustomer->Margin = System::Windows::Forms::Padding(4);
			this->txtRepeatPasswordCustomer->Name = L"txtRepeatPasswordCustomer";
			this->txtRepeatPasswordCustomer->PasswordChar = '*';
			this->txtRepeatPasswordCustomer->Size = System::Drawing::Size(219, 22);
			this->txtRepeatPasswordCustomer->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(542, 347);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(107, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"PotwierdŸ has³o:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(566, 309);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(84, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nowe has³o:";
			// 
			// txtNewPasswordCustomer
			// 
			this->txtNewPasswordCustomer->Location = System::Drawing::Point(693, 306);
			this->txtNewPasswordCustomer->Margin = System::Windows::Forms::Padding(4);
			this->txtNewPasswordCustomer->Name = L"txtNewPasswordCustomer";
			this->txtNewPasswordCustomer->PasswordChar = '*';
			this->txtNewPasswordCustomer->Size = System::Drawing::Size(219, 22);
			this->txtNewPasswordCustomer->TabIndex = 4;
			// 
			// Customer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1357, 713);
			this->Controls->Add(this->tabControl1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Customer";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TaxiApp - Klient";
			this->Load += gcnew System::EventHandler(this, &Customer::Customer_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dGTrips))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dGTripDriver))->EndInit();
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
				txtOldPasswordCustomer->Text = "";
				txtNewPasswordCustomer->Text = "";
				txtRepeatPasswordCustomer->Text = "";			
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
		   int driver_record_id;
		   int trip_record_id;
	
	private: System::Void Customer_Load(System::Object^ sender, System::EventArgs^ e) {
		comboBox->SelectedIndex = 0;
		showtripdriver();
		show_mytrips(future);


	}

		   private: void calculate()
		   {
			   if (txtDistance->Text->Length < 1 || txtTime->Text->Length < 4)
			   {
				   MessageBox::Show("Podaj poprawne dane");
			   }
			   int cost;
			   String^ distance = txtDistance->Text;
			   try
			   {


				   if (comboBox->SelectedIndex == 0)
				   {
					   cost = 6 + (3 * Convert::ToInt32(distance));

				   }

				   if (comboBox->SelectedIndex == 1)
				   {
					   cost = 6 + (5 * Convert::ToInt32(distance));
				   }
				   txtCost->Text = Convert::ToString(cost);
			   }
			   catch (Exception^ komunikat)
			   {
				   MessageBox::Show(komunikat->Message);

			   }
		   }
private: System::Void txtDistance_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnCustomerCalculate_Click(System::Object^ sender, System::EventArgs^ e) {
	calculate();
}



	   private: void showtripdriver()
	   {
		   MySqlConnection^ baseConnection = gcnew MySqlConnection(configuration);
		   MySqlCommand^ query = gcnew MySqlCommand("SELECT tbl_driver.driver_id, tbl_driver.name, tbl_driver.surname, tbl_user.email, tbl_driver.tel_number, tbl_licence.cat_a, tbl_licence.cat_b, tbl_licence.cat_c,tbl_licence.cat_d, tbl_driver.licence_id FROM tbl_user, tbl_driver, tbl_licence WHERE tbl_user.user_id=tbl_driver.user_id AND tbl_licence.licence_id = tbl_driver.licence_id; ", baseConnection);

		   try
		   {
			   baseConnection->Open();
			   MySqlDataAdapter^ TaxiBase = gcnew MySqlDataAdapter();
			   TaxiBase->SelectCommand = query;
			   DataTable^ Drivertabela = gcnew DataTable();
			   TaxiBase->Fill(Drivertabela);
			   BindingSource^ sourceTaxi = gcnew BindingSource();
			   sourceTaxi->DataSource = Drivertabela;
			   dGTripDriver->DataSource = sourceTaxi;
			   baseConnection->Close();
		   }
		   catch (Exception^ komunikat)
		   {
			   MessageBox::Show(komunikat->Message);
		   }


		   dGTripDriver->Columns[0]->Visible = false;

	   }



private: System::Void btnTripAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	int zone;

	if (comboBox->SelectedIndex == 0)
	{
		zone = 1;
	}
	else
	{
		zone = 2;
	}

	if (txtDistance->Text->Length < 1 || txtTime->Text->Length < 4)
	{
		MessageBox::Show("Podaj poprawne dane");
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

		query->CommandText = "INSERT INTO tbl_trip SET zone = '" + zone + "', distance='" + txtDistance->Text + "', date = '" + dateTimePicker->Value.Date.ToString("yyyyMMdd") + "', driver_id = '" + driver_record_id + "', customer_id = '" + id_customer + "', cost='" + txtCost->Text + "', start_time='" + txtTime->Text + "' ; ";

		query->ExecuteNonQuery();




		transaction->Commit();

		MessageBox::Show("Rezerwacja zosta³a dokonana");

	}


	catch (Exception^ komunikat)
	{
		MessageBox::Show(komunikat->Message);
		transaction->Rollback();

	}
	show_mytrips(future);
	baseConnection->Close();

}
private: System::Void dGTripDriver_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	driver_record_id = Convert::ToInt32(dGTripDriver->Rows[e->RowIndex]->Cells[0]->Value);

}

	   String^ future = "date >= CURDATE()";
	   String^ archive = "date < CURDATE()";

		 private: void show_mytrips(String^ period)
		 {
			 MySqlConnection^ baseConnection = gcnew MySqlConnection(configuration);
			 MySqlCommand^ query = gcnew MySqlCommand("SELECT tbl_trip.trip_id,  tbl_trip.date, tbl_trip.start_time,tbl_trip.zone, tbl_trip.distance, tbl_trip.cost, tbl_trip.driver_id, tbl_trip.customer_id FROM tbl_trip WHERE tbl_trip.customer_id='" + id_customer + "' AND " + period + "; ", baseConnection);

			 try
			 {
				 baseConnection->Open();
				 MySqlDataAdapter^ TaxiBase = gcnew MySqlDataAdapter();
				 TaxiBase->SelectCommand = query;
				 DataTable^ Drivertabela = gcnew DataTable();
				 TaxiBase->Fill(Drivertabela);
				 BindingSource^ sourceTaxi = gcnew BindingSource();
				 sourceTaxi->DataSource = Drivertabela;
				 dGTrips->DataSource = sourceTaxi;
				 baseConnection->Close();
			 }
			 catch (Exception^ komunikat)
			 {
				 MessageBox::Show(komunikat->Message);
			 }


			 dGTrips->Columns[0]->Visible = false;

		 }
private: System::Void dGTrips_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void btnCancelTrip_Click(System::Object^ sender, System::EventArgs^ e) {
	MySqlConnection^ baseConnection = gcnew MySqlConnection(configuration);
	MySqlCommand^ query = baseConnection->CreateCommand();
	MySqlTransaction^ transaction;
	baseConnection->Open();
	transaction = baseConnection->BeginTransaction(IsolationLevel::ReadCommitted);

	query->Connection = baseConnection;
	query->Transaction = transaction;

	try {

		transaction->Commit();

		if (MessageBox::Show("Czy na pewno chcesz zrezygnowaæ?", "Uwaga!!!", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{

			query->CommandText = "DELETE FROM tbl_trip WHERE trip_id = " + trip_record_id + " ;";
			query->ExecuteNonQuery();


		}

		MessageBox::Show("Zrezygnowa³eœ z rezerwacji");
		show_mytrips(future);



	}
	catch (Exception^ komunikat)
	{
		MessageBox::Show(komunikat->Message);
		transaction->Rollback();

	}
	baseConnection->Close();
}
private: System::Void dGTrips_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	trip_record_id = Convert::ToInt32(dGTrips->Rows[e->RowIndex]->Cells[0]->Value);

}
private: System::Void btnArchive_Click(System::Object^ sender, System::EventArgs^ e) {
	btnCancelTrip->Enabled = false;
	show_mytrips(archive);
}
private: System::Void btnFuture_Click(System::Object^ sender, System::EventArgs^ e) {
	btnCancelTrip->Enabled = true;
	show_mytrips(future);
}

private: System::Void btnCustomerCalculate_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}
