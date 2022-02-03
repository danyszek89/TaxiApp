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
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ btnChangePassword;
	private: System::Windows::Forms::TextBox^ txtRepeatPassword;
	private: System::Windows::Forms::TextBox^ txtNewPassword;
	private: System::Windows::Forms::TextBox^ txtOldPassword;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnCarChoose = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dGDCars = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btnChangePassword = (gcnew System::Windows::Forms::Button());
			this->txtRepeatPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtNewPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtOldPassword = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dGDCars))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(184, 22);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(933, 481);
			this->tabControl1->TabIndex = 34;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->btnCarChoose);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->dGDCars);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(925, 452);
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
			this->btnCarChoose->Location = System::Drawing::Point(787, 126);
			this->btnCarChoose->Name = L"btnCarChoose";
			this->btnCarChoose->Size = System::Drawing::Size(103, 70);
			this->btnCarChoose->TabIndex = 33;
			this->btnCarChoose->Text = L"Wybierz";
			this->btnCarChoose->UseVisualStyleBackColor = true;
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
			this->dGDCars->Location = System::Drawing::Point(361, 20);
			this->dGDCars->Name = L"dGDCars";
			this->dGDCars->RowHeadersWidth = 51;
			this->dGDCars->RowTemplate->Height = 24;
			this->dGDCars->Size = System::Drawing::Size(403, 387);
			this->dGDCars->TabIndex = 32;
			this->dGDCars->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &DriverProgram::dGDCars_CellClick);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->groupBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(925, 452);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Zmieñ has³o";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btnChangePassword);
			this->groupBox1->Controls->Add(this->txtRepeatPassword);
			this->groupBox1->Controls->Add(this->txtNewPassword);
			this->groupBox1->Controls->Add(this->txtOldPassword);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Location = System::Drawing::Point(264, 97);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(396, 259);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Zmiana has³a";
			// 
			// btnChangePassword
			// 
			this->btnChangePassword->Location = System::Drawing::Point(130, 188);
			this->btnChangePassword->Name = L"btnChangePassword";
			this->btnChangePassword->Size = System::Drawing::Size(161, 23);
			this->btnChangePassword->TabIndex = 6;
			this->btnChangePassword->Text = L"Zmieñ has³o";
			this->btnChangePassword->UseVisualStyleBackColor = true;
			this->btnChangePassword->Click += gcnew System::EventHandler(this, &DriverProgram::btnChangePassword_Click);
			// 
			// txtRepeatPassword
			// 
			this->txtRepeatPassword->Location = System::Drawing::Point(155, 126);
			this->txtRepeatPassword->Name = L"txtRepeatPassword";
			this->txtRepeatPassword->Size = System::Drawing::Size(198, 22);
			this->txtRepeatPassword->TabIndex = 5;
			// 
			// txtNewPassword
			// 
			this->txtNewPassword->Location = System::Drawing::Point(155, 73);
			this->txtNewPassword->Name = L"txtNewPassword";
			this->txtNewPassword->Size = System::Drawing::Size(198, 22);
			this->txtNewPassword->TabIndex = 4;
			// 
			// txtOldPassword
			// 
			this->txtOldPassword->Location = System::Drawing::Point(155, 27);
			this->txtOldPassword->Name = L"txtOldPassword";
			this->txtOldPassword->Size = System::Drawing::Size(198, 22);
			this->txtOldPassword->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(21, 126);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(93, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Powtórz has³o";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(18, 76);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(81, 16);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Nowe has³o";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(21, 27);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(78, 16);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Stare has³o";
			// 
			// DriverProgram
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1377, 604);
			this->Controls->Add(this->tabControl1);
			this->Name = L"DriverProgram";
			this->Text = L"DriverProgram";
			this->Load += gcnew System::EventHandler(this, &DriverProgram::DriverProgram_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dGDCars))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
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
			MessageBox::Show("Has³o niepoprane");
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
