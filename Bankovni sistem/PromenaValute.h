#pragma once
#include "Funkcije - Varijable.h"
#include "bazapodataka.h"
namespace Bankovnisistem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PromenaValute
	/// </summary>
	public ref class PromenaValute : public System::Windows::Forms::Form
	{
	public:
		Form^ main;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	public:
		Form^ login;
		PromenaValute(void)
		{
			InitializeComponent();
		}
		PromenaValute(Form^ main, const User& data, Form^ login)
		{
			this->main = main;
			this->login = login;
			user = data;
			sve_transakcije = transakcije.FetchTranskacije("*", "idNaloga = '" + to_string(user.id) + "'");
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PromenaValute()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label4;
	protected:
	private: System::Windows::Forms::Label^ label1;




	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button1;
	private: System::ComponentModel::IContainer^ components;



	protected:







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PromenaValute::typeid));
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(62, 175);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(64, 25);
			this->label4->TabIndex = 34;
			this->label4->Text = L"label4";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(109, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(216, 31);
			this->label1->TabIndex = 29;
			this->label1->Text = L"Konvertor Valuta";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(172, 80);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(64, 25);
			this->label7->TabIndex = 37;
			this->label7->Text = L"label7";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownHeight = 150;
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->IntegralHeight = false;
			this->comboBox1->Location = System::Drawing::Point(177, 123);
			this->comboBox1->MinimumSize = System::Drawing::Size(67, 0);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(67, 33);
			this->comboBox1->TabIndex = 38;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &PromenaValute::comboBox1_SelectedIndexChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(2, 80);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(154, 25);
			this->label6->TabIndex = 39;
			this->label6->Text = L"Trenutno stanje:";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Location = System::Drawing::Point(55, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(440, 280);
			this->panel1->TabIndex = 40;
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(153, 223);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 42);
			this->button1->TabIndex = 40;
			this->button1->Text = L"Konvertuj";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &PromenaValute::button1_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &PromenaValute::timer1_Tick);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(164, 44);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(202, 205);
			this->pictureBox1->TabIndex = 41;
			this->pictureBox1->TabStop = false;
			// 
			// PromenaValute
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(545, 294);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox1);
			this->MaximumSize = System::Drawing::Size(561, 333);
			this->MinimumSize = System::Drawing::Size(561, 333);
			this->Name = L"PromenaValute";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"PromenaValute";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &PromenaValute::PromenaValute_FormClosed);
			this->Load += gcnew System::EventHandler(this, &PromenaValute::PromenaValute_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void PromenaValute_Load(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			for (auto el : valute)comboBox1->Items->Add(toField(el));
			comboBox1->SelectedIndex = 1;
			label7->Text = toField(format_novac(user.novac)) + " " + toField(user.valuta);
			label4->Text = toField(format_novac(user.novac)) + " " + toField(user.valuta) + " iznosi "
				+ toField(format_novac(konverterValuta(user.novac, user.valuta, fieldToString(comboBox1->Text))))
				+ comboBox1->Text;

		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void PromenaValute_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		this->Hide();
		main->Show();
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		label4->Text = toField(format_novac(user.novac)) + " " + toField(user.valuta) + " iznosi "
			+ toField(format_novac(konverterValuta(user.novac, user.valuta, fieldToString(comboBox1->Text))))
			+ " " + comboBox1->Text;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		nalozi.updateField("valuta", "id = '" + to_string(user.id) + "'", fieldToString(comboBox1->Text));
		nalozi.updateField("novac", "id = '" + to_string(user.id) + "'", to_string(konverterValuta(user.novac, user.valuta, fieldToString(comboBox1->Text))));
		auto ostale_transakcije = transakcije.FetchTranskacije("*", "idPrimalac = '" + to_string(user.id) + "'");
		for (auto& el : sve_transakcije) {
			transakcije.updateField("mudjustanjePosiljalaca", "idTransakcije = '" + to_string(el.idTranskacije) + "'",
				to_string(konverterValuta(el.medjustanjeNaloga, user.valuta, fieldToString(comboBox1->Text))));
			transakcije.updateField("kolicina", "idTransakcije = '" + to_string(el.idTranskacije) + "'",
				to_string(konverterValuta(el.kolicina, user.valuta, fieldToString(comboBox1->Text))));
		}
		for (auto& el : ostale_transakcije) {
			transakcije.updateField("mudjustanjePrimalaca", "idTransakcije = '" + to_string(el.idTranskacije) + "'",
				to_string(konverterValuta(el.medjustanjePrimalaca, user.valuta, fieldToString(comboBox1->Text))));
		}
		panel1->Visible = false;
		this->Cursor = Cursors::AppStarting;
		pictureBox1->Cursor = Cursors::AppStarting;
		this->BackColor = Color::Gray;
		timer1->Start();
	}
	private: int timer = 0;
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		timer++;
		if (timer == 3) {
			this->Hide();
			login->Show();
			timer1->Stop();
		}
	}
};
}
