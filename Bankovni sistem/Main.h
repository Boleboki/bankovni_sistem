#pragma once
#include "Validator.h"
#include "Konverzije.h"
#include "Funkcije - Varijable.h"
#include "bazapodataka.h"
#include <algorithm>
#include <string>
#include <regex>
#include "Pozadina.h"
#include "Kursevi.h"
#include "KreditniKalkulator.h"
#include "KonvertorValuta.h"
#include "IzmenaNaloga.h"
#include "Kredit.h"
#include "PromenaValute.h"
#include "ZatvaranjeNaloga.h"
#include "Uplatnica.h"
namespace Bankovnisistem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	static void popuniTransakcije(DataGridView^ data, Button^ btn, int n = sve_transakcije.size()) {
		int i;
		int pozend = 0;
		data->Rows->Clear();
		if (sve_transakcije.size() != 0) {
			if (sve_transakcije.size() > n) btn->Visible = true;
			else {
				btn->Visible = false;
				n = sve_transakcije.size();
			}
			pozend = sve_transakcije.size() - n;
			data->RowCount = n;
			int br = 0;
			for (i = sve_transakcije.size() - 1; i >= pozend; i--) {
				if (sve_transakcije[i].tipTranskacije == "Prenos" && user.id == sve_transakcije[i].idNaloga) {
					data->Rows[br]->Cells[2]->Value = "-";
					data->Rows[br]->Cells[2]->Style->BackColor = Color::Red;
				}
				else if (sve_transakcije[i].tipTranskacije == "Depozit") {
					data->Rows[br]->Cells[2]->Value = "+";
					data->Rows[br]->Cells[2]->Style->BackColor = Color::Green;
				}
				else if (sve_transakcije[i].tipTranskacije == "Isplata") {
					data->Rows[br]->Cells[2]->Value = "-";
					data->Rows[br]->Cells[2]->Style->BackColor = Color::Red;
				}
				else if (sve_transakcije[i].tipTranskacije == "Prenos" && user.id != sve_transakcije[i].idNaloga) {
					auto primalacUser = nalozi.FetchUser("*", "id = '" + to_string(sve_transakcije[i].idPrimalac) + "'");
					auto posiljalacUser = nalozi.FetchUser("*", "id = '" + to_string(sve_transakcije[i].idNaloga) + "'");
					data->Rows[br]->Cells[2]->Value = "+";
					data->Rows[br]->Cells[2]->Style->BackColor = Color::Green;
					data->Rows[br]->Cells[0]->Value = toField(sve_transakcije[i].datum.toString("%d.%m.%Y %H:%M:%S"));
					data->Rows[br]->Cells[1]->Value = toField(sve_transakcije[i].tipTranskacije);
					data->Rows[br]->Cells[3]->Value = toField(format_novac(sve_transakcije[i].medjustanjePrimalaca));
					data->Rows[br]->Cells[2]->Value += toField(format_novac(konverterValuta(sve_transakcije[i].kolicina, posiljalacUser.valuta, primalacUser.valuta)));
					br++;
					continue;

				}

				data->Rows[br]->Cells[0]->Value = toField(sve_transakcije[i].datum.toString("%d.%m.%Y %H:%M:%S"));
				data->Rows[br]->Cells[1]->Value = toField(sve_transakcije[i].tipTranskacije);
				data->Rows[br]->Cells[3]->Value = toField(format_novac(sve_transakcije[i].medjustanjeNaloga));
				data->Rows[br]->Cells[2]->Value += toField(format_novac(sve_transakcije[i].kolicina));
				br++;

			}

		}

	}
	static bool compareUserId(const User& a, const User& b) {
		return a.id < b.id;
	}
	static bool compareTranskacijeDatum(const Transkacije& a, const Transkacije& b) {
		if (a.datum.date.godina > b.datum.date.godina) {
			return true;
		}
		else if (a.datum.date.godina < b.datum.date.godina) {
			return false;
		}

		if (a.datum.date.mesec > b.datum.date.mesec) {
			return true;
		}
		else if (a.datum.date.mesec < b.datum.date.mesec) {
			return false;
		}

		if (a.datum.date.dan > b.datum.date.dan) {
			return true;
		}
		else if (a.datum.date.dan < b.datum.date.dan) {
			return false;
		}
		if (a.datum.time.sat > b.datum.time.sat) {
			return true;
		}
		else if (a.datum.time.sat < b.datum.time.sat) {
			return false;
		}
		if (a.datum.time.minut > b.datum.time.minut) {
			return true;
		}
		else if (a.datum.time.minut < b.datum.time.minut) {
			return false;
		}
		if (a.datum.time.sekunda > b.datum.time.sekunda) {
			return true;
		}
		else if (a.datum.time.sekunda < b.datum.time.sekunda) {
			return false;
		}
		return false;
	}

	static Color GetContrastColor(Color backgroundColor)
	{
		int threshold = 70;

		int luminance = (int)(backgroundColor.GetBrightness() * 255);

		if (luminance > threshold)
		{
			return Color::Black;
		}
		else
		{
			return Color::White;
		}
	}
	static Color GetContrastColorFromImage(Image^ backgroundImage)
	{
		int threshold = 70;

		Bitmap^ bitmap = gcnew Bitmap(backgroundImage);
		Color pixelColor = bitmap->GetPixel(0, 0);

		int luminance = (int)(pixelColor.GetBrightness() * 255);

		if (luminance > threshold)
		{
			return Color::Black;
		}
		else
		{
			return Color::White;
		}
	}

	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		int id;

	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox1;
	public: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ Odjavljivanje;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label11;
	public:
		Form^ login_page;
		Main(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Main(int id) {
			this->id = id;
			InitializeComponent();
		}
		Main(const User& data, Form^ form) {
			login_page = form;
			user = data;
			sve_transakcije = transakcije.FetchTranskacije("*", "idNaloga = '" + to_string(user.id) + "' OR idPrimalac = '" + to_string(user.id) + "'");
			InitializeComponent();
		}
		//Main(const User& user1) {
		//user = user1;
		//InitializeComponent();
		//}


	protected:
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	public: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ label2;

	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label9;


	private: System::Windows::Forms::Label^ label10;







	private: System::Windows::Forms::Label^ label13;




	private: System::ComponentModel::IContainer^ components;





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
/// <summary>
/// Required method for Designer support - do not modify
/// the contents of this method with the code editor.
/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Main::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->Odjavljivanje = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::Control;
			this->dataGridView1->Location = System::Drawing::Point(106, 260);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dataGridView1->Size = System::Drawing::Size(462, 339);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column1->HeaderText = L"Datum";
			this->Column1->MinimumWidth = 107;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 107;
			// 
			// Column2
			// 
			this->Column2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column2->HeaderText = L"Svrha uplate";
			this->Column2->MinimumWidth = 60;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 113;
			// 
			// Column3
			// 
			this->Column3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column3->HeaderText = L"Iznos";
			this->Column3->MinimumWidth = 90;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 90;
			// 
			// Column4
			// 
			this->Column4->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column4->HeaderText = L"Medjustanje";
			this->Column4->MinimumWidth = 150;
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 150;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(65, 80);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(144, 29);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Dobro došli ";
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(106, 260);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(462, 339);
			this->dataGridView2->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(100, 176);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(233, 31);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Stanje na racunu: ";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Orange;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->maskedTextBox1);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Location = System::Drawing::Point(606, 260);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(359, 92);
			this->panel1->TabIndex = 5;
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->maskedTextBox1->Location = System::Drawing::Point(22, 57);
			this->maskedTextBox1->Mask = L"000-0000000000-00";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(134, 22);
			this->maskedTextBox1->TabIndex = 7;
			this->maskedTextBox1->Click += gcnew System::EventHandler(this, &Main::maskedTextBox1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(167, 57);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(134, 22);
			this->textBox2->TabIndex = 6;
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Location = System::Drawing::Point(307, 57);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(40, 22);
			this->button2->TabIndex = 5;
			this->button2->Text = L"->";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Main::button2_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(18, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(138, 24);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Transfer Novca";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(164, 41);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(47, 13);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Količina:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(19, 37);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(42, 13);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Račun:";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::GreenYellow;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->textBox4);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Location = System::Drawing::Point(606, 383);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(359, 92);
			this->panel2->TabIndex = 6;
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Location = System::Drawing::Point(182, 58);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(40, 19);
			this->button3->TabIndex = 11;
			this->button3->Text = L"->";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Main::button3_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(18, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(62, 24);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Uplata";
			// 
			// textBox4
			// 
			this->textBox4->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(22, 55);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(144, 22);
			this->textBox4->TabIndex = 8;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(19, 39);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(35, 13);
			this->label9->TabIndex = 7;
			this->label9->Text = L"Iznos:";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Firebrick;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->button1);
			this->panel3->Controls->Add(this->textBox1);
			this->panel3->Controls->Add(this->label11);
			this->panel3->Controls->Add(this->label10);
			this->panel3->Location = System::Drawing::Point(606, 506);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(359, 92);
			this->panel3->TabIndex = 7;
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Location = System::Drawing::Point(182, 57);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(40, 19);
			this->button1->TabIndex = 19;
			this->button1->Text = L"->";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Main::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(22, 54);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(144, 22);
			this->textBox1->TabIndex = 18;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(19, 38);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(35, 13);
			this->label11->TabIndex = 17;
			this->label11->Text = L"Iznos:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(18, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(62, 24);
			this->label10->TabIndex = 16;
			this->label10->Text = L"Isplata";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(822, 171);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(36, 39);
			this->label3->TabIndex = 9;
			this->label3->Text = L"$";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(664, 80);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(163, 29);
			this->label13->TabIndex = 14;
			this->label13->Text = L"Tekući račun: ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(108, 207);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(156, 25);
			this->label8->TabIndex = 20;
			this->label8->Text = L"09:35 23/5/2023";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Main::timer1_Tick);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(294, 575);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 23);
			this->button14->TabIndex = 21;
			this->button14->Text = L"Prikazi vise";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Visible = false;
			this->button14->Click += gcnew System::EventHandler(this, &Main::button14_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Transparent;
			this->panel4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->panel4->Controls->Add(this->Odjavljivanje);
			this->panel4->Controls->Add(this->label17);
			this->panel4->Controls->Add(this->label16);
			this->panel4->Controls->Add(this->label15);
			this->panel4->Controls->Add(this->label14);
			this->panel4->Controls->Add(this->pictureBox1);
			this->panel4->Location = System::Drawing::Point(0, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1114, 74);
			this->panel4->TabIndex = 22;
			// 
			// Odjavljivanje
			// 
			this->Odjavljivanje->AutoSize = true;
			this->Odjavljivanje->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Odjavljivanje->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Odjavljivanje->Location = System::Drawing::Point(949, 19);
			this->Odjavljivanje->Name = L"Odjavljivanje";
			this->Odjavljivanje->Size = System::Drawing::Size(127, 31);
			this->Odjavljivanje->TabIndex = 24;
			this->Odjavljivanje->Text = L"Odjavi se";
			this->Odjavljivanje->Click += gcnew System::EventHandler(this, &Main::odjavljivanje_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(471, 26);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(81, 24);
			this->label17->TabIndex = 9;
			this->label17->Text = L"Plaćanja";
			this->label17->MouseHover += gcnew System::EventHandler(this, &Main::label17_MouseHover);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(787, 26);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(60, 24);
			this->label16->TabIndex = 3;
			this->label16->Text = L"Nalog";
			this->label16->MouseHover += gcnew System::EventHandler(this, &Main::label16_MouseHover);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(380, 26);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(58, 24);
			this->label15->TabIndex = 2;
			this->label15->Text = L"Kredit";
			this->label15->MouseHover += gcnew System::EventHandler(this, &Main::label15_MouseHover);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(252, 26);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(107, 24);
			this->label14->TabIndex = 1;
			this->label14->Text = L"Menjačnica";
			this->label14->MouseHover += gcnew System::EventHandler(this, &Main::label14_MouseHover);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(71, -19);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(140, 93);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::DimGray;
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel5->Location = System::Drawing::Point(0, 73);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(1115, 131);
			this->panel5->TabIndex = 23;
			this->panel5->Visible = false;
			this->panel5->MouseLeave += gcnew System::EventHandler(this, &Main::CheckMouseLeavePanel);
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1115, 680);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Location = System::Drawing::Point(200, 200);
			this->MaximizeBox = false;
			this->Name = L"Main";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Main";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Main::Main_FormClosed);
			this->Load += gcnew System::EventHandler(this, &Main::Main_Load);
			this->BackColorChanged += gcnew System::EventHandler(this, &Main::Main_BackColorChanged);
			this->BackgroundImageChanged += gcnew System::EventHandler(this, &Main::Main_BackgroundImageChanged);
			this->DoubleClick += gcnew System::EventHandler(this, &Main::Main_DoubleClick);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Main_Load(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			label14->BackColor = Color::Transparent;
			label15->BackColor = Color::Transparent;
			label16->BackColor = Color::Transparent;
			label17->BackColor = Color::Transparent;
			Odjavljivanje->BackColor = Color::Transparent;
			maskedTextBox1->PromptChar = ' ';
			vector<vector<string>> pozadina = pozadine.FetchData("*", "id = '" + to_string(user.id) + "'");
			if (pozadina.size() != 0) {
				if (pozadina[0][1] != "") {
					this->BackgroundImage = Image::FromFile(toField(pozadina[0][1]));
					this->BackgroundImageLayout = ImageLayout::Stretch;
					panel4->BackColor = Color::FromArgb(128, 0, 0, 0);
				}
				else {
					this->BackColor = StringToColor(pozadina[0][2]);
					panel4->BackColor = svetlijaBoja(this->BackColor);
				}
			}
			popuniTransakcije(dataGridView1, button14, 13);
			label8->Text = toField(currentDateTimeToString());
			label3->Text = toField(format_novac(user.novac)) + " " + toField(user.valuta);
			label1->Text += toField(user.user.korisnicko_ime);
			label13->Text += toField(user.racun);
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}



	}
	private: System::Void odjavljivanje_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			this->Hide();
			login_page->Show();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		map<pair<string, string>, map<string, string>> config = {
			{make_pair(fieldToString(""), fieldToString(maskedTextBox1->Text)) , {
				{"required", "true"},
				{"regex", "^([0-9].{2})-([0-9].{9})-([0-9].{1})$"},
			}},
			{make_pair(fieldToString(""), fieldToString(textBox2->Text)) , {
				{"required", "true"},
				{"number", "true"},
			}},
		};
		Validator::Login l(config);
		if (l.validationPassed()) {
			User sendingUser = nalozi.FetchUser("*", "racun = '" + fieldToString(maskedTextBox1->Text) + "'");
			if (sendingUser.postoji()) {
				if (user.novac >= fieldToDouble(textBox2->Text)) {
					string datum = currentDateTimeToString("dd/MM/yyyy HH:mm:ss");
					user.novac -= fieldToDouble(textBox2->Text);
					transakcije.addFields("idNaloga", "tipTransakcije", "kolicina", "datum", "deskripcija", "mudjustanjePosiljalaca", "idPrimalac", "mudjustanjePrimalaca");
					transakcije.addValues(
						to_string(user.id),
						"Prenos",
						fieldToString(textBox2->Text),
						datum,
						"Prenos na drugi racun",
						to_string(user.novac),
						to_string(sendingUser.id),
						to_string(sendingUser.novac + konverterValuta(fieldToDouble(textBox2->Text), user.valuta, sendingUser.valuta))
					);
					Transkacije transakcija;
					transakcija.idNaloga = user.id;
					transakcija.tipTranskacije = "Prenos";
					transakcija.kolicina = fieldToDouble(textBox2->Text);
					transakcija.datum = stringToDatetime(datum);
					transakcija.deskripcija = "Prenos na drugi racun";
					transakcija.medjustanjeNaloga = user.novac;
					transakcija.idPrimalac = sendingUser.id;
					transakcija.medjustanjePrimalaca = sendingUser.novac + konverterValuta(fieldToDouble(textBox2->Text), user.valuta, sendingUser.valuta);
					sve_transakcije.push_back(transakcija);
					popuniTransakcije(dataGridView1, button14, 13);
					transakcije.AddUser();
					nalozi.updateField("novac", "id = '" + to_string(sendingUser.id) + "'", to_string(sendingUser.novac + konverterValuta(fieldToDouble(textBox2->Text), user.valuta, sendingUser.valuta)));
					nalozi.updateField("novac", "id = '" + to_string(user.id) + "'", to_string(user.novac));
					label3->Text = toField(format_novac((double)user.novac)) + " " + toField(user.valuta);
				}
			}
		}
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		map<pair<string, string>, map<string, string>> config = {
			{make_pair(fieldToString(""), fieldToString(textBox4->Text)) , {
				{"required", "true"},
				{"number", "true"},
			}},
		};
		Validator::Login l(config);
		if (l.validationPassed() && konverterValuta(fieldToDouble(textBox4->Text), user.valuta, "USD") <= 500.0) {
			user.novac += fieldToDouble(textBox4->Text);
			string datum = currentDateTimeToString("dd/MM/yyyy HH:mm:ss");
			transakcije.addFields("idNaloga", "tipTransakcije", "kolicina", "datum", "deskripcija", "mudjustanjePosiljalaca");
			transakcije.addValues(
				to_string(user.id),
				"Depozit",
				fieldToString(textBox4->Text),
				datum,
				"Podizanje novca",
				to_string(user.novac)
			);
			Transkacije transakcija;
			transakcija.idNaloga = user.id;
			transakcija.tipTranskacije = "Depozit";
			transakcija.kolicina = fieldToDouble(textBox4->Text);
			transakcija.datum = stringToDatetime(datum);
			transakcija.deskripcija = "Podizanje novca";
			transakcija.medjustanjeNaloga = user.novac;
			sve_transakcije.push_back(transakcija);
			popuniTransakcije(dataGridView1, button14, 13);
			transakcije.AddUser();
			nalozi.updateField("novac", "id = '" + to_string(user.id) + "'", to_string(user.novac));
			label3->Text = toField(format_novac(user.novac)) + " " + toField(user.valuta);

		}


	}
	private: System::Void Main_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			if (!pozadina_otvorena) {
				pozadina_otvorena = true;
				Pozadina^ pozadina = gcnew Pozadina(this, user.id, panel4);
				pozadina->Show();
			}

		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void Main_BackColorChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			label1->ForeColor = GetContrastColor(this->BackColor);
			label2->ForeColor = GetContrastColor(this->BackColor);
			label3->ForeColor = GetContrastColor(this->BackColor);
			label13->ForeColor = GetContrastColor(this->BackColor);
			label8->ForeColor = GetContrastColor(this->BackColor);
			label14->ForeColor = GetContrastColor(this->BackColor);
			label15->ForeColor = GetContrastColor(this->BackColor);
			label16->ForeColor = GetContrastColor(this->BackColor);
			label17->ForeColor = GetContrastColor(this->BackColor);
			Odjavljivanje->ForeColor = GetContrastColor(this->BackColor);

		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}

	}
	private: System::Void Main_BackgroundImageChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			if (this->BackgroundImage != nullptr) {
				label1->ForeColor = GetContrastColorFromImage(this->BackgroundImage);
				label2->ForeColor = GetContrastColorFromImage(this->BackgroundImage);
				label3->ForeColor = GetContrastColorFromImage(this->BackgroundImage);
				label13->ForeColor = GetContrastColorFromImage(this->BackgroundImage);
				label8->ForeColor = GetContrastColorFromImage(this->BackgroundImage);
				label14->ForeColor = Color::White;
				label15->ForeColor = Color::White;
				label16->ForeColor = Color::White;
				label17->ForeColor = Color::White;
				Odjavljivanje->ForeColor = Color::White;
				
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}


	}
	private: System::Void maskedTextBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			regex rgx1("([^0-9])-");
			regex rgx2("\\s");
			string field = fieldToString(maskedTextBox1->Text);
			field = regex_replace(field, rgx1, "");
			field = regex_replace(field, rgx2, "");
			maskedTextBox1->SelectionStart = field.length();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		label8->Text = toField(currentDateTimeToString("dd/MM/yyyy HH:mm:ss"));
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Kursevi^ kurs = gcnew Kursevi(this);
		kurs->ShowDialog();
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		KreditniKalkulator^ kalk = gcnew KreditniKalkulator(this);
		kalk->ShowDialog();
	}
	private: System::Void Main_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		Application::Exit();
	}
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		popuniTransakcije(dataGridView1, button14);
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		KonvertorValuta^ konvertor = gcnew KonvertorValuta(this);
		konvertor->ShowDialog();
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		IzmenaNaloga^ izmena = gcnew IzmenaNaloga(login_page, this, user);
		izmena->ShowDialog();
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			if (!pozadina_otvorena) {
				pozadina_otvorena = true;
				Pozadina^ pozadina = gcnew Pozadina(this, user.id, panel4);
				pozadina->Show();
			}

		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	private: void CheckMouseLeavePanel(System::Object^ sender, System::EventArgs^ e) {
		Point mousePosition = panel5->PointToClient(Cursor->Position);
		if (!panel5->ClientRectangle.Contains(mousePosition))
			panel5->Visible = false;
	}
	private: System::Void pozadina_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			if (!pozadina_otvorena) {
				pozadina_otvorena = true;
				Pozadina^ pozadina = gcnew Pozadina(this, user.id, panel4);
				pozadina->Show();
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void kursevi_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			this->Hide();
			Kursevi^ kurs = gcnew Kursevi(this);
			kurs->ShowDialog();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}

	private: System::Void konverter_valuta_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			this->Hide();
			KonvertorValuta^ valute = gcnew KonvertorValuta(this);
			valute->ShowDialog();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void kreditni_kalkulator_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			this->Hide();
			KreditniKalkulator^ kreditni_kalku = gcnew KreditniKalkulator(this);
			kreditni_kalku->ShowDialog();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void izmena_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			this->Hide();
			IzmenaNaloga^ valute = gcnew IzmenaNaloga(login_page, this, user);
			valute->ShowDialog();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void zahtev_kredita_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			this->Hide();
			Kredit^ kredit = gcnew Kredit(this, user);
			kredit->ShowDialog();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void pregled_naloga_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			this->Hide();
			Kredit^ kredit = gcnew Kredit(this, user);
			kredit->ShowDialog();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void zatvaranje_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			this->Hide();
			ZatvaranjeNaloga^ zatvaranje = gcnew ZatvaranjeNaloga(this, user, login_page);
			zatvaranje->ShowDialog();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void promena_valuta_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			this->Hide();
			PromenaValute^ promena_valute = gcnew PromenaValute(this, user, login_page);
			promena_valute->ShowDialog();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
private: System::Void uplatnice_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			this->Hide();
			Uplatnica^ uplatnica = gcnew Uplatnica(this, user);
			uplatnica->ShowDialog();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void label14_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		panel5->Visible = true;
		panel5->Controls->Clear();
		Label^ pregled_transakcija = gcnew Label();
		pregled_transakcija->Location = Point(250, 80);
		pregled_transakcija->Text = L"Transakcije";
		pregled_transakcija->Cursor = Cursors::Hand;
		pregled_transakcija->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		pregled_transakcija->AutoSize = true;


		Label^ kursevi = gcnew Label();
		kursevi->Location = Point(250, 20);
		kursevi->Text = L"Kursevi";
		kursevi->Click += gcnew System::EventHandler(this, &Main::kursevi_Click);
		kursevi->Cursor = Cursors::Hand;
		kursevi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		kursevi->AutoSize = true;



		Label^ konverter_valuta = gcnew Label();
		konverter_valuta->Location = Point(400, 20);
		konverter_valuta->Click += gcnew System::EventHandler(this, &Main::konverter_valuta_Click);
		konverter_valuta->Text = L"Konverter Valuta";
		konverter_valuta->Cursor = Cursors::Hand;
		konverter_valuta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		konverter_valuta->AutoSize = true;


		Label^ promena_valuta = gcnew Label();
		promena_valuta->Location = Point(400, 80);
		promena_valuta->Click += gcnew System::EventHandler(this, &Main::promena_valuta_Click);
		promena_valuta->Text = L"Promena Valuta";
		promena_valuta->Cursor = Cursors::Hand;
		promena_valuta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		promena_valuta->AutoSize = true;



		panel5->Controls->Add(pregled_transakcija);
		panel5->Controls->Add(kursevi);
		panel5->Controls->Add(konverter_valuta);
		panel5->Controls->Add(promena_valuta);

	}


	private: System::Void label16_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		panel5->Visible = true;
		panel5->Controls->Clear();
		Label^ izmena = gcnew Label();
		izmena->Location = Point(250, 20);
		izmena->Text = L"Izmena";
		izmena->Click += gcnew System::EventHandler(this, &Main::izmena_Click);
		izmena->Cursor = Cursors::Hand;
		izmena->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		izmena->AutoSize = true;

		Label^ pregled_naloga = gcnew Label();
		pregled_naloga->Location = Point(250, 80);
		pregled_naloga->Text = L"Pregled";
		pregled_naloga->Click += gcnew System::EventHandler(this, &Main::pregled_naloga_Click);
		pregled_naloga->Cursor = Cursors::Hand;
		pregled_naloga->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		pregled_naloga->AutoSize = true;

		Label^ zatvaranje = gcnew Label();
		zatvaranje->Location = Point(400, 20);
		zatvaranje->Text = L"Zatvaranje";
		zatvaranje->Click += gcnew System::EventHandler(this, &Main::zatvaranje_Click);
		zatvaranje->Cursor = Cursors::Hand;
		zatvaranje->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		zatvaranje->AutoSize = true;

		Label^ pozadina = gcnew Label();
		pozadina->Location = Point(400, 80);
		pozadina->Text = L"Pozadina";
		pozadina->Click += gcnew System::EventHandler(this, &Main::pozadina_Click);
		pozadina->Cursor = Cursors::Hand;
		pozadina->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		pozadina->AutoSize = true;

		

		panel5->Controls->Add(izmena);
		panel5->Controls->Add(zatvaranje);
		panel5->Controls->Add(pozadina);
		panel5->Controls->Add(pregled_naloga);
	}
	private: System::Void label15_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		panel5->Visible = true;
		panel5->Controls->Clear();
		Label^ kreditni_kalkulator = gcnew Label();
		kreditni_kalkulator->Location = Point(250, 20);
		kreditni_kalkulator->Text = L"Kreditni Kalkulator";
		kreditni_kalkulator->Click += gcnew System::EventHandler(this, &Main::kreditni_kalkulator_Click);
		kreditni_kalkulator->Cursor = Cursors::Hand;
		kreditni_kalkulator->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		kreditni_kalkulator->AutoSize = true;


		Label^ zahtev_kredita = gcnew Label();
		zahtev_kredita->Location = Point(250, 80);
		zahtev_kredita->Text = L"Zahtev Kredita";
		zahtev_kredita->Click += gcnew System::EventHandler(this, &Main::zahtev_kredita_Click);
		zahtev_kredita->Cursor = Cursors::Hand;
		zahtev_kredita->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		zahtev_kredita->AutoSize = true;

		panel5->Controls->Add(kreditni_kalkulator);
		panel5->Controls->Add(zahtev_kredita);
	}
	private: System::Void label17_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		panel5->Visible = true;
		panel5->Controls->Clear();
		Label^ placanje_racuna = gcnew Label();
		placanje_racuna->Location = Point(250, 20);
		placanje_racuna->Text = L"Plaćanje";
		//placanje_racuna->Click += gcnew System::EventHandler(this, &Main::placanje_racuna_Click);
		placanje_racuna->Cursor = Cursors::Hand;
		placanje_racuna->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		placanje_racuna->AutoSize = true;

		Label^ uplatnice = gcnew Label();
		uplatnice->Location = Point(250, 80);
		uplatnice->Text = L"Uplatnice";
		uplatnice->Click += gcnew System::EventHandler(this, &Main::uplatnice_Click);
		uplatnice->Cursor = Cursors::Hand;
		uplatnice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		uplatnice->AutoSize = true;

		Label^ cekovi = gcnew Label();
		cekovi->Location = Point(400, 20);
		cekovi->Text = L"Čekovi";
		//cekovi->Click += gcnew System::EventHandler(this, &Main::cekovi_Click);
		cekovi->Cursor = Cursors::Hand;
		cekovi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		cekovi->AutoSize = true;

		panel5->Controls->Add(placanje_racuna);
		panel5->Controls->Add(uplatnice);
		panel5->Controls->Add(cekovi);
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			map<pair<string, string>, map<string, string>> config = {
				{make_pair(fieldToString(""), fieldToString(textBox1->Text)) , {
					{"required", "true"},
					{"number", "true"},
				}},
			};
			Validator::Login l(config);
			if (l.validationPassed() && fieldToDouble(textBox1->Text) <= user.novac) {
				user.novac -= fieldToDouble(textBox1->Text);
				string datum = currentDateTimeToString("dd/MM/yyyy HH:mm:ss");
				transakcije.addFields("idNaloga", "tipTransakcije", "kolicina", "datum", "deskripcija", "mudjustanjePosiljalaca");
				transakcije.addValues(
					to_string(user.id),
					"Isplata",
					fieldToString(textBox1->Text),
					datum,
					"Isplata novca",
					to_string(user.novac)
				);
				Transkacije transakcija;
				transakcija.idNaloga = user.id;
				transakcija.tipTranskacije = "Isplata";
				transakcija.kolicina = fieldToDouble(textBox1->Text);
				transakcija.datum = stringToDatetime(datum);
				transakcija.deskripcija = "Isplata novca";
				transakcija.medjustanjeNaloga = user.novac;
				sve_transakcije.push_back(transakcija);
				popuniTransakcije(dataGridView1, button14, 13);
				transakcije.AddUser();
				nalozi.updateField("novac", "id = '" + to_string(user.id) + "'", to_string(user.novac));
				label3->Text = toField(format_novac(user.novac)) + " " + toField(user.valuta);
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
		
	}
};
}