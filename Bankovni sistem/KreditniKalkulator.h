#pragma once
#include "Validator.h"
#include "Konverzije.h"
#include "Funkcije - Varijable.h"
#include "bazapodataka.h"
#include <string>
namespace Bankovnisistem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for KreditniKalkulator
	/// </summary>
	public ref class KreditniKalkulator : public System::Windows::Forms::Form
	{
	public:
		Form^ main;
		KreditniKalkulator(void)
		{
			InitializeComponent();
		}
		KreditniKalkulator(Form^ main)
		{
			this->main = main;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~KreditniKalkulator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ IznosKreditaNaslov;
	protected:




	private: System::Windows::Forms::Label^ KamatnaStopaNaslov;


	private: System::Windows::Forms::Label^ PeriodOtplateNaslov;
	private: System::Windows::Forms::RadioButton^ EUR;
	private: System::Windows::Forms::RadioButton^ radioButton1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ Izracunaj;
	private: System::Windows::Forms::Button^ Back;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::MaskedTextBox^ PeriodOtplate;
	private: System::Windows::Forms::MaskedTextBox^ KamatnaStopa;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::MaskedTextBox^ IznosKredita;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(KreditniKalkulator::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->IznosKreditaNaslov = (gcnew System::Windows::Forms::Label());
			this->KamatnaStopaNaslov = (gcnew System::Windows::Forms::Label());
			this->PeriodOtplateNaslov = (gcnew System::Windows::Forms::Label());
			this->EUR = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Izracunaj = (gcnew System::Windows::Forms::Button());
			this->Back = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PeriodOtplate = (gcnew System::Windows::Forms::MaskedTextBox());
			this->KamatnaStopa = (gcnew System::Windows::Forms::MaskedTextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->IznosKredita = (gcnew System::Windows::Forms::MaskedTextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// IznosKreditaNaslov
			// 
			this->IznosKreditaNaslov->AutoSize = true;
			this->IznosKreditaNaslov->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->IznosKreditaNaslov->Location = System::Drawing::Point(62, 34);
			this->IznosKreditaNaslov->Name = L"IznosKreditaNaslov";
			this->IznosKreditaNaslov->Size = System::Drawing::Size(182, 24);
			this->IznosKreditaNaslov->TabIndex = 0;
			this->IznosKreditaNaslov->Text = L"Traženi iznos kredita";
			// 
			// KamatnaStopaNaslov
			// 
			this->KamatnaStopaNaslov->AutoSize = true;
			this->KamatnaStopaNaslov->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->KamatnaStopaNaslov->Location = System::Drawing::Point(404, 32);
			this->KamatnaStopaNaslov->Name = L"KamatnaStopaNaslov";
			this->KamatnaStopaNaslov->Size = System::Drawing::Size(209, 24);
			this->KamatnaStopaNaslov->TabIndex = 4;
			this->KamatnaStopaNaslov->Text = L"Godišnja kamatna stopa";
			// 
			// PeriodOtplateNaslov
			// 
			this->PeriodOtplateNaslov->AutoSize = true;
			this->PeriodOtplateNaslov->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->PeriodOtplateNaslov->Location = System::Drawing::Point(669, 34);
			this->PeriodOtplateNaslov->Name = L"PeriodOtplateNaslov";
			this->PeriodOtplateNaslov->Size = System::Drawing::Size(125, 24);
			this->PeriodOtplateNaslov->TabIndex = 6;
			this->PeriodOtplateNaslov->Text = L"Period otplate";
			// 
			// EUR
			// 
			this->EUR->AutoSize = true;
			this->EUR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EUR->Location = System::Drawing::Point(278, 66);
			this->EUR->Name = L"EUR";
			this->EUR->Size = System::Drawing::Size(36, 24);
			this->EUR->TabIndex = 8;
			this->EUR->TabStop = true;
			this->EUR->Text = L"€";
			this->EUR->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->Location = System::Drawing::Point(320, 66);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(48, 24);
			this->radioButton1->TabIndex = 9;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"din";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(727, 63);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 25);
			this->label2->TabIndex = 11;
			this->label2->Text = L"meseci";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(468, 62);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(30, 25);
			this->label3->TabIndex = 12;
			this->label3->Text = L"%";
			// 
			// Izracunaj
			// 
			this->Izracunaj->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Izracunaj->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Izracunaj->Location = System::Drawing::Point(347, 115);
			this->Izracunaj->Name = L"Izracunaj";
			this->Izracunaj->Size = System::Drawing::Size(178, 44);
			this->Izracunaj->TabIndex = 13;
			this->Izracunaj->Text = L"Izračunaj";
			this->Izracunaj->UseVisualStyleBackColor = true;
			this->Izracunaj->Click += gcnew System::EventHandler(this, &KreditniKalkulator::Izracunaj_Click);
			// 
			// Back
			// 
			this->Back->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Back.BackgroundImage")));
			this->Back->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Back->FlatAppearance->BorderSize = 0;
			this->Back->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Back->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Back->Location = System::Drawing::Point(6, 6);
			this->Back->Name = L"Back";
			this->Back->Size = System::Drawing::Size(37, 32);
			this->Back->TabIndex = 39;
			this->Back->UseVisualStyleBackColor = true;
			this->Back->Click += gcnew System::EventHandler(this, &KreditniKalkulator::Back_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::Control;
			this->dataGridView1->Location = System::Drawing::Point(382, 190);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dataGridView1->Size = System::Drawing::Size(473, 251);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->Visible = false;
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column1->HeaderText = L"Mesec";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 81;
			// 
			// Column2
			// 
			this->Column2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column2->HeaderText = L"Rata";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 69;
			// 
			// Column3
			// 
			this->Column3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column3->HeaderText = L"Kamata";
			this->Column3->Name = L"Column3";
			this->Column3->Width = 89;
			// 
			// Column4
			// 
			this->Column4->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column4->HeaderText = L"Glavnica";
			this->Column4->Name = L"Column4";
			this->Column4->Width = 95;
			// 
			// Column5
			// 
			this->Column5->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column5->HeaderText = L"Ostatak Duga";
			this->Column5->Name = L"Column5";
			this->Column5->Width = 133;
			// 
			// PeriodOtplate
			// 
			this->PeriodOtplate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PeriodOtplate->Location = System::Drawing::Point(672, 61);
			this->PeriodOtplate->Mask = L"000";
			this->PeriodOtplate->Name = L"PeriodOtplate";
			this->PeriodOtplate->Size = System::Drawing::Size(55, 29);
			this->PeriodOtplate->TabIndex = 40;
			this->PeriodOtplate->Click += gcnew System::EventHandler(this, &KreditniKalkulator::PeriodOtplate_Click);
			// 
			// KamatnaStopa
			// 
			this->KamatnaStopa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->KamatnaStopa->Location = System::Drawing::Point(413, 57);
			this->KamatnaStopa->Mask = L"00,0";
			this->KamatnaStopa->Name = L"KamatnaStopa";
			this->KamatnaStopa->Size = System::Drawing::Size(55, 29);
			this->KamatnaStopa->TabIndex = 41;
			this->KamatnaStopa->Click += gcnew System::EventHandler(this, &KreditniKalkulator::KamatnaStopa_Click);
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(12, 190);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(364, 251);
			this->panel1->TabIndex = 42;
			this->panel1->Visible = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(196, 130);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(45, 16);
			this->label9->TabIndex = 6;
			this->label9->Text = L"label9";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(196, 96);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(45, 16);
			this->label8->TabIndex = 5;
			this->label8->Text = L"label8";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(196, 62);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(45, 16);
			this->label7->TabIndex = 4;
			this->label7->Text = L"label7";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(14, 130);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(45, 16);
			this->label6->TabIndex = 3;
			this->label6->Text = L"label6";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(14, 96);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(45, 16);
			this->label5->TabIndex = 2;
			this->label5->Text = L"label5";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(14, 62);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 16);
			this->label4->TabIndex = 1;
			this->label4->Text = L"label4";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(13, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(132, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Detalji Kredita";
			// 
			// IznosKredita
			// 
			this->IznosKredita->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IznosKredita->Location = System::Drawing::Point(66, 61);
			this->IznosKredita->Mask = L"00000000";
			this->IznosKredita->Name = L"IznosKredita";
			this->IznosKredita->Size = System::Drawing::Size(197, 29);
			this->IznosKredita->TabIndex = 43;
			this->IznosKredita->Click += gcnew System::EventHandler(this, &KreditniKalkulator::IznosKredita_Click);
			// 
			// KreditniKalkulator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(859, 472);
			this->Controls->Add(this->IznosKredita);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->KamatnaStopa);
			this->Controls->Add(this->PeriodOtplate);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->Back);
			this->Controls->Add(this->Izracunaj);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->EUR);
			this->Controls->Add(this->PeriodOtplateNaslov);
			this->Controls->Add(this->KamatnaStopaNaslov);
			this->Controls->Add(this->IznosKreditaNaslov);
			this->MaximizeBox = false;
			this->Name = L"KreditniKalkulator";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Kreditni Kalkulator";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &KreditniKalkulator::KreditniKalkulator_FormClosed);
			this->Load += gcnew System::EventHandler(this, &KreditniKalkulator::KreditniKalkulator_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Izracunaj_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			double iznosKredita = fieldToDouble(IznosKredita->Text);
			double kamatnaStopa = fieldToDouble(KamatnaStopa->Text);
			double periodOtplate = fieldToDouble(PeriodOtplate->Text);
			double jednaRata = rata(iznosKredita, periodOtplate, kamatnaStopa);
			vector<double> kamate = kamataZaSvakiMesec(iznosKredita, kamatnaStopa, periodOtplate);
			vector<double> glavnice = glavnicaZaSvakiMesec(iznosKredita, kamatnaStopa, periodOtplate);
			double kamata = ukupnaKamata(iznosKredita, kamatnaStopa, periodOtplate);
			int i;
			double ostatak_duga = iznosKredita;
			dataGridView1->RowCount = (int)periodOtplate;
			for (i = 0; i < periodOtplate; i++)
			{
				if (i % 2 == 0) for (int j = 0; j < 5; j++) dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::LightGray;
				dataGridView1->Rows[i]->Cells[0]->Value = toField(i + 1) + ".";
				dataGridView1->Rows[i]->Cells[1]->Value = toField(format_novac(jednaRata, 2));
				dataGridView1->Rows[i]->Cells[2]->Value = toField(format_novac(kamate[i], 2));
				dataGridView1->Rows[i]->Cells[3]->Value = toField(format_novac(glavnice[i], 2));
				ostatak_duga -= glavnice[i];
				dataGridView1->Rows[i]->Cells[4]->Value = toField(format_novac(ostatak_duga, 2));
			}
			label4->Text = L"Mesečna rata: " + toField(format_novac(jednaRata, 2));
			label5->Text = L"Iznos kredita: " + toField(format_novac(iznosKredita, 2));
			label6->Text = L"Ukupno otplate: " + toField(format_novac(kamata + iznosKredita, 2));
			label7->Text = L"Ukupno kredita: " + toField(format_novac(kamata, 2));
			label8->Text = L"Kamata: " + toField(kamatnaStopa) + " %";
			label9->Text = L"Period otplate: " + toField(periodOtplate) + " meseci";
			dataGridView1->Visible = true;
			panel1->Visible = true;
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
		
	}
	private: System::Void Back_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			this->Hide();
			main->Show();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
		
	}
	private: System::Void KreditniKalkulator_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		try
		{
			this->Hide();
			main->Show();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}	
	private: System::Void KreditniKalkulator_Load(System::Object^ sender, System::EventArgs^ e) {
		KamatnaStopa->PromptChar = ' ';
		PeriodOtplate->PromptChar = ' ';
		IznosKredita->PromptChar = ' ';
	}
	private: System::Void KamatnaStopa_Click(System::Object^ sender, System::EventArgs^ e) {
		regex rgx1("([^0-9])\\.");
		regex rgx2("\\s");
		string field = fieldToString(KamatnaStopa->Text);
		field = regex_replace(field, rgx1, "");
		field = regex_replace(field, rgx2, "");
		KamatnaStopa->SelectionStart = field.size();
	}
	private: System::Void PeriodOtplate_Click(System::Object^ sender, System::EventArgs^ e) {
		PeriodOtplate->SelectionStart = StringTools::trim(fieldToString(PeriodOtplate->Text)).size();
	}
	private: System::Void IznosKredita_Click(System::Object^ sender, System::EventArgs^ e) {
		IznosKredita->SelectionStart = StringTools::trim(fieldToString(IznosKredita->Text)).size();
	}
};
}
