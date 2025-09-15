#pragma once
#include "Validator.h"
#include "Konverzije.h"
#include "Funkcije - Varijable.h"
#include "bazapodataka.h"
#include <string>
#include <vcclr.h>
#include <utility>
#include "Main.h"

namespace Bankovnisistem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	inline void ispis(gcroot<Label^> label) {
		MessageBox::Show(label->Text);
	}

	/// <summary>
	/// Summary for Registracija
	///
	/// </summary>
	public ref class Registracija : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		Registracija(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Registracija(Form^ obj1) {
			obj = obj1;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Registracija()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:










	private: System::Windows::Forms::Label^ PunoImeNaslov;
	private: System::Windows::Forms::Label^ BrojTelefonaNaslov;



	private: System::Windows::Forms::TextBox^ Email;
	private: System::Windows::Forms::Label^ JmbgNaslov;
	private: System::Windows::Forms::Label^ EmailNaslov;

	private: System::Windows::Forms::Label^ LozinkaNaslov;





	private: System::Windows::Forms::Button^ RandomLozinkaDugme;
	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::Button^ Back;
	private: System::Windows::Forms::CheckBox^ PrikazivanjeLozinke;
	private: System::Windows::Forms::Button^ Unos;
	private: System::Windows::Forms::MaskedTextBox^ BrojTelefona;

	private: System::Windows::Forms::ComboBox^ Pol;






	private: System::Windows::Forms::Label^ DatumRodjenjaNaslov;
	private: System::Windows::Forms::ComboBox^ Dan;
	private: System::Windows::Forms::ComboBox^ Mesec;


	private: System::Windows::Forms::Panel^ PunoImePanel;


	private: System::Windows::Forms::Panel^ DatumRodjenjaPanel;



	private: System::Windows::Forms::Panel^ BrojTelefonaPanel;
	private: System::Windows::Forms::Panel^ EmailPanel;
	private: System::Windows::Forms::Panel^ JmbgPanel;
	private: System::Windows::Forms::Panel^ LozinkaPanel;
	private: System::Windows::Forms::Panel^ PrebivalistePanel;

	private: System::Windows::Forms::ComboBox^ Drzava;




	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::RadioButton^ USD;




	private: System::Windows::Forms::Panel^ ValutePanel;
	private: System::Windows::Forms::RadioButton^ EUR;

	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::RadioButton^ RSD;

	private: System::Windows::Forms::Panel^ TipNalogaPanel;
	private: System::Windows::Forms::ComboBox^ TipNaloga;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Panel^ NapomenaPanel;

	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::RichTextBox^ Napomena;

	private: System::Windows::Forms::GroupBox^ groupBox1;

	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::MaskedTextBox^ PostanskiBroj;
	private: System::Windows::Forms::MaskedTextBox^ Jmbg;

	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::ComboBox^ Godina;

	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::GroupBox^ groupBox8;
	private: System::Windows::Forms::GroupBox^ groupBox7;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::RichTextBox^ Prezime;

	private: System::Windows::Forms::RichTextBox^ Ime;

	private: System::Windows::Forms::GroupBox^ groupBox10;
	private: System::Windows::Forms::RichTextBox^ Grad;
	private: System::Windows::Forms::GroupBox^ groupBox9;
	private: System::Windows::Forms::RichTextBox^ Adresa;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ PrezimeLabel;

	private: System::Windows::Forms::Label^ ImeLabel;

	private: System::Windows::Forms::Label^ PolLabel;

	private: System::Windows::Forms::Label^ GodinaLabel;
	private: System::Windows::Forms::Label^ MesecLabel;
	private: System::Windows::Forms::Label^ DanLabel;
	private: System::Windows::Forms::Label^ BrojTelefonaLabel;
	private: System::Windows::Forms::Label^ EmailLabel;
	private: System::Windows::Forms::Label^ JmbgLabel;
	private: System::Windows::Forms::Label^ LozinkaLabel;
	private: System::Windows::Forms::Label^ DrzavaLabel;
	private: System::Windows::Forms::Label^ PostanskiBrojLabel;
	private: System::Windows::Forms::Label^ GradLabel;
	private: System::Windows::Forms::Label^ AdresaLabel;
	private: System::Windows::Forms::Label^ TipNalogaLabel;
	private: System::Windows::Forms::Panel^ GlavniPanel;
	private: System::Windows::Forms::GroupBox^ groupBox11;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::GroupBox^ groupBox12;
	private: System::Windows::Forms::TextBox^ PotvrdiEmail;
	private: System::Windows::Forms::GroupBox^ groupBox14;
	private: System::Windows::Forms::TextBox^ PotvrdiLozinku;
	private: System::Windows::Forms::GroupBox^ groupBox13;
	private: System::Windows::Forms::TextBox^ Lozinka;
	private: System::Windows::Forms::Label^ PotvrdiEmailLabel;
	private: System::Windows::Forms::Label^ PotvrdiLozinkuLabel;



	private: System::ComponentModel::IContainer^ components;




	protected:

	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Registracija::typeid));
			this->PunoImeNaslov = (gcnew System::Windows::Forms::Label());
			this->BrojTelefonaNaslov = (gcnew System::Windows::Forms::Label());
			this->Email = (gcnew System::Windows::Forms::TextBox());
			this->JmbgNaslov = (gcnew System::Windows::Forms::Label());
			this->EmailNaslov = (gcnew System::Windows::Forms::Label());
			this->LozinkaNaslov = (gcnew System::Windows::Forms::Label());
			this->RandomLozinkaDugme = (gcnew System::Windows::Forms::Button());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->Back = (gcnew System::Windows::Forms::Button());
			this->PrikazivanjeLozinke = (gcnew System::Windows::Forms::CheckBox());
			this->Unos = (gcnew System::Windows::Forms::Button());
			this->BrojTelefona = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Pol = (gcnew System::Windows::Forms::ComboBox());
			this->DatumRodjenjaNaslov = (gcnew System::Windows::Forms::Label());
			this->Dan = (gcnew System::Windows::Forms::ComboBox());
			this->Mesec = (gcnew System::Windows::Forms::ComboBox());
			this->PunoImePanel = (gcnew System::Windows::Forms::Panel());
			this->PrezimeLabel = (gcnew System::Windows::Forms::Label());
			this->ImeLabel = (gcnew System::Windows::Forms::Label());
			this->PolLabel = (gcnew System::Windows::Forms::Label());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->Prezime = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->Ime = (gcnew System::Windows::Forms::RichTextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->DatumRodjenjaPanel = (gcnew System::Windows::Forms::Panel());
			this->GodinaLabel = (gcnew System::Windows::Forms::Label());
			this->MesecLabel = (gcnew System::Windows::Forms::Label());
			this->DanLabel = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->Godina = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->BrojTelefonaPanel = (gcnew System::Windows::Forms::Panel());
			this->BrojTelefonaLabel = (gcnew System::Windows::Forms::Label());
			this->EmailPanel = (gcnew System::Windows::Forms::Panel());
			this->PotvrdiEmailLabel = (gcnew System::Windows::Forms::Label());
			this->groupBox12 = (gcnew System::Windows::Forms::GroupBox());
			this->PotvrdiEmail = (gcnew System::Windows::Forms::TextBox());
			this->groupBox11 = (gcnew System::Windows::Forms::GroupBox());
			this->EmailLabel = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->JmbgPanel = (gcnew System::Windows::Forms::Panel());
			this->JmbgLabel = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Jmbg = (gcnew System::Windows::Forms::MaskedTextBox());
			this->LozinkaPanel = (gcnew System::Windows::Forms::Panel());
			this->PotvrdiLozinkuLabel = (gcnew System::Windows::Forms::Label());
			this->groupBox14 = (gcnew System::Windows::Forms::GroupBox());
			this->PotvrdiLozinku = (gcnew System::Windows::Forms::TextBox());
			this->groupBox13 = (gcnew System::Windows::Forms::GroupBox());
			this->Lozinka = (gcnew System::Windows::Forms::TextBox());
			this->LozinkaLabel = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->PrebivalistePanel = (gcnew System::Windows::Forms::Panel());
			this->DrzavaLabel = (gcnew System::Windows::Forms::Label());
			this->PostanskiBrojLabel = (gcnew System::Windows::Forms::Label());
			this->GradLabel = (gcnew System::Windows::Forms::Label());
			this->AdresaLabel = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->groupBox10 = (gcnew System::Windows::Forms::GroupBox());
			this->Grad = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->Adresa = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->Drzava = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->PostanskiBroj = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->USD = (gcnew System::Windows::Forms::RadioButton());
			this->ValutePanel = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->RSD = (gcnew System::Windows::Forms::RadioButton());
			this->EUR = (gcnew System::Windows::Forms::RadioButton());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->TipNalogaPanel = (gcnew System::Windows::Forms::Panel());
			this->TipNalogaLabel = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->TipNaloga = (gcnew System::Windows::Forms::ComboBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->NapomenaPanel = (gcnew System::Windows::Forms::Panel());
			this->Napomena = (gcnew System::Windows::Forms::RichTextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->GlavniPanel = (gcnew System::Windows::Forms::Panel());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->PunoImePanel->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->DatumRodjenjaPanel->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->BrojTelefonaPanel->SuspendLayout();
			this->EmailPanel->SuspendLayout();
			this->groupBox12->SuspendLayout();
			this->groupBox11->SuspendLayout();
			this->JmbgPanel->SuspendLayout();
			this->LozinkaPanel->SuspendLayout();
			this->groupBox14->SuspendLayout();
			this->groupBox13->SuspendLayout();
			this->PrebivalistePanel->SuspendLayout();
			this->groupBox10->SuspendLayout();
			this->groupBox9->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->ValutePanel->SuspendLayout();
			this->TipNalogaPanel->SuspendLayout();
			this->NapomenaPanel->SuspendLayout();
			this->GlavniPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// PunoImeNaslov
			// 
			this->PunoImeNaslov->AutoSize = true;
			this->PunoImeNaslov->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PunoImeNaslov->Location = System::Drawing::Point(9, 3);
			this->PunoImeNaslov->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->PunoImeNaslov->Name = L"PunoImeNaslov";
			this->PunoImeNaslov->Size = System::Drawing::Size(114, 26);
			this->PunoImeNaslov->TabIndex = 13;
			this->PunoImeNaslov->Text = L"Puno Ime";
			// 
			// BrojTelefonaNaslov
			// 
			this->BrojTelefonaNaslov->AutoSize = true;
			this->BrojTelefonaNaslov->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BrojTelefonaNaslov->Location = System::Drawing::Point(4, 14);
			this->BrojTelefonaNaslov->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->BrojTelefonaNaslov->Name = L"BrojTelefonaNaslov";
			this->BrojTelefonaNaslov->Size = System::Drawing::Size(153, 26);
			this->BrojTelefonaNaslov->TabIndex = 15;
			this->BrojTelefonaNaslov->Text = L"Broj Telefona";
			// 
			// Email
			// 
			this->Email->BackColor = System::Drawing::Color::White;
			this->Email->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Email->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Email->Location = System::Drawing::Point(7, 24);
			this->Email->Margin = System::Windows::Forms::Padding(4);
			this->Email->Multiline = true;
			this->Email->Name = L"Email";
			this->Email->Size = System::Drawing::Size(296, 29);
			this->Email->TabIndex = 27;
			this->Email->WordWrap = false;
			this->Email->TextChanged += gcnew System::EventHandler(this, &Registracija::Email_TextChanged);
			this->Email->Enter += gcnew System::EventHandler(this, &Registracija::Email_Enter);
			this->Email->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Registracija::Email_KeyDown);
			this->Email->Leave += gcnew System::EventHandler(this, &Registracija::Email_Leave);
			// 
			// JmbgNaslov
			// 
			this->JmbgNaslov->AutoSize = true;
			this->JmbgNaslov->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->JmbgNaslov->Location = System::Drawing::Point(2, 14);
			this->JmbgNaslov->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->JmbgNaslov->Name = L"JmbgNaslov";
			this->JmbgNaslov->Size = System::Drawing::Size(77, 26);
			this->JmbgNaslov->TabIndex = 26;
			this->JmbgNaslov->Text = L"JMBG";
			// 
			// EmailNaslov
			// 
			this->EmailNaslov->AutoSize = true;
			this->EmailNaslov->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EmailNaslov->Location = System::Drawing::Point(7, 14);
			this->EmailNaslov->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->EmailNaslov->Name = L"EmailNaslov";
			this->EmailNaslov->Size = System::Drawing::Size(81, 26);
			this->EmailNaslov->TabIndex = 28;
			this->EmailNaslov->Text = L"E-mail";
			// 
			// LozinkaNaslov
			// 
			this->LozinkaNaslov->AutoSize = true;
			this->LozinkaNaslov->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LozinkaNaslov->Location = System::Drawing::Point(4, 14);
			this->LozinkaNaslov->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LozinkaNaslov->Name = L"LozinkaNaslov";
			this->LozinkaNaslov->Size = System::Drawing::Size(94, 26);
			this->LozinkaNaslov->TabIndex = 30;
			this->LozinkaNaslov->Text = L"Lozinka";
			// 
			// RandomLozinkaDugme
			// 
			this->RandomLozinkaDugme->Location = System::Drawing::Point(661, 88);
			this->RandomLozinkaDugme->Name = L"RandomLozinkaDugme";
			this->RandomLozinkaDugme->Size = System::Drawing::Size(20, 20);
			this->RandomLozinkaDugme->TabIndex = 36;
			this->toolTip1->SetToolTip(this->RandomLozinkaDugme, L"Klikni za šifru");
			this->RandomLozinkaDugme->UseVisualStyleBackColor = true;
			this->RandomLozinkaDugme->Click += gcnew System::EventHandler(this, &Registracija::button2_Click);
			this->RandomLozinkaDugme->Enter += gcnew System::EventHandler(this, &Registracija::RandomLozinkaDugme_Enter);
			this->RandomLozinkaDugme->Leave += gcnew System::EventHandler(this, &Registracija::RandomLozinkaDugme_Leave);
			// 
			// Back
			// 
			this->Back->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Back.BackgroundImage")));
			this->Back->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Back->FlatAppearance->BorderSize = 0;
			this->Back->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Back->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Back->Location = System::Drawing::Point(12, 12);
			this->Back->Name = L"Back";
			this->Back->Size = System::Drawing::Size(41, 42);
			this->Back->TabIndex = 37;
			this->Back->UseVisualStyleBackColor = true;
			this->Back->Click += gcnew System::EventHandler(this, &Registracija::button3_Click);
			// 
			// PrikazivanjeLozinke
			// 
			this->PrikazivanjeLozinke->AutoSize = true;
			this->PrikazivanjeLozinke->Cursor = System::Windows::Forms::Cursors::Hand;
			this->PrikazivanjeLozinke->Location = System::Drawing::Point(14, 113);
			this->PrikazivanjeLozinke->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PrikazivanjeLozinke->Name = L"PrikazivanjeLozinke";
			this->PrikazivanjeLozinke->Size = System::Drawing::Size(79, 17);
			this->PrikazivanjeLozinke->TabIndex = 38;
			this->PrikazivanjeLozinke->Text = L"Prikaži šifru";
			this->PrikazivanjeLozinke->UseVisualStyleBackColor = true;
			this->PrikazivanjeLozinke->CheckedChanged += gcnew System::EventHandler(this, &Registracija::checkBox1_CheckedChanged);
			this->PrikazivanjeLozinke->Enter += gcnew System::EventHandler(this, &Registracija::PrikazivanjeLozinke_Enter);
			this->PrikazivanjeLozinke->Leave += gcnew System::EventHandler(this, &Registracija::PrikazivanjeLozinke_Leave);
			// 
			// Unos
			// 
			this->Unos->BackColor = System::Drawing::Color::ForestGreen;
			this->Unos->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Unos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Unos->Location = System::Drawing::Point(163, 151);
			this->Unos->Margin = System::Windows::Forms::Padding(4);
			this->Unos->Name = L"Unos";
			this->Unos->Size = System::Drawing::Size(335, 37);
			this->Unos->TabIndex = 21;
			this->Unos->Text = L"Unesi";
			this->Unos->UseVisualStyleBackColor = false;
			this->Unos->Click += gcnew System::EventHandler(this, &Registracija::button1_Click);
			// 
			// BrojTelefona
			// 
			this->BrojTelefona->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BrojTelefona->HidePromptOnLeave = true;
			this->BrojTelefona->Location = System::Drawing::Point(9, 47);
			this->BrojTelefona->Mask = L"+000 00 0000000";
			this->BrojTelefona->Name = L"BrojTelefona";
			this->BrojTelefona->Size = System::Drawing::Size(296, 29);
			this->BrojTelefona->TabIndex = 39;
			this->BrojTelefona->Click += gcnew System::EventHandler(this, &Registracija::BrojTelefona_Click);
			this->BrojTelefona->TextChanged += gcnew System::EventHandler(this, &Registracija::BrojTelefona_TextChanged);
			this->BrojTelefona->Enter += gcnew System::EventHandler(this, &Registracija::BrojTelefona_Enter);
			this->BrojTelefona->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Registracija::BrojTelefona_KeyDown);
			this->BrojTelefona->Leave += gcnew System::EventHandler(this, &Registracija::BrojTelefona_Leave);
			// 
			// Pol
			// 
			this->Pol->BackColor = System::Drawing::SystemColors::Window;
			this->Pol->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Pol->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Pol->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Pol->FormattingEnabled = true;
			this->Pol->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Musko", L"Zensko" });
			this->Pol->Location = System::Drawing::Point(7, 22);
			this->Pol->Name = L"Pol";
			this->Pol->Size = System::Drawing::Size(211, 30);
			this->Pol->TabIndex = 45;
			this->Pol->SelectedIndexChanged += gcnew System::EventHandler(this, &Registracija::Pol_TextChanged);
			this->Pol->Enter += gcnew System::EventHandler(this, &Registracija::Pol_Enter);
			this->Pol->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Registracija::Pol_KeyDown);
			this->Pol->Leave += gcnew System::EventHandler(this, &Registracija::Pol_Leave);
			// 
			// DatumRodjenjaNaslov
			// 
			this->DatumRodjenjaNaslov->AutoSize = true;
			this->DatumRodjenjaNaslov->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DatumRodjenjaNaslov->Location = System::Drawing::Point(5, 3);
			this->DatumRodjenjaNaslov->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->DatumRodjenjaNaslov->Name = L"DatumRodjenjaNaslov";
			this->DatumRodjenjaNaslov->Size = System::Drawing::Size(174, 26);
			this->DatumRodjenjaNaslov->TabIndex = 46;
			this->DatumRodjenjaNaslov->Text = L"Datum rodjenja";
			// 
			// Dan
			// 
			this->Dan->BackColor = System::Drawing::SystemColors::Window;
			this->Dan->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Dan->DropDownHeight = 150;
			this->Dan->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Dan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Dan->FormattingEnabled = true;
			this->Dan->IntegralHeight = false;
			this->Dan->Items->AddRange(gcnew cli::array< System::Object^  >(31) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", L"9",
					L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26", L"27",
					L"28", L"29", L"30", L"31"
			});
			this->Dan->Location = System::Drawing::Point(6, 23);
			this->Dan->Name = L"Dan";
			this->Dan->Size = System::Drawing::Size(211, 30);
			this->Dan->TabIndex = 47;
			this->Dan->SelectedIndexChanged += gcnew System::EventHandler(this, &Registracija::Dan_TextChanged);
			this->Dan->Enter += gcnew System::EventHandler(this, &Registracija::Dan_Enter);
			this->Dan->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Registracija::Dan_KeyDown);
			this->Dan->Leave += gcnew System::EventHandler(this, &Registracija::Dan_Leave);
			// 
			// Mesec
			// 
			this->Mesec->BackColor = System::Drawing::SystemColors::Window;
			this->Mesec->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Mesec->DropDownHeight = 150;
			this->Mesec->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Mesec->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Mesec->FormattingEnabled = true;
			this->Mesec->IntegralHeight = false;
			this->Mesec->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Januar", L"Februar", L"Mart", L"April", L"Maj", L"Jun",
					L"Jul ", L"Avgust", L"Septembar", L"Oktobar", L"Novembar", L"Decembar"
			});
			this->Mesec->Location = System::Drawing::Point(6, 23);
			this->Mesec->Name = L"Mesec";
			this->Mesec->Size = System::Drawing::Size(211, 30);
			this->Mesec->TabIndex = 48;
			this->Mesec->SelectedIndexChanged += gcnew System::EventHandler(this, &Registracija::Mesec_TextChanged);
			this->Mesec->Enter += gcnew System::EventHandler(this, &Registracija::Mesec_Enter);
			this->Mesec->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Registracija::Mesec_KeyDown);
			this->Mesec->Leave += gcnew System::EventHandler(this, &Registracija::Mesec_Leave);
			// 
			// PunoImePanel
			// 
			this->PunoImePanel->Controls->Add(this->PrezimeLabel);
			this->PunoImePanel->Controls->Add(this->ImeLabel);
			this->PunoImePanel->Controls->Add(this->PolLabel);
			this->PunoImePanel->Controls->Add(this->groupBox8);
			this->PunoImePanel->Controls->Add(this->groupBox7);
			this->PunoImePanel->Controls->Add(this->groupBox6);
			this->PunoImePanel->Controls->Add(this->label6);
			this->PunoImePanel->Controls->Add(this->PunoImeNaslov);
			this->PunoImePanel->Location = System::Drawing::Point(28, 13);
			this->PunoImePanel->Name = L"PunoImePanel";
			this->PunoImePanel->Size = System::Drawing::Size(689, 149);
			this->PunoImePanel->TabIndex = 50;
			// 
			// PrezimeLabel
			// 
			this->PrezimeLabel->AutoSize = true;
			this->PrezimeLabel->ForeColor = System::Drawing::Color::Red;
			this->PrezimeLabel->Location = System::Drawing::Point(456, 98);
			this->PrezimeLabel->Name = L"PrezimeLabel";
			this->PrezimeLabel->Size = System::Drawing::Size(70, 13);
			this->PrezimeLabel->TabIndex = 61;
			this->PrezimeLabel->Text = L"PrezimeLabel";
			// 
			// ImeLabel
			// 
			this->ImeLabel->AutoSize = true;
			this->ImeLabel->ForeColor = System::Drawing::Color::Red;
			this->ImeLabel->Location = System::Drawing::Point(228, 98);
			this->ImeLabel->Name = L"ImeLabel";
			this->ImeLabel->Size = System::Drawing::Size(50, 13);
			this->ImeLabel->TabIndex = 60;
			this->ImeLabel->Text = L"ImeLabel";
			// 
			// PolLabel
			// 
			this->PolLabel->AutoSize = true;
			this->PolLabel->ForeColor = System::Drawing::Color::Red;
			this->PolLabel->Location = System::Drawing::Point(3, 98);
			this->PolLabel->Name = L"PolLabel";
			this->PolLabel->Size = System::Drawing::Size(48, 13);
			this->PolLabel->TabIndex = 59;
			this->PolLabel->Text = L"PolLabel";
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->Pol);
			this->groupBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox8->Location = System::Drawing::Point(3, 32);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(224, 63);
			this->groupBox8->TabIndex = 57;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Pol";
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->Prezime);
			this->groupBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox7->ForeColor = System::Drawing::SystemColors::ControlText;
			this->groupBox7->Location = System::Drawing::Point(459, 32);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(224, 63);
			this->groupBox7->TabIndex = 56;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Prezime";
			// 
			// Prezime
			// 
			this->Prezime->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Prezime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Prezime->Location = System::Drawing::Point(6, 22);
			this->Prezime->Name = L"Prezime";
			this->Prezime->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->Prezime->Size = System::Drawing::Size(210, 30);
			this->Prezime->TabIndex = 41;
			this->Prezime->Text = L"";
			this->Prezime->WordWrap = false;
			this->Prezime->TextChanged += gcnew System::EventHandler(this, &Registracija::Prezime_TextChanged);
			this->Prezime->Enter += gcnew System::EventHandler(this, &Registracija::Prezime_Enter);
			this->Prezime->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Registracija::Prezime_KeyDown);
			this->Prezime->Leave += gcnew System::EventHandler(this, &Registracija::Prezime_Leave);
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->Ime);
			this->groupBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox6->Location = System::Drawing::Point(231, 32);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(224, 63);
			this->groupBox6->TabIndex = 55;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Ime";
			// 
			// Ime
			// 
			this->Ime->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Ime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ime->Location = System::Drawing::Point(7, 22);
			this->Ime->Name = L"Ime";
			this->Ime->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->Ime->Size = System::Drawing::Size(210, 30);
			this->Ime->TabIndex = 0;
			this->Ime->Text = L"";
			this->Ime->WordWrap = false;
			this->Ime->TextChanged += gcnew System::EventHandler(this, &Registracija::Ime_TextChanged);
			this->Ime->Enter += gcnew System::EventHandler(this, &Registracija::Ime_Enter);
			this->Ime->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Registracija::Ime_KeyDown);
			this->Ime->Leave += gcnew System::EventHandler(this, &Registracija::Ime_Leave);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Red;
			this->label6->Location = System::Drawing::Point(117, 6);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(21, 26);
			this->label6->TabIndex = 58;
			this->label6->Text = L"*";
			// 
			// DatumRodjenjaPanel
			// 
			this->DatumRodjenjaPanel->Controls->Add(this->GodinaLabel);
			this->DatumRodjenjaPanel->Controls->Add(this->MesecLabel);
			this->DatumRodjenjaPanel->Controls->Add(this->DanLabel);
			this->DatumRodjenjaPanel->Controls->Add(this->label7);
			this->DatumRodjenjaPanel->Controls->Add(this->groupBox5);
			this->DatumRodjenjaPanel->Controls->Add(this->groupBox4);
			this->DatumRodjenjaPanel->Controls->Add(this->groupBox3);
			this->DatumRodjenjaPanel->Controls->Add(this->DatumRodjenjaNaslov);
			this->DatumRodjenjaPanel->Location = System::Drawing::Point(28, 173);
			this->DatumRodjenjaPanel->Name = L"DatumRodjenjaPanel";
			this->DatumRodjenjaPanel->Size = System::Drawing::Size(689, 164);
			this->DatumRodjenjaPanel->TabIndex = 51;
			// 
			// GodinaLabel
			// 
			this->GodinaLabel->AutoSize = true;
			this->GodinaLabel->ForeColor = System::Drawing::Color::Red;
			this->GodinaLabel->Location = System::Drawing::Point(456, 110);
			this->GodinaLabel->Name = L"GodinaLabel";
			this->GodinaLabel->Size = System::Drawing::Size(67, 13);
			this->GodinaLabel->TabIndex = 64;
			this->GodinaLabel->Text = L"GodinaLabel";
			// 
			// MesecLabel
			// 
			this->MesecLabel->AutoSize = true;
			this->MesecLabel->ForeColor = System::Drawing::Color::Red;
			this->MesecLabel->Location = System::Drawing::Point(228, 110);
			this->MesecLabel->Name = L"MesecLabel";
			this->MesecLabel->Size = System::Drawing::Size(65, 13);
			this->MesecLabel->TabIndex = 63;
			this->MesecLabel->Text = L"MesecLabel";
			// 
			// DanLabel
			// 
			this->DanLabel->AutoSize = true;
			this->DanLabel->ForeColor = System::Drawing::Color::Red;
			this->DanLabel->Location = System::Drawing::Point(3, 110);
			this->DanLabel->Name = L"DanLabel";
			this->DanLabel->Size = System::Drawing::Size(53, 13);
			this->DanLabel->TabIndex = 62;
			this->DanLabel->Text = L"DanLabel";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Red;
			this->label7->Location = System::Drawing::Point(172, 2);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(21, 26);
			this->label7->TabIndex = 59;
			this->label7->Text = L"*";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->Godina);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox5->Location = System::Drawing::Point(459, 44);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(224, 63);
			this->groupBox5->TabIndex = 55;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Godina";
			// 
			// Godina
			// 
			this->Godina->BackColor = System::Drawing::SystemColors::Window;
			this->Godina->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Godina->DropDownHeight = 150;
			this->Godina->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Godina->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Godina->FormattingEnabled = true;
			this->Godina->IntegralHeight = false;
			this->Godina->Location = System::Drawing::Point(6, 23);
			this->Godina->Name = L"Godina";
			this->Godina->Size = System::Drawing::Size(211, 30);
			this->Godina->TabIndex = 50;
			this->Godina->SelectedIndexChanged += gcnew System::EventHandler(this, &Registracija::Godina_TextChanged);
			this->Godina->Enter += gcnew System::EventHandler(this, &Registracija::Godina_Enter);
			this->Godina->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Registracija::Godina_KeyDown);
			this->Godina->Leave += gcnew System::EventHandler(this, &Registracija::Godina_Leave);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->Mesec);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox4->Location = System::Drawing::Point(231, 44);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(224, 63);
			this->groupBox4->TabIndex = 54;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Mesec";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->Dan);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(3, 44);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(224, 63);
			this->groupBox3->TabIndex = 53;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Dan";
			// 
			// BrojTelefonaPanel
			// 
			this->BrojTelefonaPanel->Controls->Add(this->BrojTelefonaLabel);
			this->BrojTelefonaPanel->Controls->Add(this->BrojTelefonaNaslov);
			this->BrojTelefonaPanel->Controls->Add(this->BrojTelefona);
			this->BrojTelefonaPanel->Location = System::Drawing::Point(28, 349);
			this->BrojTelefonaPanel->Name = L"BrojTelefonaPanel";
			this->BrojTelefonaPanel->Size = System::Drawing::Size(327, 128);
			this->BrojTelefonaPanel->TabIndex = 52;
			// 
			// BrojTelefonaLabel
			// 
			this->BrojTelefonaLabel->AutoSize = true;
			this->BrojTelefonaLabel->ForeColor = System::Drawing::Color::Red;
			this->BrojTelefonaLabel->Location = System::Drawing::Point(9, 79);
			this->BrojTelefonaLabel->Name = L"BrojTelefonaLabel";
			this->BrojTelefonaLabel->Size = System::Drawing::Size(93, 13);
			this->BrojTelefonaLabel->TabIndex = 65;
			this->BrojTelefonaLabel->Text = L"BrojTelefonaLabel";
			// 
			// EmailPanel
			// 
			this->EmailPanel->Controls->Add(this->PotvrdiEmailLabel);
			this->EmailPanel->Controls->Add(this->groupBox12);
			this->EmailPanel->Controls->Add(this->groupBox11);
			this->EmailPanel->Controls->Add(this->EmailLabel);
			this->EmailPanel->Controls->Add(this->label10);
			this->EmailPanel->Controls->Add(this->EmailNaslov);
			this->EmailPanel->Location = System::Drawing::Point(28, 489);
			this->EmailPanel->Name = L"EmailPanel";
			this->EmailPanel->Size = System::Drawing::Size(689, 167);
			this->EmailPanel->TabIndex = 53;
			// 
			// PotvrdiEmailLabel
			// 
			this->PotvrdiEmailLabel->AutoSize = true;
			this->PotvrdiEmailLabel->ForeColor = System::Drawing::Color::Red;
			this->PotvrdiEmailLabel->Location = System::Drawing::Point(342, 118);
			this->PotvrdiEmailLabel->Name = L"PotvrdiEmailLabel";
			this->PotvrdiEmailLabel->Size = System::Drawing::Size(91, 13);
			this->PotvrdiEmailLabel->TabIndex = 68;
			this->PotvrdiEmailLabel->Text = L"PotvrdiEmailLabel";
			// 
			// groupBox12
			// 
			this->groupBox12->Controls->Add(this->PotvrdiEmail);
			this->groupBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox12->Location = System::Drawing::Point(347, 52);
			this->groupBox12->Name = L"groupBox12";
			this->groupBox12->Size = System::Drawing::Size(310, 63);
			this->groupBox12->TabIndex = 67;
			this->groupBox12->TabStop = false;
			this->groupBox12->Text = L"Potvrdi Email";
			// 
			// PotvrdiEmail
			// 
			this->PotvrdiEmail->BackColor = System::Drawing::Color::White;
			this->PotvrdiEmail->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->PotvrdiEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PotvrdiEmail->Location = System::Drawing::Point(7, 24);
			this->PotvrdiEmail->Margin = System::Windows::Forms::Padding(4);
			this->PotvrdiEmail->Multiline = true;
			this->PotvrdiEmail->Name = L"PotvrdiEmail";
			this->PotvrdiEmail->Size = System::Drawing::Size(296, 29);
			this->PotvrdiEmail->TabIndex = 27;
			this->PotvrdiEmail->WordWrap = false;
			this->PotvrdiEmail->TextChanged += gcnew System::EventHandler(this, &Registracija::PotvrdiEmail_TextChanged_1);
			this->PotvrdiEmail->Enter += gcnew System::EventHandler(this, &Registracija::PotvrdiEmail_Enter);
			this->PotvrdiEmail->Leave += gcnew System::EventHandler(this, &Registracija::PotvrdiEmail_Leave);
			// 
			// groupBox11
			// 
			this->groupBox11->Controls->Add(this->Email);
			this->groupBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox11->Location = System::Drawing::Point(9, 52);
			this->groupBox11->Name = L"groupBox11";
			this->groupBox11->Size = System::Drawing::Size(310, 63);
			this->groupBox11->TabIndex = 66;
			this->groupBox11->TabStop = false;
			this->groupBox11->Text = L"Email";
			// 
			// EmailLabel
			// 
			this->EmailLabel->AutoSize = true;
			this->EmailLabel->ForeColor = System::Drawing::Color::Red;
			this->EmailLabel->Location = System::Drawing::Point(9, 118);
			this->EmailLabel->Name = L"EmailLabel";
			this->EmailLabel->Size = System::Drawing::Size(58, 13);
			this->EmailLabel->TabIndex = 65;
			this->EmailLabel->Text = L"EmailLabel";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Red;
			this->label10->Location = System::Drawing::Point(84, 13);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(21, 26);
			this->label10->TabIndex = 59;
			this->label10->Text = L"*";
			// 
			// JmbgPanel
			// 
			this->JmbgPanel->BackColor = System::Drawing::Color::White;
			this->JmbgPanel->Controls->Add(this->JmbgLabel);
			this->JmbgPanel->Controls->Add(this->label8);
			this->JmbgPanel->Controls->Add(this->Jmbg);
			this->JmbgPanel->Controls->Add(this->JmbgNaslov);
			this->JmbgPanel->Location = System::Drawing::Point(368, 349);
			this->JmbgPanel->Name = L"JmbgPanel";
			this->JmbgPanel->Size = System::Drawing::Size(349, 128);
			this->JmbgPanel->TabIndex = 54;
			// 
			// JmbgLabel
			// 
			this->JmbgLabel->AutoSize = true;
			this->JmbgLabel->ForeColor = System::Drawing::Color::Red;
			this->JmbgLabel->Location = System::Drawing::Point(6, 79);
			this->JmbgLabel->Name = L"JmbgLabel";
			this->JmbgLabel->Size = System::Drawing::Size(58, 13);
			this->JmbgLabel->TabIndex = 65;
			this->JmbgLabel->Text = L"JmbgLabel";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Red;
			this->label8->Location = System::Drawing::Point(73, 14);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(21, 26);
			this->label8->TabIndex = 59;
			this->label8->Text = L"*";
			// 
			// Jmbg
			// 
			this->Jmbg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Jmbg->HidePromptOnLeave = true;
			this->Jmbg->Location = System::Drawing::Point(9, 47);
			this->Jmbg->Mask = L"0000000000000";
			this->Jmbg->Name = L"Jmbg";
			this->Jmbg->Size = System::Drawing::Size(296, 29);
			this->Jmbg->TabIndex = 40;
			this->Jmbg->Click += gcnew System::EventHandler(this, &Registracija::Jmbg_Click);
			this->Jmbg->TextChanged += gcnew System::EventHandler(this, &Registracija::Jmbg_TextChanged);
			this->Jmbg->Enter += gcnew System::EventHandler(this, &Registracija::Jmbg_Enter);
			this->Jmbg->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Registracija::Jmbg_KeyDown);
			this->Jmbg->Leave += gcnew System::EventHandler(this, &Registracija::Jmbg_Leave);
			// 
			// LozinkaPanel
			// 
			this->LozinkaPanel->Controls->Add(this->PotvrdiLozinkuLabel);
			this->LozinkaPanel->Controls->Add(this->groupBox14);
			this->LozinkaPanel->Controls->Add(this->groupBox13);
			this->LozinkaPanel->Controls->Add(this->LozinkaLabel);
			this->LozinkaPanel->Controls->Add(this->label9);
			this->LozinkaPanel->Controls->Add(this->LozinkaNaslov);
			this->LozinkaPanel->Controls->Add(this->PrikazivanjeLozinke);
			this->LozinkaPanel->Controls->Add(this->RandomLozinkaDugme);
			this->LozinkaPanel->Location = System::Drawing::Point(28, 668);
			this->LozinkaPanel->Name = L"LozinkaPanel";
			this->LozinkaPanel->Size = System::Drawing::Size(689, 195);
			this->LozinkaPanel->TabIndex = 55;
			// 
			// PotvrdiLozinkuLabel
			// 
			this->PotvrdiLozinkuLabel->AutoSize = true;
			this->PotvrdiLozinkuLabel->ForeColor = System::Drawing::Color::Red;
			this->PotvrdiLozinkuLabel->Location = System::Drawing::Point(342, 111);
			this->PotvrdiLozinkuLabel->Name = L"PotvrdiLozinkuLabel";
			this->PotvrdiLozinkuLabel->Size = System::Drawing::Size(103, 13);
			this->PotvrdiLozinkuLabel->TabIndex = 69;
			this->PotvrdiLozinkuLabel->Text = L"PotvrdiLozinkuLabel";
			// 
			// groupBox14
			// 
			this->groupBox14->Controls->Add(this->PotvrdiLozinku);
			this->groupBox14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox14->Location = System::Drawing::Point(347, 45);
			this->groupBox14->Name = L"groupBox14";
			this->groupBox14->Size = System::Drawing::Size(310, 63);
			this->groupBox14->TabIndex = 68;
			this->groupBox14->TabStop = false;
			this->groupBox14->Text = L"Potvrdi Lozinku";
			// 
			// PotvrdiLozinku
			// 
			this->PotvrdiLozinku->BackColor = System::Drawing::Color::White;
			this->PotvrdiLozinku->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PotvrdiLozinku->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PotvrdiLozinku->Location = System::Drawing::Point(7, 24);
			this->PotvrdiLozinku->Margin = System::Windows::Forms::Padding(4);
			this->PotvrdiLozinku->Name = L"PotvrdiLozinku";
			this->PotvrdiLozinku->Size = System::Drawing::Size(296, 29);
			this->PotvrdiLozinku->TabIndex = 27;
			this->PotvrdiLozinku->UseSystemPasswordChar = true;
			this->PotvrdiLozinku->WordWrap = false;
			this->PotvrdiLozinku->TextChanged += gcnew System::EventHandler(this, &Registracija::PotvrdiLozinku_TextChanged_1);
			this->PotvrdiLozinku->Enter += gcnew System::EventHandler(this, &Registracija::PotvrdiLozinku_Enter);
			this->PotvrdiLozinku->Leave += gcnew System::EventHandler(this, &Registracija::PotvrdiLozinku_Leave);
			// 
			// groupBox13
			// 
			this->groupBox13->Controls->Add(this->Lozinka);
			this->groupBox13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox13->Location = System::Drawing::Point(10, 45);
			this->groupBox13->Name = L"groupBox13";
			this->groupBox13->Size = System::Drawing::Size(310, 63);
			this->groupBox13->TabIndex = 67;
			this->groupBox13->TabStop = false;
			this->groupBox13->Text = L"Lozinka";
			// 
			// Lozinka
			// 
			this->Lozinka->BackColor = System::Drawing::Color::White;
			this->Lozinka->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Lozinka->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lozinka->ForeColor = System::Drawing::SystemColors::WindowText;
			this->Lozinka->Location = System::Drawing::Point(6, 24);
			this->Lozinka->Margin = System::Windows::Forms::Padding(4);
			this->Lozinka->Name = L"Lozinka";
			this->Lozinka->Size = System::Drawing::Size(296, 29);
			this->Lozinka->TabIndex = 27;
			this->Lozinka->UseSystemPasswordChar = true;
			this->Lozinka->WordWrap = false;
			this->Lozinka->TextChanged += gcnew System::EventHandler(this, &Registracija::Lozinka_TextChanged_1);
			this->Lozinka->Enter += gcnew System::EventHandler(this, &Registracija::Lozinka_Enter);
			this->Lozinka->Leave += gcnew System::EventHandler(this, &Registracija::Lozinka_Leave);
			// 
			// LozinkaLabel
			// 
			this->LozinkaLabel->AutoSize = true;
			this->LozinkaLabel->ForeColor = System::Drawing::Color::Red;
			this->LozinkaLabel->Location = System::Drawing::Point(11, 132);
			this->LozinkaLabel->Name = L"LozinkaLabel";
			this->LozinkaLabel->Size = System::Drawing::Size(70, 13);
			this->LozinkaLabel->TabIndex = 65;
			this->LozinkaLabel->Text = L"LozinkaLabel";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Red;
			this->label9->Location = System::Drawing::Point(91, 13);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(21, 26);
			this->label9->TabIndex = 59;
			this->label9->Text = L"*";
			// 
			// PrebivalistePanel
			// 
			this->PrebivalistePanel->Controls->Add(this->DrzavaLabel);
			this->PrebivalistePanel->Controls->Add(this->PostanskiBrojLabel);
			this->PrebivalistePanel->Controls->Add(this->GradLabel);
			this->PrebivalistePanel->Controls->Add(this->AdresaLabel);
			this->PrebivalistePanel->Controls->Add(this->label11);
			this->PrebivalistePanel->Controls->Add(this->groupBox10);
			this->PrebivalistePanel->Controls->Add(this->groupBox9);
			this->PrebivalistePanel->Controls->Add(this->groupBox2);
			this->PrebivalistePanel->Controls->Add(this->groupBox1);
			this->PrebivalistePanel->Controls->Add(this->label18);
			this->PrebivalistePanel->Location = System::Drawing::Point(28, 876);
			this->PrebivalistePanel->Name = L"PrebivalistePanel";
			this->PrebivalistePanel->Size = System::Drawing::Size(689, 279);
			this->PrebivalistePanel->TabIndex = 56;
			// 
			// DrzavaLabel
			// 
			this->DrzavaLabel->AutoSize = true;
			this->DrzavaLabel->ForeColor = System::Drawing::Color::Red;
			this->DrzavaLabel->Location = System::Drawing::Point(350, 218);
			this->DrzavaLabel->Name = L"DrzavaLabel";
			this->DrzavaLabel->Size = System::Drawing::Size(67, 13);
			this->DrzavaLabel->TabIndex = 65;
			this->DrzavaLabel->Text = L"DrzavaLabel";
			// 
			// PostanskiBrojLabel
			// 
			this->PostanskiBrojLabel->AutoSize = true;
			this->PostanskiBrojLabel->ForeColor = System::Drawing::Color::Red;
			this->PostanskiBrojLabel->Location = System::Drawing::Point(14, 218);
			this->PostanskiBrojLabel->Name = L"PostanskiBrojLabel";
			this->PostanskiBrojLabel->Size = System::Drawing::Size(97, 13);
			this->PostanskiBrojLabel->TabIndex = 64;
			this->PostanskiBrojLabel->Text = L"PostanskiBrojLabel";
			// 
			// GradLabel
			// 
			this->GradLabel->AutoSize = true;
			this->GradLabel->ForeColor = System::Drawing::Color::Red;
			this->GradLabel->Location = System::Drawing::Point(350, 98);
			this->GradLabel->Name = L"GradLabel";
			this->GradLabel->Size = System::Drawing::Size(56, 13);
			this->GradLabel->TabIndex = 63;
			this->GradLabel->Text = L"GradLabel";
			// 
			// AdresaLabel
			// 
			this->AdresaLabel->AutoSize = true;
			this->AdresaLabel->ForeColor = System::Drawing::Color::Red;
			this->AdresaLabel->Location = System::Drawing::Point(14, 98);
			this->AdresaLabel->Name = L"AdresaLabel";
			this->AdresaLabel->Size = System::Drawing::Size(66, 13);
			this->AdresaLabel->TabIndex = 62;
			this->AdresaLabel->Text = L"AdresaLabel";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Red;
			this->label11->Location = System::Drawing::Point(144, 3);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(21, 26);
			this->label11->TabIndex = 60;
			this->label11->Text = L"*";
			// 
			// groupBox10
			// 
			this->groupBox10->Controls->Add(this->Grad);
			this->groupBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox10->Location = System::Drawing::Point(353, 32);
			this->groupBox10->Name = L"groupBox10";
			this->groupBox10->Size = System::Drawing::Size(302, 63);
			this->groupBox10->TabIndex = 59;
			this->groupBox10->TabStop = false;
			this->groupBox10->Text = L"Grad";
			// 
			// Grad
			// 
			this->Grad->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Grad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Grad->Location = System::Drawing::Point(7, 22);
			this->Grad->Name = L"Grad";
			this->Grad->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->Grad->Size = System::Drawing::Size(289, 30);
			this->Grad->TabIndex = 0;
			this->Grad->Text = L"";
			this->Grad->WordWrap = false;
			this->Grad->TextChanged += gcnew System::EventHandler(this, &Registracija::Grad_TextChanged);
			this->Grad->Enter += gcnew System::EventHandler(this, &Registracija::Grad_Enter);
			this->Grad->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Registracija::Grad_KeyDown);
			this->Grad->Leave += gcnew System::EventHandler(this, &Registracija::Grad_Leave);
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->Adresa);
			this->groupBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox9->Location = System::Drawing::Point(16, 32);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(302, 63);
			this->groupBox9->TabIndex = 58;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"Adresa";
			// 
			// Adresa
			// 
			this->Adresa->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Adresa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Adresa->Location = System::Drawing::Point(7, 22);
			this->Adresa->Name = L"Adresa";
			this->Adresa->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->Adresa->Size = System::Drawing::Size(289, 30);
			this->Adresa->TabIndex = 0;
			this->Adresa->Text = L"";
			this->Adresa->WordWrap = false;
			this->Adresa->TextChanged += gcnew System::EventHandler(this, &Registracija::Adresa_TextChanged);
			this->Adresa->Enter += gcnew System::EventHandler(this, &Registracija::Adresa_Enter);
			this->Adresa->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Registracija::Adresa_KeyDown);
			this->Adresa->Leave += gcnew System::EventHandler(this, &Registracija::Adresa_Leave);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->Drzava);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(353, 152);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(303, 63);
			this->groupBox2->TabIndex = 57;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Država";
			// 
			// Drzava
			// 
			this->Drzava->BackColor = System::Drawing::SystemColors::Window;
			this->Drzava->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Drzava->DropDownHeight = 150;
			this->Drzava->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Drzava->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Drzava->FormattingEnabled = true;
			this->Drzava->IntegralHeight = false;
			this->Drzava->Items->AddRange(gcnew cli::array< System::Object^  >(194) {
				L"Afganistan", L"Albanija", L"Alzir", L"Andora", L"Angola",
					L"Antigva i Barbuda", L"Argentina", L"Armenija", L"Australija", L"Austrija", L"Azerbejdžan", L"Bahami", L"Bahrein", L"Banglades",
					L"Barbados", L"Bjelorusija", L"Belgija", L"Belize", L"Benin", L"Butan", L"Bolivija", L"Bosna i Hercegovina", L"Bocvana", L"Brazil",
					L"Brunej", L"Bugarska", L"Burkina Faso", L"Burundi", L"Cabo Verde", L"Kambodza", L"Kamerun", L"Kanada", L"Centralna Africka Republika",
					L"Cad", L"Cile", L"Kina", L"Kolumbija", L"Komori", L"Kongo, Demokratska Republika", L"Kongo, Republika", L"Kostarika", L"Hrvatska",
					L"Kuba", L"Cipar", L"Ceska Republika", L"Danska", L"Džibuti", L"Dominika", L"Dominikanska Republika", L"Istocni Timor", L"Ekvador",
					L"Egipat", L"El Salvador", L"Ekvatorijalna Gvineja", L"Eritreja", L"Estonija", L"Eswatini", L"Etiopija", L"Fidzi", L"Finska",
					L"Francuska", L"Gabon", L"Gambija", L"Gruzija", L"Nemacka", L"Gana", L"Grcka", L"Grenada", L"Gvatemala", L"Gvineja", L"Gvineja Bisau",
					L"Gvajana", L"Haiti", L"Honduras", L"Madjarska", L"Island", L"Indija", L"Indonezija", L"Iran", L"Irak", L"Irska", L"Izrael",
					L"Italija", L"Jamajka", L"Japan", L"Jordan", L"Kazahstan", L"Kenija", L"Kiribati", L"Severna Koreja", L"Juzna Koreja", L"Kuvajt",
					L"Kirgistan", L"Laos", L"Latvija", L"Libanon", L"Lesoto", L"Liberija", L"Libija", L"Lihtenstajn", L"Litva", L"Luksemburg", L"Madagaskar",
					L"Malavi", L"Malezija", L"Maldivi", L"Mali", L"Malta", L"Marsalovi otoci", L"Mauritanija", L"Mauricijus", L"Meksiko", L"Mikronezija, Savezne Drzave",
					L"Moldavija", L"Monako", L"Mongolija", L"Crna Gora", L"Maroko", L"Mozambik", L"Mianmar (Burma)", L"Namibija", L"Nauru", L"Nepal",
					L"Nizozemska", L"Novi Zeland", L"Nikaragva", L"Niger", L"Nigerija", L"Sjeverna Makedonija", L"Norveska", L"Oman", L"Pakistan",
					L"Palau", L"Panama", L"Papua Nova Gvineja", L"Paragvaj", L"Peru", L"Filipini", L"Poljska", L"Portugal", L"Katar", L"Rumunjska",
					L"Rusija", L"Ruanda", L"Sveti Kristofor i Nevis", L"Sveta Lucija", L"Sveti Vincent i Grenadini", L"Samoa", L"San Marino", L"Sao Tome i Principe",
					L"Saudijska Arabija", L"Senegal", L"Srbija", L"Sejseli", L"Sijera Leone", L"Singapur", L"Slovacka", L"Slovenija", L"Solomonski otoci",
					L"Somalija", L"Juzna Afrika", L"Spanjolska", L"Sri Lanka", L"Sudan", L"Juzni Sudan", L"Surinam", L"Svedska", L"Svicarska", L"Sirija",
					L"Tajvan", L"Tadžikistan", L"Tanzanija", L"Tajland", L"Ici", L"Laka dvokolica", L"Trinidad i Tobago", L"Tunis", L"purica", L"Turkmenistan",
					L"Tuvalu", L"Uganda", L"Ukrajina", L"Ujedinjeni Arapski Emirati", L"Ujedinjeno Kraljevstvo", L"Ujedinjene drzave", L"Urugvaj",
					L"Uzbekistan", L"Vanuatu", L"Grad Vatikan", L"Venezuela", L"Vijetnam", L"Jemen", L"Zambija", L"Zimbabve"
			});
			this->Drzava->Location = System::Drawing::Point(6, 23);
			this->Drzava->Name = L"Drzava";
			this->Drzava->Size = System::Drawing::Size(290, 30);
			this->Drzava->TabIndex = 52;
			this->Drzava->SelectedIndexChanged += gcnew System::EventHandler(this, &Registracija::Drzava_TextChanged);
			this->Drzava->Enter += gcnew System::EventHandler(this, &Registracija::Drzava_Enter);
			this->Drzava->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Registracija::Drzava_KeyDown);
			this->Drzava->Leave += gcnew System::EventHandler(this, &Registracija::Drzava_Leave);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->PostanskiBroj);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(17, 152);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(303, 63);
			this->groupBox1->TabIndex = 56;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Poštanski broj";
			// 
			// PostanskiBroj
			// 
			this->PostanskiBroj->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->PostanskiBroj->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PostanskiBroj->Location = System::Drawing::Point(6, 28);
			this->PostanskiBroj->Mask = L"00000";
			this->PostanskiBroj->Name = L"PostanskiBroj";
			this->PostanskiBroj->Size = System::Drawing::Size(294, 22);
			this->PostanskiBroj->TabIndex = 0;
			this->PostanskiBroj->ValidatingType = System::Int32::typeid;
			this->PostanskiBroj->Click += gcnew System::EventHandler(this, &Registracija::PostanskiBroj_Click);
			this->PostanskiBroj->TextChanged += gcnew System::EventHandler(this, &Registracija::PostanskiBroj_TextChanged);
			this->PostanskiBroj->Enter += gcnew System::EventHandler(this, &Registracija::PostanskiBroj_Enter);
			this->PostanskiBroj->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Registracija::PostanskiBroj_KeyDown);
			this->PostanskiBroj->Leave += gcnew System::EventHandler(this, &Registracija::PostanskiBroj_Leave);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(12, 3);
			this->label18->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(137, 26);
			this->label18->TabIndex = 30;
			this->label18->Text = L"Prebivaliste";
			// 
			// USD
			// 
			this->USD->AutoSize = true;
			this->USD->Checked = true;
			this->USD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->USD->Location = System::Drawing::Point(16, 35);
			this->USD->Name = L"USD";
			this->USD->Size = System::Drawing::Size(72, 29);
			this->USD->TabIndex = 57;
			this->USD->TabStop = true;
			this->USD->Text = L"USD";
			this->USD->UseVisualStyleBackColor = true;
			this->USD->Enter += gcnew System::EventHandler(this, &Registracija::USD_Enter);
			this->USD->Leave += gcnew System::EventHandler(this, &Registracija::USD_Leave);
			// 
			// ValutePanel
			// 
			this->ValutePanel->Controls->Add(this->label12);
			this->ValutePanel->Controls->Add(this->RSD);
			this->ValutePanel->Controls->Add(this->EUR);
			this->ValutePanel->Controls->Add(this->label27);
			this->ValutePanel->Controls->Add(this->USD);
			this->ValutePanel->Location = System::Drawing::Point(28, 1167);
			this->ValutePanel->Name = L"ValutePanel";
			this->ValutePanel->Size = System::Drawing::Size(689, 97);
			this->ValutePanel->TabIndex = 58;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Red;
			this->label12->Location = System::Drawing::Point(87, 3);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(21, 26);
			this->label12->TabIndex = 60;
			this->label12->Text = L"*";
			// 
			// RSD
			// 
			this->RSD->AutoSize = true;
			this->RSD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RSD->Location = System::Drawing::Point(590, 35);
			this->RSD->Name = L"RSD";
			this->RSD->Size = System::Drawing::Size(71, 29);
			this->RSD->TabIndex = 59;
			this->RSD->Text = L"RSD";
			this->RSD->UseVisualStyleBackColor = true;
			this->RSD->Enter += gcnew System::EventHandler(this, &Registracija::RSD_Enter);
			this->RSD->Leave += gcnew System::EventHandler(this, &Registracija::RSD_Leave);
			// 
			// EUR
			// 
			this->EUR->AutoSize = true;
			this->EUR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EUR->Location = System::Drawing::Point(304, 35);
			this->EUR->Name = L"EUR";
			this->EUR->Size = System::Drawing::Size(70, 29);
			this->EUR->TabIndex = 58;
			this->EUR->Text = L"EUR";
			this->EUR->UseVisualStyleBackColor = true;
			this->EUR->Enter += gcnew System::EventHandler(this, &Registracija::EUR_Enter);
			this->EUR->Leave += gcnew System::EventHandler(this, &Registracija::EUR_Leave);
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(12, 3);
			this->label27->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(80, 26);
			this->label27->TabIndex = 30;
			this->label27->Text = L"Valuta";
			// 
			// TipNalogaPanel
			// 
			this->TipNalogaPanel->Controls->Add(this->TipNalogaLabel);
			this->TipNalogaPanel->Controls->Add(this->label13);
			this->TipNalogaPanel->Controls->Add(this->TipNaloga);
			this->TipNalogaPanel->Controls->Add(this->label19);
			this->TipNalogaPanel->Location = System::Drawing::Point(28, 1276);
			this->TipNalogaPanel->Name = L"TipNalogaPanel";
			this->TipNalogaPanel->Size = System::Drawing::Size(689, 90);
			this->TipNalogaPanel->TabIndex = 59;
			// 
			// TipNalogaLabel
			// 
			this->TipNalogaLabel->AutoSize = true;
			this->TipNalogaLabel->ForeColor = System::Drawing::Color::Red;
			this->TipNalogaLabel->Location = System::Drawing::Point(350, 19);
			this->TipNalogaLabel->Name = L"TipNalogaLabel";
			this->TipNalogaLabel->Size = System::Drawing::Size(82, 13);
			this->TipNalogaLabel->TabIndex = 63;
			this->TipNalogaLabel->Text = L"TipNalogaLabel";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Red;
			this->label13->Location = System::Drawing::Point(128, 3);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(21, 26);
			this->label13->TabIndex = 59;
			this->label13->Text = L"*";
			// 
			// TipNaloga
			// 
			this->TipNaloga->BackColor = System::Drawing::SystemColors::Window;
			this->TipNaloga->Cursor = System::Windows::Forms::Cursors::Hand;
			this->TipNaloga->DropDownHeight = 150;
			this->TipNaloga->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->TipNaloga->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TipNaloga->FormattingEnabled = true;
			this->TipNaloga->IntegralHeight = false;
			this->TipNaloga->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Tekuci", L"Stedni", L"Depozitni", L"Devizni",
					L"Poslovni", L"Student", L"Penzioni"
			});
			this->TipNaloga->Location = System::Drawing::Point(17, 45);
			this->TipNaloga->Name = L"TipNaloga";
			this->TipNaloga->Size = System::Drawing::Size(307, 30);
			this->TipNaloga->TabIndex = 50;
			this->TipNaloga->SelectedIndexChanged += gcnew System::EventHandler(this, &Registracija::TipNaloga_TextChanged);
			this->TipNaloga->Enter += gcnew System::EventHandler(this, &Registracija::TipNaloga_Enter);
			this->TipNaloga->Leave += gcnew System::EventHandler(this, &Registracija::TipNaloga_Leave);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(12, 3);
			this->label19->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(122, 26);
			this->label19->TabIndex = 30;
			this->label19->Text = L"Tip naloga";
			// 
			// NapomenaPanel
			// 
			this->NapomenaPanel->Controls->Add(this->Napomena);
			this->NapomenaPanel->Controls->Add(this->label24);
			this->NapomenaPanel->Controls->Add(this->Unos);
			this->NapomenaPanel->Location = System::Drawing::Point(27, 1377);
			this->NapomenaPanel->Name = L"NapomenaPanel";
			this->NapomenaPanel->Size = System::Drawing::Size(690, 205);
			this->NapomenaPanel->TabIndex = 60;
			// 
			// Napomena
			// 
			this->Napomena->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Napomena->Location = System::Drawing::Point(17, 33);
			this->Napomena->Name = L"Napomena";
			this->Napomena->Size = System::Drawing::Size(643, 99);
			this->Napomena->TabIndex = 31;
			this->Napomena->Text = L"";
			this->Napomena->Enter += gcnew System::EventHandler(this, &Registracija::Napomena_Enter);
			this->Napomena->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Registracija::Napomena_KeyDown);
			this->Napomena->Leave += gcnew System::EventHandler(this, &Registracija::Napomena_Leave);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(12, 3);
			this->label24->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(127, 26);
			this->label24->TabIndex = 30;
			this->label24->Text = L"Napomena";
			// 
			// GlavniPanel
			// 
			this->GlavniPanel->AutoScroll = true;
			this->GlavniPanel->Controls->Add(this->PunoImePanel);
			this->GlavniPanel->Controls->Add(this->NapomenaPanel);
			this->GlavniPanel->Controls->Add(this->DatumRodjenjaPanel);
			this->GlavniPanel->Controls->Add(this->BrojTelefonaPanel);
			this->GlavniPanel->Controls->Add(this->TipNalogaPanel);
			this->GlavniPanel->Controls->Add(this->EmailPanel);
			this->GlavniPanel->Controls->Add(this->JmbgPanel);
			this->GlavniPanel->Controls->Add(this->PrebivalistePanel);
			this->GlavniPanel->Controls->Add(this->ValutePanel);
			this->GlavniPanel->Controls->Add(this->LozinkaPanel);
			this->GlavniPanel->Location = System::Drawing::Point(59, 58);
			this->GlavniPanel->Name = L"GlavniPanel";
			this->GlavniPanel->Size = System::Drawing::Size(752, 575);
			this->GlavniPanel->TabIndex = 61;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(241, 4);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(387, 46);
			this->label34->TabIndex = 62;
			this->label34->Text = L"Registracija Naloga";
			// 
			// Registracija
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(860, 632);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->GlavniPanel);
			this->Controls->Add(this->Back);
			this->MaximizeBox = false;
			this->Name = L"Registracija";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Registracija::Registracija_FormClosed);
			this->Load += gcnew System::EventHandler(this, &Registracija::Registracija_Load);
			this->Click += gcnew System::EventHandler(this, &Registracija::Registracija_Click);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Registracija::Registracija_KeyDown);
			this->PunoImePanel->ResumeLayout(false);
			this->PunoImePanel->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox7->ResumeLayout(false);
			this->groupBox6->ResumeLayout(false);
			this->DatumRodjenjaPanel->ResumeLayout(false);
			this->DatumRodjenjaPanel->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->BrojTelefonaPanel->ResumeLayout(false);
			this->BrojTelefonaPanel->PerformLayout();
			this->EmailPanel->ResumeLayout(false);
			this->EmailPanel->PerformLayout();
			this->groupBox12->ResumeLayout(false);
			this->groupBox12->PerformLayout();
			this->groupBox11->ResumeLayout(false);
			this->groupBox11->PerformLayout();
			this->JmbgPanel->ResumeLayout(false);
			this->JmbgPanel->PerformLayout();
			this->LozinkaPanel->ResumeLayout(false);
			this->LozinkaPanel->PerformLayout();
			this->groupBox14->ResumeLayout(false);
			this->groupBox14->PerformLayout();
			this->groupBox13->ResumeLayout(false);
			this->groupBox13->PerformLayout();
			this->PrebivalistePanel->ResumeLayout(false);
			this->PrebivalistePanel->PerformLayout();
			this->groupBox10->ResumeLayout(false);
			this->groupBox9->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ValutePanel->ResumeLayout(false);
			this->ValutePanel->PerformLayout();
			this->TipNalogaPanel->ResumeLayout(false);
			this->TipNalogaPanel->PerformLayout();
			this->NapomenaPanel->ResumeLayout(false);
			this->NapomenaPanel->PerformLayout();
			this->GlavniPanel->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		string broj = StringTools::trim(fieldToString(BrojTelefona->Text));
		broj.erase(0, 1);
		PolLabel->Text = "";
		ImeLabel->Text = "";
		PrezimeLabel->Text = "";
		DanLabel->Text = "";
		MesecLabel->Text = "";
		GodinaLabel->Text = "";
		BrojTelefonaLabel->Text = "";
		JmbgLabel->Text = "";
		EmailLabel->Text = "";
		LozinkaLabel->Text = "";
		AdresaLabel->Text = "";
		GradLabel->Text = "";
		PostanskiBrojLabel->Text = "";
		DrzavaLabel->Text = "";
		TipNalogaLabel->Text = "";
		PotvrdiLozinkuLabel->Text = "";
		PotvrdiEmailLabel->Text = "";
		vector<pair<pair<gcroot<System::Windows::Forms::Label^>, string>, map<string, string>>> config = {
			{make_pair(gcroot<System::Windows::Forms::Label^>(PolLabel), fieldToString(Pol->Text)) , {
				{"required", "true"},
			}},
			{make_pair(gcroot<System::Windows::Forms::Label^>(ImeLabel), fieldToString(Ime->Text)) , {
				{"required", "true"},
				{"minlength", "3"},
				{"maxlength", "15"},
				{"space", "false"},
				{"number", "false"},
				{"special", "false"},
			}},
			{make_pair(gcroot<System::Windows::Forms::Label^>(PrezimeLabel), fieldToString(Prezime->Text)) , {
				{"required", "true"},
				{"minlength", "3"},
				{"maxlength", "15"},
				{"space", "false"},
				{"number", "false"},
				{"special", "false"},
			}},
			{make_pair(gcroot<System::Windows::Forms::Label^>(DanLabel), fieldToString(Dan->Text)) , {
				{"required", "true"},
			}},
			{make_pair(gcroot<System::Windows::Forms::Label^>(MesecLabel), fieldToString(Mesec->Text)) , {
				{"required", "true"},
			}},
			{make_pair(gcroot<System::Windows::Forms::Label^>(GodinaLabel), fieldToString(Godina->Text)) , {
				{"required", "true"},
			}},
			{make_pair(gcroot<System::Windows::Forms::Label^>(BrojTelefonaLabel), broj) , {
				{"required", "false"},
				{"minlength", "14"}
			}},
			{make_pair(gcroot<System::Windows::Forms::Label^>(JmbgLabel), fieldToString(Jmbg->Text)) , {
				{"required", "true"},
				{"minlength", "13"}
			}},
			{make_pair(gcroot<System::Windows::Forms::Label^>(EmailLabel), fieldToString(Email->Text)) , {
				{"required", "true"},
				{"email", "true"},
				{"space", "false"}
			}},
			{make_pair(gcroot<System::Windows::Forms::Label^>(LozinkaLabel), fieldToString(Lozinka->Text)) , {
				{"required", "true"},
				{"password", "true"},
			}},
			{make_pair(gcroot<System::Windows::Forms::Label^>(PotvrdiLozinkuLabel), fieldToString(PotvrdiLozinku->Text)) , {
				{"required", "true"},
				{"matching", fieldToString(Lozinka->Text)}
			}},
			{make_pair(gcroot<System::Windows::Forms::Label^>(PotvrdiEmailLabel), fieldToString(PotvrdiEmail->Text)) , {
				{"required", "true"},
				{"matching", fieldToString(Email->Text)}
			}},
			{make_pair(gcroot<System::Windows::Forms::Label^>(AdresaLabel), fieldToString(Adresa->Text)) , {
				{"required", "true"},
				{"minlength", "5"},
				{"minlength", "25"},
				{"special", "false"},
			}},
			{make_pair(gcroot<System::Windows::Forms::Label^>(GradLabel), fieldToString(Grad->Text)) , {
				{"required", "true"},
				{"minlength", "3"},
				{"minlength", "20"},
				{"number", "false"},
				{"special", "false"},
			}},
			{make_pair(gcroot<System::Windows::Forms::Label^>(PostanskiBrojLabel), fieldToString(PostanskiBroj->Text)) , {
				{"required", "true"},
				{"minlength", "5"}
			}},
			{make_pair(gcroot<System::Windows::Forms::Label^>(DrzavaLabel), fieldToString(Drzava->Text)) , {
				{"required", "true"},
			}},
			{make_pair(gcroot<System::Windows::Forms::Label^>(TipNalogaLabel), fieldToString(TipNaloga->Text)) , {
				{"required", "true"},
			}},
		};
		Validator::Login l(config);
		if (!l.validationPassed()) {
			l.putErrorsInFields();
			GlavniPanel->VerticalScroll->Value = 0;
		}
		else {
			vector<User> email_postoji = nalozi.FetchUsers("*", "email = '" + fieldToString(Email->Text) + "'");
			vector<User> jmbg_postoji = nalozi.FetchUsers("*", "jmbg = '" + fieldToString(Jmbg->Text) + "'");
			if (email_postoji.size() != 0) {
				MessageBox::Show("Email vec postoji u bazi podataka", "Podaci nisu uneti u bazu podataka", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			if (jmbg_postoji.size() != 0) {
				MessageBox::Show("Jmbg vec postoji u bazi podataka", "Podaci nisu uneti u bazu podataka", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			string valuta;
			if (USD->Checked)valuta = "USD";
			else if (EUR->Checked)valuta = "EUR";
			else if (RSD->Checked)valuta = "RSD";
			Date datum_rodjenja;
			datum_rodjenja.dan = fieldToNumber(Dan->Text);
			datum_rodjenja.mesec = monthToInt(fieldToString(Mesec->Text));
			datum_rodjenja.godina = fieldToNumber(Godina->Text);
			nalozi.addFields("korisnicko_ime", "ime", "prezime", "pol", "email", "lozinka", "telefon", "jmbg", "datum_rodjenja", "racun", "datum_otvaranja", "valuta", "adresa", "grad", "postanski_broj", "drzava", "napomena", "vrsta_naloga");
			nalozi.addValues(account_username(StringTools::capitalize(fieldToString(Ime->Text)),
				StringTools::capitalize(fieldToString(Prezime->Text)), fieldToString(Jmbg->Text)),
				StringTools::capitalize(fieldToString(Ime->Text)), 
				StringTools::capitalize(fieldToString(Prezime->Text)),
				fieldToString(Pol->Text),
				fieldToString(Email->Text),
				fieldToString(Lozinka->Text),
				fieldToString(BrojTelefona->Text),
				fieldToString(Jmbg->Text),
				dateToString(datum_rodjenja),
				racun_format(),
				currentDateTimeToString(),
				valuta,
				StringTools::capitalize(fieldToString(Adresa->Text)),
				StringTools::capitalize(fieldToString(Grad->Text)),
				fieldToString(PostanskiBroj->Text),
				fieldToString(Drzava->Text),
				fieldToString(Napomena->Text),
				fieldToString(TipNaloga->Text)
			);
			if (nalozi.AddUser()) {
				MessageBox::Show("Uspesno ste se ulogovali", "Informacija", MessageBoxButtons::OK, MessageBoxIcon::Information);
				pozadine.addFields("id", "Boja");
				vector<vector<string>> id = nalozi.FetchData("id", "email = '" + fieldToString(Email->Text) + "'");
				pozadine.addValues(id[0][0], "#F0F0F0");
				pozadine.AddUser();
				User user = nalozi.FetchUser("*", "email = '" + fieldToString(Email->Text) + "'");
				if (user.postoji()) {
					this->Hide();
					Main^ main = gcnew Main(user, obj);
					main->ShowDialog();
				}
			}
			else MessageBox::Show("Problem sa unetim podacima", "Podaci nisu uneti u bazu podataka", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}
		if (PolLabel->Text != "" ||
			ImeLabel->Text != "" ||
			PrezimeLabel->Text != "")
			PunoImePanel->BackColor = Color::FromArgb(255, 150, 150);
		else PunoImePanel->BackColor = Color::White;
		Ime->BackColor = PunoImePanel->BackColor;
		Prezime->BackColor = PunoImePanel->BackColor;
		if (DanLabel->Text != "" ||
			MesecLabel->Text != "" ||
			GodinaLabel->Text != "")
			DatumRodjenjaPanel->BackColor = Color::FromArgb(255, 150, 150);
		else DatumRodjenjaPanel->BackColor = Color::White;
		if (BrojTelefonaLabel->Text != "")
			BrojTelefonaPanel->BackColor = Color::FromArgb(255, 150, 150);
		else BrojTelefonaPanel->BackColor = Color::White;
		BrojTelefona->BackColor = BrojTelefonaPanel->BackColor;
		if (JmbgLabel->Text != "")
			JmbgPanel->BackColor = Color::FromArgb(255, 150, 150);
		else JmbgPanel->BackColor = Color::White;
		Jmbg->BackColor = JmbgPanel->BackColor;
		if (EmailLabel->Text != "" || PotvrdiEmailLabel->Text != "")
			EmailPanel->BackColor = Color::FromArgb(255, 150, 150);
		else EmailPanel->BackColor = Color::White;
		Email->BackColor = EmailPanel->BackColor;
		PotvrdiEmail->BackColor = EmailPanel->BackColor;
		if (LozinkaLabel->Text != "" || PotvrdiLozinkuLabel->Text != "")
			LozinkaPanel->BackColor = Color::FromArgb(255, 150, 150);
		else LozinkaPanel->BackColor = Color::White;
		Lozinka->BackColor = LozinkaPanel->BackColor;
		PotvrdiLozinku->BackColor = LozinkaPanel->BackColor;
		if (AdresaLabel->Text != "" ||
			GradLabel->Text != "" ||
			PostanskiBrojLabel->Text != "" ||
			DrzavaLabel->Text != "")
			PrebivalistePanel->BackColor = Color::FromArgb(255, 150, 150);
		else PrebivalistePanel->BackColor = Color::White;
		Adresa->BackColor = PrebivalistePanel->BackColor;
		Grad->BackColor = PrebivalistePanel->BackColor;
		PostanskiBroj->BackColor = PrebivalistePanel->BackColor;
		if (TipNalogaLabel->Text != "")
			TipNalogaPanel->BackColor = Color::FromArgb(255, 150, 150);
		else TipNalogaPanel->BackColor = Color::White;

	}
	private: System::Void Email_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		EmailLabel->Text = "";
		vector<pair<pair<gcroot<System::Windows::Forms::Label^>, string>, map<string, string>>> config = {
				{make_pair(gcroot<System::Windows::Forms::Label^>(EmailLabel), fieldToString(Email->Text)) , {
					{"required", "true"},
					{"email", "true"},
					{"space", "false"}
				}},
		};
		Validator::Login l(config);
		if (!l.validationPassed()) {
			EmailPanel->BackColor = Color::FromArgb(255, 150, 150);
			Email->BackColor = EmailPanel->BackColor;
			PotvrdiEmail->BackColor = EmailPanel->BackColor;
			l.putErrorsInFields();
		}
		else {
			EmailLabel->Text = "";
			EmailPanel->BackColor = (PotvrdiEmailLabel->Text == "") ? Color::LightYellow : EmailPanel->BackColor;
			Email->BackColor = EmailPanel->BackColor;
			PotvrdiEmail->BackColor = EmailPanel->BackColor;

		}
	}
	private: System::Void PotvrdiEmail_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
		PotvrdiEmailLabel->Text = "";
		vector<pair<pair<gcroot<System::Windows::Forms::Label^>, string>, map<string, string>>> config = {
			{make_pair(gcroot<System::Windows::Forms::Label^>(PotvrdiEmailLabel), fieldToString(PotvrdiEmail->Text)) , {
				{"required", "true"},
				{"matching", fieldToString(Email->Text)}
			}},
		};
		Validator::Login l(config);
		if (!l.validationPassed()) {
			EmailPanel->BackColor = Color::FromArgb(255, 150, 150);
			Email->BackColor = EmailPanel->BackColor;
			PotvrdiEmail->BackColor = EmailPanel->BackColor;
			l.putErrorsInFields();
		}
		else {
			PotvrdiEmailLabel->Text = "";
			EmailPanel->BackColor = (EmailLabel->Text == "") ? Color::LightYellow : EmailPanel->BackColor;
			Email->BackColor = EmailPanel->BackColor;
			PotvrdiEmail->BackColor = EmailPanel->BackColor;
		}
	}
	private: System::Void Lozinka_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
		LozinkaLabel->Text = "";
		vector<pair<pair<gcroot<System::Windows::Forms::Label^>, string>, map<string, string>>> config = {
			{make_pair(gcroot<System::Windows::Forms::Label^>(LozinkaLabel), fieldToString(Lozinka->Text)) , {
				{"required", "true"},
				{"password", "true"},
			}},
		};
		Validator::Login l(config);
		if (!l.validationPassed()) {
			LozinkaPanel->BackColor = Color::FromArgb(255, 150, 150);
			Lozinka->BackColor = LozinkaPanel->BackColor;
			PotvrdiLozinku->BackColor = LozinkaPanel->BackColor;
			l.putErrorsInFields();
		}
		else {
			LozinkaLabel->Text = "";
			LozinkaPanel->BackColor = (PotvrdiLozinkuLabel->Text == "") ? Color::LightYellow : LozinkaPanel->BackColor;
			Lozinka->BackColor = LozinkaPanel->BackColor;
			PotvrdiLozinku->BackColor = LozinkaPanel->BackColor;
		}
	}
	private: System::Void PotvrdiLozinku_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
		PotvrdiLozinkuLabel->Text = "";
		vector<pair<pair<gcroot<System::Windows::Forms::Label^>, string>, map<string, string>>> config = {
			{make_pair(gcroot<System::Windows::Forms::Label^>(PotvrdiLozinkuLabel), fieldToString(PotvrdiLozinku->Text)) , {
				{"required", "true"},
				{"matching", fieldToString(Lozinka->Text)}
			}},
		};
		Validator::Login l(config);
		if (!l.validationPassed()) {
			LozinkaPanel->BackColor = Color::FromArgb(255, 150, 150);
			Lozinka->BackColor = LozinkaPanel->BackColor;
			PotvrdiLozinku->BackColor = LozinkaPanel->BackColor;
			l.putErrorsInFields();
		}
		else {
			PotvrdiLozinkuLabel->Text = "";
			LozinkaPanel->BackColor = (LozinkaLabel->Text == "") ? Color::LightYellow : LozinkaPanel->BackColor;
			Lozinka->BackColor = LozinkaPanel->BackColor;
			PotvrdiLozinku->BackColor = LozinkaPanel->BackColor;
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Validator v;
		string pass = generatePassword(12);
		while (!v.is_password(pass)) pass = generatePassword(12);
		Lozinka->Text = toField(pass);
		PotvrdiLozinku->Text = toField(pass);
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		obj->Show();
	}
	private: System::Void Registracija_Load(System::Object^ sender, System::EventArgs^ e) {
		BrojTelefona->PromptChar = ' ';
		PostanskiBroj->PromptChar = ' ';
		Jmbg->PromptChar = ' ';
		PolLabel->Text = "";
		ImeLabel->Text = "";
		PrezimeLabel->Text = "";
		DanLabel->Text = "";
		MesecLabel->Text = "";
		GodinaLabel->Text = "";
		BrojTelefonaLabel->Text = "";
		JmbgLabel->Text = "";
		EmailLabel->Text = "";
		LozinkaLabel->Text = "";
		AdresaLabel->Text = "";
		GradLabel->Text = "";
		PostanskiBrojLabel->Text = "";
		DrzavaLabel->Text = "";
		TipNalogaLabel->Text = "";
		PotvrdiLozinkuLabel->Text = "";
		PotvrdiEmailLabel->Text = "";
		int i;
		DateTime trenutnoVreme = DateTime::Now;
		for (i = trenutnoVreme.Year - 18; i >= 1945; i--) Godina->Items->Add(toField(i));
		//PunoImePanel->BackColor = Color::FromArgb(255, 150, 150);
		//DatumRodjenjaPanel->BackColor = Color::FromArgb(242, 58, 60);

	}
	private: System::Void BrojTelefona_Click(System::Object^ sender, System::EventArgs^ e) {
		BrojTelefona->SelectionStart = StringTools::trim(fieldToString(BrojTelefona->Text)).length();
	}
	private: System::Void BrojTelefona_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Space) e->SuppressKeyPress = true;
		if (e->KeyCode == Keys::Enter) {
			e->SuppressKeyPress = true;
			Jmbg->Focus();
		}
	}
	private: System::Void Jmbg_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Space) e->SuppressKeyPress = true;
		if (e->KeyCode == Keys::Enter) {
			e->SuppressKeyPress = true;
			Email->Focus();
		}
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (PrikazivanjeLozinke->Checked) {
			Lozinka->UseSystemPasswordChar = false;
			PotvrdiLozinku->UseSystemPasswordChar = false;
		}
		else {
			Lozinka->UseSystemPasswordChar = true;
			PotvrdiLozinku->UseSystemPasswordChar = true;
		}
	}
	private: System::Void Jmbg_Click(System::Object^ sender, System::EventArgs^ e) {
		Jmbg->SelectionStart = StringTools::trim(fieldToString(Jmbg->Text)).length();
	}
	private: System::Void PostanskiBroj_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Space) e->SuppressKeyPress = true;
		if (e->KeyCode == Keys::Enter) {
			e->SuppressKeyPress = true;
			Drzava->Focus();
		}
	}
	private: System::Void PostanskiBroj_Click(System::Object^ sender, System::EventArgs^ e) {
		PostanskiBroj->SelectionStart = StringTools::trim(fieldToString(PostanskiBroj->Text)).length();
	}
	private: System::Void Ime_Enter(System::Object^ sender, System::EventArgs^ e) {
		PunoImePanel->BackColor = (PunoImePanel->BackColor == Color::White) ? Color::LightYellow : PunoImePanel->BackColor;
		Ime->BackColor = PunoImePanel->BackColor;
		Prezime->BackColor = PunoImePanel->BackColor;
	}
	private: System::Void Ime_Leave(System::Object^ sender, System::EventArgs^ e) {
		PunoImePanel->BackColor = (PunoImePanel->BackColor != Color::LightYellow) ? PunoImePanel->BackColor : Color::White;
		Ime->BackColor = PunoImePanel->BackColor;
		Prezime->BackColor = PunoImePanel->BackColor;
	}
	private: System::Void Pol_Enter(System::Object^ sender, System::EventArgs^ e) {
		PunoImePanel->BackColor = (PunoImePanel->BackColor == Color::White) ? Color::LightYellow : PunoImePanel->BackColor;
		Ime->BackColor = PunoImePanel->BackColor;
		Prezime->BackColor = PunoImePanel->BackColor;
	}
	private: System::Void Pol_Leave(System::Object^ sender, System::EventArgs^ e) {
		PunoImePanel->BackColor = (PunoImePanel->BackColor != Color::LightYellow) ? PunoImePanel->BackColor : Color::White;
		Ime->BackColor = PunoImePanel->BackColor;
		Prezime->BackColor = PunoImePanel->BackColor;
	}
	private: System::Void Prezime_Enter(System::Object^ sender, System::EventArgs^ e) {
		PunoImePanel->BackColor = (PunoImePanel->BackColor == Color::White) ? Color::LightYellow : PunoImePanel->BackColor;
		Ime->BackColor = PunoImePanel->BackColor;
		Prezime->BackColor = PunoImePanel->BackColor;
	}
	private: System::Void Prezime_Leave(System::Object^ sender, System::EventArgs^ e) {
		PunoImePanel->BackColor = (PunoImePanel->BackColor != Color::LightYellow) ? PunoImePanel->BackColor : Color::White;
		Ime->BackColor = PunoImePanel->BackColor;
		Prezime->BackColor = PunoImePanel->BackColor;
	}
	private: System::Void Registracija_Click(System::Object^ sender, System::EventArgs^ e) {
		PunoImePanel->BackColor = (PunoImePanel->BackColor != Color::LightYellow) ? PunoImePanel->BackColor : Color::White;
		Ime->BackColor = PunoImePanel->BackColor;
		Prezime->BackColor = PunoImePanel->BackColor;
		PunoImePanel->Focus();
	}
	private: System::Void BrojTelefona_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		BrojTelefonaLabel->Text = "";
		string broj = StringTools::trim(fieldToString(BrojTelefona->Text));
		broj.erase(0, 1);
		vector<pair<pair<gcroot<System::Windows::Forms::Label^>, string>, map<string, string>>> config = {
			{ make_pair(gcroot<System::Windows::Forms::Label^>(BrojTelefonaLabel), broj), {
				{ "required", "true" },
				{ "minlength", "14" },
			} },
		};
		Validator::Login l(config);
		if (!l.validationPassed()) {
			BrojTelefonaPanel->BackColor = Color::FromArgb(255, 150, 150);
			BrojTelefona->BackColor = BrojTelefonaPanel->BackColor;
			l.putErrorsInFields();
		}
		else {
			BrojTelefonaLabel->Text = "";
			BrojTelefonaPanel->BackColor = Color::LightYellow;
			BrojTelefona->BackColor = BrojTelefonaPanel->BackColor;

		}
	}
	private: System::Void Ime_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		ImeLabel->Text = "";
		vector<pair<pair<gcroot<System::Windows::Forms::Label^>, string>, map<string, string>>> config = {
				{make_pair(gcroot<System::Windows::Forms::Label^>(ImeLabel), fieldToString(Ime->Text)) , {
					{"required", "true"},
					{"minlength", "3"},
					{"maxlength", "15"},
					{"space", "false"},
					{"number", "false"},
					{"special", "false"},
				}},
		};
		Validator::Login l(config);
		if (!l.validationPassed()) {
			PunoImePanel->BackColor = Color::FromArgb(255, 150, 150);
			Ime->BackColor = PunoImePanel->BackColor;
			Prezime->BackColor = PunoImePanel->BackColor;
			l.putErrorsInFields();
		}
		else {
			ImeLabel->Text = "";
			PunoImePanel->BackColor = (PrezimeLabel->Text == "" && PolLabel->Text == "") ? Color::LightYellow : PunoImePanel->BackColor;
			Ime->BackColor = PunoImePanel->BackColor;
			Prezime->BackColor = PunoImePanel->BackColor;
		}
	}
	private: System::Void Prezime_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		PrezimeLabel->Text = "";
		vector<pair<pair<gcroot<System::Windows::Forms::Label^>, string>, map<string, string>>> config = {
				{make_pair(gcroot<System::Windows::Forms::Label^>(PrezimeLabel), fieldToString(Prezime->Text)) , {
					{"required", "true"},
					{"minlength", "3"},
					{"maxlength", "15"},
					{"space", "false"},
					{"number", "false"},
					{"special", "false"},
				}},
		};
		Validator::Login l(config);
		if (!l.validationPassed()) {
			PunoImePanel->BackColor = Color::FromArgb(255, 150, 150);
			Ime->BackColor = PunoImePanel->BackColor;
			Prezime->BackColor = PunoImePanel->BackColor;
			l.putErrorsInFields();
		}
		else {
			PrezimeLabel->Text = "";
			PunoImePanel->BackColor = (ImeLabel->Text == "" && PolLabel->Text == "") ? Color::LightYellow : PunoImePanel->BackColor;
			Ime->BackColor = PunoImePanel->BackColor;
			Prezime->BackColor = PunoImePanel->BackColor;
		}

	}
	private: System::Void Adresa_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		AdresaLabel->Text = "";
		vector<pair<pair<gcroot<System::Windows::Forms::Label^>, string>, map<string, string>>> config = {
			{make_pair(gcroot<System::Windows::Forms::Label^>(AdresaLabel), fieldToString(Adresa->Text)) , {
				{"required", "true"},
				{"minlength", "5"},
				{"minlength", "25"},
				{"special", "false"},
			}},
		};
		Validator::Login l(config);
		if (!l.validationPassed()) {
			PrebivalistePanel->BackColor = Color::FromArgb(255, 150, 150);
			Adresa->BackColor = PrebivalistePanel->BackColor;
			Grad->BackColor = PrebivalistePanel->BackColor;
			PostanskiBroj->BackColor = PrebivalistePanel->BackColor;
			l.putErrorsInFields();
		}
		else {
			AdresaLabel->Text = "";
			PrebivalistePanel->BackColor = (GradLabel->Text == "" && PostanskiBrojLabel->Text == "" && DrzavaLabel->Text == "") ? Color::LightYellow : PrebivalistePanel->BackColor;
			Adresa->BackColor = PrebivalistePanel->BackColor;
			Grad->BackColor = PrebivalistePanel->BackColor;
			PostanskiBroj->BackColor = PrebivalistePanel->BackColor;
		}
	}
	private: System::Void Grad_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		GradLabel->Text = "";
		vector<pair<pair<gcroot<System::Windows::Forms::Label^>, string>, map<string, string>>> config = {
			{make_pair(gcroot<System::Windows::Forms::Label^>(GradLabel), fieldToString(Grad->Text)) , {
				{"required", "true"},
				{"minlength", "3"},
				{"minlength", "20"},
				{"number", "false"},
				{"special", "false"},
			}},
		};
		Validator::Login l(config);
		if (!l.validationPassed()) {
			PrebivalistePanel->BackColor = Color::FromArgb(255, 150, 150);
			Adresa->BackColor = PrebivalistePanel->BackColor;
			Grad->BackColor = PrebivalistePanel->BackColor;
			PostanskiBroj->BackColor = PrebivalistePanel->BackColor;
			l.putErrorsInFields();
		}
		else {
			GradLabel->Text = "";
			PrebivalistePanel->BackColor = (AdresaLabel->Text == "" && PostanskiBrojLabel->Text == "" && DrzavaLabel->Text == "") ? Color::LightYellow : PrebivalistePanel->BackColor;
			Adresa->BackColor = PrebivalistePanel->BackColor;
			Grad->BackColor = PrebivalistePanel->BackColor;
			PostanskiBroj->BackColor = PrebivalistePanel->BackColor;
		}
	}
	private: System::Void Jmbg_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		JmbgLabel->Text = "";
		vector<pair<pair<gcroot<System::Windows::Forms::Label^>, string>, map<string, string>>> config = {
				{make_pair(gcroot<System::Windows::Forms::Label^>(JmbgLabel), fieldToString(Jmbg->Text)) , {
					{"required", "true"},
					{"minlength", "13"}
				}},
		};
		Validator::Login l(config);
		if (!l.validationPassed()) {
			JmbgPanel->BackColor = Color::FromArgb(255, 150, 150);
			Jmbg->BackColor = JmbgPanel->BackColor;
			l.putErrorsInFields();
		}
		else {
			JmbgLabel->Text = "";
			JmbgPanel->BackColor = Color::LightYellow;
			Jmbg->BackColor = JmbgPanel->BackColor;
		}
	}
	private: System::Void Pol_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter)Ime->Focus();
	}
	private: System::Void Ime_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter) {
			e->SuppressKeyPress = true;
			Prezime->Focus();
		}
	}
	private: System::Void Prezime_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter) {
			e->SuppressKeyPress = true;
			Dan->Focus();
		}
	}
	private: System::Void Godina_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter) {
			e->SuppressKeyPress = true;
			BrojTelefona->Focus();
		}
	}
	private: System::Void Email_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter) {
			e->SuppressKeyPress = true;
			Lozinka->Focus();
		}
	}
	private: System::Void Lozinka_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter) {
			e->SuppressKeyPress = true;
			Adresa->Focus();
		}
	}
	private: System::Void Adresa_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter) {
			e->SuppressKeyPress = true;
			Grad->Focus();
		}
	}
	private: System::Void Grad_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter) {
			e->SuppressKeyPress = true;
			PostanskiBroj->Focus();
		}
	}

	private: System::Void Dan_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter) {
			e->SuppressKeyPress = true;
			Mesec->Focus();
		}
	}
	private: System::Void Mesec_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter) {
			e->SuppressKeyPress = true;
			Godina->Focus();
		}
	}
	private: System::Void Registracija_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter) {
			e->SuppressKeyPress = true;
			Unos->Focus();
		}
	}
	private: System::Void Drzava_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter) {
			e->SuppressKeyPress = true;
			Napomena->Focus();
		}
	}
	private: System::Void Napomena_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter) {
			e->SuppressKeyPress = true;
			Unos->Focus();
		}
	}
	private: System::Void PostanskiBroj_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		PostanskiBrojLabel->Text = "";
		vector<pair<pair<gcroot<System::Windows::Forms::Label^>, string>, map<string, string>>> config = {
			{make_pair(gcroot<System::Windows::Forms::Label^>(PostanskiBrojLabel), fieldToString(PostanskiBroj->Text)) , {
				{"required", "true"},
				{"minlength", "5"}
			}},
		};
		Validator::Login l(config);
		if (!l.validationPassed()) {
			PrebivalistePanel->BackColor = Color::FromArgb(255, 150, 150);
			Adresa->BackColor = PrebivalistePanel->BackColor;
			Grad->BackColor = PrebivalistePanel->BackColor;
			PostanskiBroj->BackColor = PrebivalistePanel->BackColor;
			l.putErrorsInFields();
		}
		else {
			PostanskiBrojLabel->Text = "";
			PrebivalistePanel->BackColor = (AdresaLabel->Text == "" && GradLabel->Text == "" && DrzavaLabel->Text == "") ? Color::LightYellow : PrebivalistePanel->BackColor;
			Adresa->BackColor = PrebivalistePanel->BackColor;
			Grad->BackColor = PrebivalistePanel->BackColor;
			PostanskiBroj->BackColor = PrebivalistePanel->BackColor;
		}
	}
	private: System::Void Drzava_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		DrzavaLabel->Text = "";
		vector<pair<pair<gcroot<System::Windows::Forms::Label^>, string>, map<string, string>>> config = {
			{make_pair(gcroot<System::Windows::Forms::Label^>(DrzavaLabel), fieldToString(Drzava->Text)) , {
				{"required", "true"},
			}},
		};
		Validator::Login l(config);
		if (!l.validationPassed()) {
			PrebivalistePanel->BackColor = Color::FromArgb(255, 150, 150);
			Adresa->BackColor = PrebivalistePanel->BackColor;
			Grad->BackColor = PrebivalistePanel->BackColor;
			PostanskiBroj->BackColor = PrebivalistePanel->BackColor;
			l.putErrorsInFields();
		}
		else {
			DrzavaLabel->Text = "";
			PrebivalistePanel->BackColor = (AdresaLabel->Text == "" && GradLabel->Text == "" && PostanskiBrojLabel->Text == "") ? Color::LightYellow : PrebivalistePanel->BackColor;
			Adresa->BackColor = PrebivalistePanel->BackColor;
			Grad->BackColor = PrebivalistePanel->BackColor;
			PostanskiBroj->BackColor = PrebivalistePanel->BackColor;
		}
	}
	private: System::Void Pol_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		PolLabel->Text = "";
		vector<pair<pair<gcroot<System::Windows::Forms::Label^>, string>, map<string, string>>> config = {
				{make_pair(gcroot<System::Windows::Forms::Label^>(PolLabel), fieldToString(Pol->Text)) , {
					{"required", "true"},
				}},
		};
		Validator::Login l(config);
		if (!l.validationPassed()) {
			PunoImePanel->BackColor = Color::FromArgb(255, 150, 150);
			Ime->BackColor = PunoImePanel->BackColor;
			Prezime->BackColor = PunoImePanel->BackColor;
			l.putErrorsInFields();
		}
		else {
			PolLabel->Text = "";
			PunoImePanel->BackColor = (PrezimeLabel->Text == "" && ImeLabel->Text == "") ? Color::LightYellow : PunoImePanel->BackColor;
			Ime->BackColor = PunoImePanel->BackColor;
			Prezime->BackColor = PunoImePanel->BackColor;
		}
	}
	private: System::Void TipNaloga_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		TipNalogaLabel->Text = "";
		vector<pair<pair<gcroot<System::Windows::Forms::Label^>, string>, map<string, string>>> config = {
				{make_pair(gcroot<System::Windows::Forms::Label^>(TipNalogaLabel), fieldToString(TipNaloga->Text)) , {
					{"required", "true"},
				}},
		};
		Validator::Login l(config);
		if (!l.validationPassed()) {
			TipNalogaLabel->BackColor = Color::FromArgb(255, 150, 150);
			l.putErrorsInFields();
		}
		else {
			TipNalogaLabel->Text = "";
			TipNalogaPanel->BackColor = Color::LightYellow;
		}
	}
	private: System::Void Godina_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		GodinaLabel->Text = "";
		vector<pair<pair<gcroot<System::Windows::Forms::Label^>, string>, map<string, string>>> config = {
				{make_pair(gcroot<System::Windows::Forms::Label^>(GodinaLabel), fieldToString(Godina->Text)) , {
					{"required", "true"},
				}},
		};
		Validator::Login l(config);
		if (!l.validationPassed()) {
			DatumRodjenjaPanel->BackColor = Color::FromArgb(255, 150, 150);
			l.putErrorsInFields();
		}
		else {
			GodinaLabel->Text = "";
			DatumRodjenjaPanel->BackColor = (DanLabel->Text == "" && MesecLabel->Text == "") ? Color::LightYellow : DatumRodjenjaPanel->BackColor;

		}
	}
	private: System::Void Mesec_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		MesecLabel->Text = "";
		vector<pair<pair<gcroot<System::Windows::Forms::Label^>, string>, map<string, string>>> config = {
				{make_pair(gcroot<System::Windows::Forms::Label^>(MesecLabel), fieldToString(Mesec->Text)) , {
					{"required", "true"},
				}},
		};
		Validator::Login l(config);
		if (!l.validationPassed()) {
			DatumRodjenjaPanel->BackColor = Color::FromArgb(255, 150, 150);
			l.putErrorsInFields();
		}
		else {
			MesecLabel->Text = "";
			DatumRodjenjaPanel->BackColor = (DanLabel->Text == "" && GodinaLabel->Text == "") ? Color::LightYellow : DatumRodjenjaPanel->BackColor;
		}
	}
	private: System::Void Dan_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		DanLabel->Text = "";
		vector<pair<pair<gcroot<System::Windows::Forms::Label^>, string>, map<string, string>>> config = {
				{make_pair(gcroot<System::Windows::Forms::Label^>(DanLabel), fieldToString(Dan->Text)) , {
					{"required", "true"},
				}},
		};
		Validator::Login l(config);
		if (!l.validationPassed()) {
			DatumRodjenjaPanel->BackColor = Color::FromArgb(255, 150, 150);
			l.putErrorsInFields();
		}
		else {
			DanLabel->Text = "";
			DatumRodjenjaPanel->BackColor = (MesecLabel->Text == "" && GodinaLabel->Text == "") ? Color::LightYellow : DatumRodjenjaPanel->BackColor;
		}
	}
	private: System::Void Dan_Enter(System::Object^ sender, System::EventArgs^ e) {
		DatumRodjenjaPanel->BackColor = (DatumRodjenjaPanel->BackColor == Color::White) ? Color::LightYellow : DatumRodjenjaPanel->BackColor;
	}
	private: System::Void Dan_Leave(System::Object^ sender, System::EventArgs^ e) {
		DatumRodjenjaPanel->BackColor = (DatumRodjenjaPanel->BackColor != Color::LightYellow) ? DatumRodjenjaPanel->BackColor : Color::White;
	}
	private: System::Void Mesec_Enter(System::Object^ sender, System::EventArgs^ e) {
		DatumRodjenjaPanel->BackColor = (DatumRodjenjaPanel->BackColor == Color::White) ? Color::LightYellow : DatumRodjenjaPanel->BackColor;
	}
	private: System::Void Mesec_Leave(System::Object^ sender, System::EventArgs^ e) {
		DatumRodjenjaPanel->BackColor = (DatumRodjenjaPanel->BackColor != Color::LightYellow) ? DatumRodjenjaPanel->BackColor : Color::White;
	}
	private: System::Void Godina_Enter(System::Object^ sender, System::EventArgs^ e) {
		DatumRodjenjaPanel->BackColor = (DatumRodjenjaPanel->BackColor == Color::White) ? Color::LightYellow : DatumRodjenjaPanel->BackColor;
	}
	private: System::Void Godina_Leave(System::Object^ sender, System::EventArgs^ e) {
		DatumRodjenjaPanel->BackColor = (DatumRodjenjaPanel->BackColor != Color::LightYellow) ? DatumRodjenjaPanel->BackColor : Color::White;
	}
	private: System::Void BrojTelefona_Enter(System::Object^ sender, System::EventArgs^ e) {
		BrojTelefonaPanel->BackColor = (BrojTelefonaPanel->BackColor == Color::White) ? Color::LightYellow : BrojTelefonaPanel->BackColor;
		BrojTelefona->BackColor = BrojTelefonaPanel->BackColor;
	}
	private: System::Void BrojTelefona_Leave(System::Object^ sender, System::EventArgs^ e) {
		BrojTelefonaPanel->BackColor = (BrojTelefonaPanel->BackColor != Color::LightYellow) ? BrojTelefonaPanel->BackColor : Color::White;
		BrojTelefona->BackColor = BrojTelefonaPanel->BackColor;
	}
	private: System::Void Jmbg_Enter(System::Object^ sender, System::EventArgs^ e) {
		JmbgPanel->BackColor = (JmbgPanel->BackColor == Color::White) ? Color::LightYellow : JmbgPanel->BackColor;
		Jmbg->BackColor = JmbgPanel->BackColor;
	}
	private: System::Void Jmbg_Leave(System::Object^ sender, System::EventArgs^ e) {
		JmbgPanel->BackColor = (JmbgPanel->BackColor != Color::LightYellow) ? JmbgPanel->BackColor : Color::White;
		Jmbg->BackColor = JmbgPanel->BackColor;
	}
	private: System::Void Email_Enter(System::Object^ sender, System::EventArgs^ e) {
		EmailPanel->BackColor = (EmailPanel->BackColor == Color::White) ? Color::LightYellow : EmailPanel->BackColor;
		Email->BackColor = EmailPanel->BackColor;
		PotvrdiEmail->BackColor = EmailPanel->BackColor;
	}
	private: System::Void Email_Leave(System::Object^ sender, System::EventArgs^ e) {
		EmailPanel->BackColor = (EmailPanel->BackColor != Color::LightYellow) ? EmailPanel->BackColor : Color::White;
		Email->BackColor = EmailPanel->BackColor;
		PotvrdiEmail->BackColor = EmailPanel->BackColor;
	}
	private: System::Void PotvrdiEmail_Enter(System::Object^ sender, System::EventArgs^ e) {
		EmailPanel->BackColor = (EmailPanel->BackColor == Color::White) ? Color::LightYellow : EmailPanel->BackColor;
		PotvrdiEmail->BackColor = EmailPanel->BackColor;
		Email->BackColor = EmailPanel->BackColor;
	}
	private: System::Void PotvrdiEmail_Leave(System::Object^ sender, System::EventArgs^ e) {
		EmailPanel->BackColor = (EmailPanel->BackColor != Color::LightYellow) ? EmailPanel->BackColor : Color::White;
		PotvrdiEmail->BackColor = EmailPanel->BackColor;
		Email->BackColor = EmailPanel->BackColor;
	}
	private: System::Void Lozinka_Enter(System::Object^ sender, System::EventArgs^ e) {
		LozinkaPanel->BackColor = (LozinkaPanel->BackColor == Color::White) ? Color::LightYellow : LozinkaPanel->BackColor;
		Lozinka->BackColor = LozinkaPanel->BackColor;
		PotvrdiLozinku->BackColor = LozinkaPanel->BackColor;
	}
	private: System::Void Lozinka_Leave(System::Object^ sender, System::EventArgs^ e) {
		LozinkaPanel->BackColor = (LozinkaPanel->BackColor != Color::LightYellow) ? LozinkaPanel->BackColor : Color::White;
		Lozinka->BackColor = LozinkaPanel->BackColor;
		PotvrdiLozinku->BackColor = LozinkaPanel->BackColor;
	}
	private: System::Void PrikazivanjeLozinke_Enter(System::Object^ sender, System::EventArgs^ e) {
		LozinkaPanel->BackColor = (LozinkaPanel->BackColor == Color::White) ? Color::LightYellow : LozinkaPanel->BackColor;
		Lozinka->BackColor = LozinkaPanel->BackColor;
		PotvrdiLozinku->BackColor = LozinkaPanel->BackColor;
	}
	private: System::Void PrikazivanjeLozinke_Leave(System::Object^ sender, System::EventArgs^ e) {
		LozinkaPanel->BackColor = (LozinkaPanel->BackColor != Color::LightYellow) ? LozinkaPanel->BackColor : Color::White;
		Lozinka->BackColor = LozinkaPanel->BackColor;
		PotvrdiLozinku->BackColor = LozinkaPanel->BackColor;
	}
	private: System::Void RandomLozinkaDugme_Enter(System::Object^ sender, System::EventArgs^ e) {
		LozinkaPanel->BackColor = (LozinkaPanel->BackColor != Color::LightYellow) ? LozinkaPanel->BackColor : Color::White;
		Lozinka->BackColor = LozinkaPanel->BackColor;
		PotvrdiLozinku->BackColor = LozinkaPanel->BackColor;
	}
	private: System::Void RandomLozinkaDugme_Leave(System::Object^ sender, System::EventArgs^ e) {
		LozinkaPanel->BackColor = (LozinkaPanel->BackColor != Color::LightYellow) ? LozinkaPanel->BackColor : Color::White;
		Lozinka->BackColor = LozinkaPanel->BackColor;
		PotvrdiLozinku->BackColor = LozinkaPanel->BackColor;
	}
	private: System::Void PotvrdiLozinku_Enter(System::Object^ sender, System::EventArgs^ e) {
		LozinkaPanel->BackColor = (LozinkaPanel->BackColor == Color::White) ? Color::LightYellow : LozinkaPanel->BackColor;
		Lozinka->BackColor = LozinkaPanel->BackColor;
		PotvrdiLozinku->BackColor = LozinkaPanel->BackColor;
	}
	private: System::Void PotvrdiLozinku_Leave(System::Object^ sender, System::EventArgs^ e) {
		LozinkaPanel->BackColor = (LozinkaPanel->BackColor != Color::LightYellow) ? LozinkaPanel->BackColor : Color::White;
		Lozinka->BackColor = LozinkaPanel->BackColor;
		PotvrdiLozinku->BackColor = LozinkaPanel->BackColor;
	}
	private: System::Void Adresa_Enter(System::Object^ sender, System::EventArgs^ e) {
		PrebivalistePanel->BackColor = (PrebivalistePanel->BackColor == Color::White) ? Color::LightYellow : PrebivalistePanel->BackColor;
		Grad->BackColor = PrebivalistePanel->BackColor;
		Adresa->BackColor = PrebivalistePanel->BackColor;
		PostanskiBroj->BackColor = PrebivalistePanel->BackColor;
	}
	private: System::Void Adresa_Leave(System::Object^ sender, System::EventArgs^ e) {
		PrebivalistePanel->BackColor = (PrebivalistePanel->BackColor != Color::LightYellow) ? PrebivalistePanel->BackColor : Color::White;
		Grad->BackColor = PrebivalistePanel->BackColor;
		Adresa->BackColor = PrebivalistePanel->BackColor;
		PostanskiBroj->BackColor = PrebivalistePanel->BackColor;
	}
	private: System::Void Grad_Enter(System::Object^ sender, System::EventArgs^ e) {
		PrebivalistePanel->BackColor = (PrebivalistePanel->BackColor == Color::White) ? Color::LightYellow : PrebivalistePanel->BackColor;
		Grad->BackColor = PrebivalistePanel->BackColor;
		Adresa->BackColor = PrebivalistePanel->BackColor;
		PostanskiBroj->BackColor = PrebivalistePanel->BackColor;
	}
	private: System::Void Grad_Leave(System::Object^ sender, System::EventArgs^ e) {
		PrebivalistePanel->BackColor = (PrebivalistePanel->BackColor != Color::LightYellow) ? PrebivalistePanel->BackColor : Color::White;
		Grad->BackColor = PrebivalistePanel->BackColor;
		Adresa->BackColor = PrebivalistePanel->BackColor;
		PostanskiBroj->BackColor = PrebivalistePanel->BackColor;
	}
	private: System::Void PostanskiBroj_Enter(System::Object^ sender, System::EventArgs^ e) {
		PrebivalistePanel->BackColor = (PrebivalistePanel->BackColor == Color::White) ? Color::LightYellow : PrebivalistePanel->BackColor;
		Grad->BackColor = PrebivalistePanel->BackColor;
		Adresa->BackColor = PrebivalistePanel->BackColor;
		PostanskiBroj->BackColor = PrebivalistePanel->BackColor;
	}
	private: System::Void PostanskiBroj_Leave(System::Object^ sender, System::EventArgs^ e) {
		PrebivalistePanel->BackColor = (PrebivalistePanel->BackColor != Color::LightYellow) ? PrebivalistePanel->BackColor : Color::White;
		Grad->BackColor = PrebivalistePanel->BackColor;
		Adresa->BackColor = PrebivalistePanel->BackColor;
		PostanskiBroj->BackColor = PrebivalistePanel->BackColor;

	}
	private: System::Void Drzava_Enter(System::Object^ sender, System::EventArgs^ e) {
		PrebivalistePanel->BackColor = (PrebivalistePanel->BackColor == Color::White) ? Color::LightYellow : PrebivalistePanel->BackColor;
		Grad->BackColor = PrebivalistePanel->BackColor;
		Adresa->BackColor = PrebivalistePanel->BackColor;
		PostanskiBroj->BackColor = PrebivalistePanel->BackColor;
	}
	private: System::Void Drzava_Leave(System::Object^ sender, System::EventArgs^ e) {
		PrebivalistePanel->BackColor = (PrebivalistePanel->BackColor != Color::LightYellow) ? PrebivalistePanel->BackColor : Color::White;
		Grad->BackColor = PrebivalistePanel->BackColor;
		Adresa->BackColor = PrebivalistePanel->BackColor;
		PostanskiBroj->BackColor = PrebivalistePanel->BackColor;
		
	}
	private: System::Void TipNaloga_Enter(System::Object^ sender, System::EventArgs^ e) {
		TipNalogaPanel->BackColor = (TipNalogaPanel->BackColor == Color::White) ? Color::LightYellow : TipNalogaPanel->BackColor;
	}
	private: System::Void TipNaloga_Leave(System::Object^ sender, System::EventArgs^ e) {
		TipNalogaPanel->BackColor = (TipNalogaPanel->BackColor != Color::LightYellow) ? TipNalogaPanel->BackColor : Color::White;
	}
	private: System::Void Napomena_Enter(System::Object^ sender, System::EventArgs^ e) {
		NapomenaPanel->BackColor = (NapomenaPanel->BackColor == Color::White) ? Color::LightYellow : NapomenaPanel->BackColor;
		Napomena->BackColor = NapomenaPanel->BackColor;
	}
	private: System::Void Napomena_Leave(System::Object^ sender, System::EventArgs^ e) {
		NapomenaPanel->BackColor = (NapomenaPanel->BackColor != Color::LightYellow) ? NapomenaPanel->BackColor : Color::White;
		Napomena->BackColor = NapomenaPanel->BackColor;
	}
	private: System::Void USD_Enter(System::Object^ sender, System::EventArgs^ e) {
		ValutePanel->BackColor = (ValutePanel->BackColor == Color::White) ? Color::LightYellow : ValutePanel->BackColor;
	}
	private: System::Void USD_Leave(System::Object^ sender, System::EventArgs^ e) {
		ValutePanel->BackColor = (ValutePanel->BackColor != Color::LightYellow) ? ValutePanel->BackColor : Color::White;
	}
	private: System::Void EUR_Enter(System::Object^ sender, System::EventArgs^ e) {
		ValutePanel->BackColor = (ValutePanel->BackColor == Color::White) ? Color::LightYellow : ValutePanel->BackColor;
	}
	private: System::Void EUR_Leave(System::Object^ sender, System::EventArgs^ e) {
		ValutePanel->BackColor = (ValutePanel->BackColor != Color::LightYellow) ? ValutePanel->BackColor : Color::White;
	}
	private: System::Void RSD_Enter(System::Object^ sender, System::EventArgs^ e) {
		ValutePanel->BackColor = (ValutePanel->BackColor == Color::White) ? Color::LightYellow : ValutePanel->BackColor;
	}
	private: System::Void RSD_Leave(System::Object^ sender, System::EventArgs^ e) {
		ValutePanel->BackColor = (ValutePanel->BackColor != Color::LightYellow) ? ValutePanel->BackColor : Color::White;
	}
	private: System::Void Registracija_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		Application::Exit();
	}
};
}