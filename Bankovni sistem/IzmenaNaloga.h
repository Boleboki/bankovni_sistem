#pragma once
#include "Funkcije - Varijable.h"
#include "bazapodataka.h"
#include "Validator.h"
namespace Bankovnisistem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for IzmenaNaloga
	/// </summary>
	static User korisnik;
	public ref class IzmenaNaloga : public System::Windows::Forms::Form
	{
	public:
		Form^ login_page;
	private: System::Windows::Forms::MaskedTextBox^ Jmbg;
	private: System::Windows::Forms::Label^ KorisnickoImeLabel;
	private: System::Windows::Forms::Label^ PrezimeLabel;
	private: System::Windows::Forms::Label^ ImeLabel;
	private: System::Windows::Forms::Label^ BrojTelefonaLabel;
	private: System::Windows::Forms::Label^ JmbgLabel;
	private: System::Windows::Forms::Label^ EmailLabel;
	private: System::Windows::Forms::Label^ LozinkaLabel;
	private: System::Windows::Forms::Label^ DrzavaLabel;
	private: System::Windows::Forms::Label^ PostanskiBrojLabel;
	private: System::Windows::Forms::Label^ GradLabel;
	private: System::Windows::Forms::Label^ AdresaLabel;
	private: System::Windows::Forms::Label^ TipNalogaLabel;
	public:

	public:
		Form^ main_page;
		IzmenaNaloga(void)
		{
			InitializeComponent();
		}
		IzmenaNaloga(Form^ form, Form^ form1, const User& user)
		{
			korisnik = user;
			login_page = form;
			main_page = form1;
			sve_transakcije = transakcije.FetchTranskacije("*", "idNaloga = '" + to_string(user.id) + "'");
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~IzmenaNaloga()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;

	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::RichTextBox^ Ime;

	private: System::Windows::Forms::GroupBox^ groupBox7;
	private: System::Windows::Forms::RichTextBox^ Prezime;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::MaskedTextBox^ BrojTelefona;


	private: System::Windows::Forms::GroupBox^ groupBox11;
	private: System::Windows::Forms::TextBox^ Email;
	private: System::Windows::Forms::GroupBox^ groupBox13;
	private: System::Windows::Forms::TextBox^ Lozinka;

	private: System::Windows::Forms::CheckBox^ PrikazivanjeLozinke;

	private: System::Windows::Forms::GroupBox^ groupBox9;
	private: System::Windows::Forms::RichTextBox^ Adresa;

	private: System::Windows::Forms::GroupBox^ groupBox10;
	private: System::Windows::Forms::RichTextBox^ Grad;

	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::MaskedTextBox^ PostanskiBroj;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::ComboBox^ Drzava;
	private: System::Windows::Forms::GroupBox^ groupBox5;


	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::ComboBox^ TipNaloga;
	private: System::Windows::Forms::GroupBox^ groupBox8;
	private: System::Windows::Forms::RichTextBox^ KorisnickoIme;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ IzmeniBrojTelefona;
	private: System::Windows::Forms::Button^ IzmeniEmail;
	private: System::Windows::Forms::Button^ IzmeniLozinka;
	private: System::Windows::Forms::Button^ IzmeniAdresa;
	private: System::Windows::Forms::Button^ IzmeniGrad;
	private: System::Windows::Forms::Button^ IzmeniPostanskiBroj;
	private: System::Windows::Forms::Button^ IzmeniDrzava;
	private: System::Windows::Forms::Button^ IzmeniTipNaloga;
	private: System::Windows::Forms::Button^ IzmeniJmbg;

	private: System::Windows::Forms::Button^ IzmeniKorisnickoIme;
	private: System::Windows::Forms::Button^ IzmeniPrezime;
	private: System::Windows::Forms::Button^ IzmeniIme;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Timer^ timer1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(IzmenaNaloga::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->IzmeniBrojTelefona = (gcnew System::Windows::Forms::Button());
			this->IzmeniEmail = (gcnew System::Windows::Forms::Button());
			this->IzmeniLozinka = (gcnew System::Windows::Forms::Button());
			this->IzmeniAdresa = (gcnew System::Windows::Forms::Button());
			this->IzmeniGrad = (gcnew System::Windows::Forms::Button());
			this->IzmeniPostanskiBroj = (gcnew System::Windows::Forms::Button());
			this->IzmeniDrzava = (gcnew System::Windows::Forms::Button());
			this->IzmeniTipNaloga = (gcnew System::Windows::Forms::Button());
			this->IzmeniJmbg = (gcnew System::Windows::Forms::Button());
			this->IzmeniKorisnickoIme = (gcnew System::Windows::Forms::Button());
			this->IzmeniPrezime = (gcnew System::Windows::Forms::Button());
			this->IzmeniIme = (gcnew System::Windows::Forms::Button());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->Jmbg = (gcnew System::Windows::Forms::MaskedTextBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->TipNaloga = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->Drzava = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->PostanskiBroj = (gcnew System::Windows::Forms::MaskedTextBox());
			this->groupBox10 = (gcnew System::Windows::Forms::GroupBox());
			this->Grad = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->Adresa = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox13 = (gcnew System::Windows::Forms::GroupBox());
			this->Lozinka = (gcnew System::Windows::Forms::TextBox());
			this->PrikazivanjeLozinke = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox11 = (gcnew System::Windows::Forms::GroupBox());
			this->Email = (gcnew System::Windows::Forms::TextBox());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->Prezime = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->Ime = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->KorisnickoIme = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->BrojTelefona = (gcnew System::Windows::Forms::MaskedTextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->PrezimeLabel = (gcnew System::Windows::Forms::Label());
			this->ImeLabel = (gcnew System::Windows::Forms::Label());
			this->BrojTelefonaLabel = (gcnew System::Windows::Forms::Label());
			this->JmbgLabel = (gcnew System::Windows::Forms::Label());
			this->EmailLabel = (gcnew System::Windows::Forms::Label());
			this->LozinkaLabel = (gcnew System::Windows::Forms::Label());
			this->DrzavaLabel = (gcnew System::Windows::Forms::Label());
			this->PostanskiBrojLabel = (gcnew System::Windows::Forms::Label());
			this->GradLabel = (gcnew System::Windows::Forms::Label());
			this->AdresaLabel = (gcnew System::Windows::Forms::Label());
			this->TipNalogaLabel = (gcnew System::Windows::Forms::Label());
			this->KorisnickoImeLabel = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox10->SuspendLayout();
			this->groupBox9->SuspendLayout();
			this->groupBox13->SuspendLayout();
			this->groupBox11->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->KorisnickoImeLabel);
			this->panel1->Controls->Add(this->PrezimeLabel);
			this->panel1->Controls->Add(this->ImeLabel);
			this->panel1->Controls->Add(this->BrojTelefonaLabel);
			this->panel1->Controls->Add(this->JmbgLabel);
			this->panel1->Controls->Add(this->EmailLabel);
			this->panel1->Controls->Add(this->LozinkaLabel);
			this->panel1->Controls->Add(this->DrzavaLabel);
			this->panel1->Controls->Add(this->PostanskiBrojLabel);
			this->panel1->Controls->Add(this->GradLabel);
			this->panel1->Controls->Add(this->AdresaLabel);
			this->panel1->Controls->Add(this->TipNalogaLabel);
			this->panel1->Controls->Add(this->IzmeniBrojTelefona);
			this->panel1->Controls->Add(this->IzmeniEmail);
			this->panel1->Controls->Add(this->IzmeniLozinka);
			this->panel1->Controls->Add(this->IzmeniAdresa);
			this->panel1->Controls->Add(this->IzmeniGrad);
			this->panel1->Controls->Add(this->IzmeniPostanskiBroj);
			this->panel1->Controls->Add(this->IzmeniDrzava);
			this->panel1->Controls->Add(this->IzmeniTipNaloga);
			this->panel1->Controls->Add(this->IzmeniJmbg);
			this->panel1->Controls->Add(this->IzmeniKorisnickoIme);
			this->panel1->Controls->Add(this->IzmeniPrezime);
			this->panel1->Controls->Add(this->IzmeniIme);
			this->panel1->Controls->Add(this->groupBox5);
			this->panel1->Controls->Add(this->groupBox4);
			this->panel1->Controls->Add(this->groupBox3);
			this->panel1->Controls->Add(this->groupBox2);
			this->panel1->Controls->Add(this->groupBox10);
			this->panel1->Controls->Add(this->groupBox9);
			this->panel1->Controls->Add(this->groupBox13);
			this->panel1->Controls->Add(this->PrikazivanjeLozinke);
			this->panel1->Controls->Add(this->groupBox11);
			this->panel1->Controls->Add(this->groupBox7);
			this->panel1->Controls->Add(this->groupBox6);
			this->panel1->Controls->Add(this->groupBox8);
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Location = System::Drawing::Point(91, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(628, 498);
			this->panel1->TabIndex = 0;
			// 
			// IzmeniBrojTelefona
			// 
			this->IzmeniBrojTelefona->FlatAppearance->BorderSize = 0;
			this->IzmeniBrojTelefona->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->IzmeniBrojTelefona->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IzmeniBrojTelefona->Location = System::Drawing::Point(545, 163);
			this->IzmeniBrojTelefona->Name = L"IzmeniBrojTelefona";
			this->IzmeniBrojTelefona->Size = System::Drawing::Size(65, 34);
			this->IzmeniBrojTelefona->TabIndex = 97;
			this->IzmeniBrojTelefona->Text = L"Izmeni";
			this->IzmeniBrojTelefona->UseVisualStyleBackColor = true;
			this->IzmeniBrojTelefona->Click += gcnew System::EventHandler(this, &IzmenaNaloga::IzmeniBrojTelefona_Click);
			// 
			// IzmeniEmail
			// 
			this->IzmeniEmail->FlatAppearance->BorderSize = 0;
			this->IzmeniEmail->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->IzmeniEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IzmeniEmail->Location = System::Drawing::Point(246, 283);
			this->IzmeniEmail->Name = L"IzmeniEmail";
			this->IzmeniEmail->Size = System::Drawing::Size(65, 34);
			this->IzmeniEmail->TabIndex = 96;
			this->IzmeniEmail->Text = L"Izmeni";
			this->IzmeniEmail->UseVisualStyleBackColor = true;
			this->IzmeniEmail->Click += gcnew System::EventHandler(this, &IzmenaNaloga::IzmeniEmail_Click);
			// 
			// IzmeniLozinka
			// 
			this->IzmeniLozinka->FlatAppearance->BorderSize = 0;
			this->IzmeniLozinka->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->IzmeniLozinka->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IzmeniLozinka->Location = System::Drawing::Point(544, 276);
			this->IzmeniLozinka->Name = L"IzmeniLozinka";
			this->IzmeniLozinka->Size = System::Drawing::Size(65, 34);
			this->IzmeniLozinka->TabIndex = 95;
			this->IzmeniLozinka->Text = L"Izmeni";
			this->IzmeniLozinka->UseVisualStyleBackColor = true;
			this->IzmeniLozinka->Click += gcnew System::EventHandler(this, &IzmenaNaloga::IzmeniLozinka_Click);
			// 
			// IzmeniAdresa
			// 
			this->IzmeniAdresa->FlatAppearance->BorderSize = 0;
			this->IzmeniAdresa->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->IzmeniAdresa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IzmeniAdresa->Location = System::Drawing::Point(246, 410);
			this->IzmeniAdresa->Name = L"IzmeniAdresa";
			this->IzmeniAdresa->Size = System::Drawing::Size(65, 34);
			this->IzmeniAdresa->TabIndex = 94;
			this->IzmeniAdresa->Text = L"Izmeni";
			this->IzmeniAdresa->UseVisualStyleBackColor = true;
			this->IzmeniAdresa->Click += gcnew System::EventHandler(this, &IzmenaNaloga::IzmeniAdresa_Click);
			// 
			// IzmeniGrad
			// 
			this->IzmeniGrad->FlatAppearance->BorderSize = 0;
			this->IzmeniGrad->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->IzmeniGrad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IzmeniGrad->Location = System::Drawing::Point(545, 410);
			this->IzmeniGrad->Name = L"IzmeniGrad";
			this->IzmeniGrad->Size = System::Drawing::Size(65, 34);
			this->IzmeniGrad->TabIndex = 93;
			this->IzmeniGrad->Text = L"Izmeni";
			this->IzmeniGrad->UseVisualStyleBackColor = true;
			this->IzmeniGrad->Click += gcnew System::EventHandler(this, &IzmenaNaloga::IzmeniGrad_Click);
			// 
			// IzmeniPostanskiBroj
			// 
			this->IzmeniPostanskiBroj->FlatAppearance->BorderSize = 0;
			this->IzmeniPostanskiBroj->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->IzmeniPostanskiBroj->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->IzmeniPostanskiBroj->Location = System::Drawing::Point(247, 551);
			this->IzmeniPostanskiBroj->Name = L"IzmeniPostanskiBroj";
			this->IzmeniPostanskiBroj->Size = System::Drawing::Size(65, 34);
			this->IzmeniPostanskiBroj->TabIndex = 92;
			this->IzmeniPostanskiBroj->Text = L"Izmeni";
			this->IzmeniPostanskiBroj->UseVisualStyleBackColor = true;
			this->IzmeniPostanskiBroj->Click += gcnew System::EventHandler(this, &IzmenaNaloga::IzmeniPostanskiBroj_Click);
			// 
			// IzmeniDrzava
			// 
			this->IzmeniDrzava->FlatAppearance->BorderSize = 0;
			this->IzmeniDrzava->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->IzmeniDrzava->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IzmeniDrzava->Location = System::Drawing::Point(545, 551);
			this->IzmeniDrzava->Name = L"IzmeniDrzava";
			this->IzmeniDrzava->Size = System::Drawing::Size(65, 34);
			this->IzmeniDrzava->TabIndex = 91;
			this->IzmeniDrzava->Text = L"Izmeni";
			this->IzmeniDrzava->UseVisualStyleBackColor = true;
			this->IzmeniDrzava->Click += gcnew System::EventHandler(this, &IzmenaNaloga::IzmeniDrzava_Click);
			// 
			// IzmeniTipNaloga
			// 
			this->IzmeniTipNaloga->FlatAppearance->BorderSize = 0;
			this->IzmeniTipNaloga->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->IzmeniTipNaloga->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IzmeniTipNaloga->Location = System::Drawing::Point(247, 678);
			this->IzmeniTipNaloga->Name = L"IzmeniTipNaloga";
			this->IzmeniTipNaloga->Size = System::Drawing::Size(65, 34);
			this->IzmeniTipNaloga->TabIndex = 90;
			this->IzmeniTipNaloga->Text = L"Izmeni";
			this->IzmeniTipNaloga->UseVisualStyleBackColor = true;
			this->IzmeniTipNaloga->Click += gcnew System::EventHandler(this, &IzmenaNaloga::IzmeniTipNaloga_Click);
			// 
			// IzmeniJmbg
			// 
			this->IzmeniJmbg->FlatAppearance->BorderSize = 0;
			this->IzmeniJmbg->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->IzmeniJmbg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IzmeniJmbg->Location = System::Drawing::Point(545, 678);
			this->IzmeniJmbg->Name = L"IzmeniJmbg";
			this->IzmeniJmbg->Size = System::Drawing::Size(65, 34);
			this->IzmeniJmbg->TabIndex = 89;
			this->IzmeniJmbg->Text = L"Izmeni";
			this->IzmeniJmbg->UseVisualStyleBackColor = true;
			this->IzmeniJmbg->Click += gcnew System::EventHandler(this, &IzmenaNaloga::IzmeniJmbg_Click);
			// 
			// IzmeniKorisnickoIme
			// 
			this->IzmeniKorisnickoIme->FlatAppearance->BorderSize = 0;
			this->IzmeniKorisnickoIme->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->IzmeniKorisnickoIme->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->IzmeniKorisnickoIme->Location = System::Drawing::Point(246, 163);
			this->IzmeniKorisnickoIme->Name = L"IzmeniKorisnickoIme";
			this->IzmeniKorisnickoIme->Size = System::Drawing::Size(65, 34);
			this->IzmeniKorisnickoIme->TabIndex = 88;
			this->IzmeniKorisnickoIme->Text = L"Izmeni";
			this->IzmeniKorisnickoIme->UseVisualStyleBackColor = true;
			this->IzmeniKorisnickoIme->Click += gcnew System::EventHandler(this, &IzmenaNaloga::IzmeniKorisnickoIme_Click);
			// 
			// IzmeniPrezime
			// 
			this->IzmeniPrezime->FlatAppearance->BorderSize = 0;
			this->IzmeniPrezime->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->IzmeniPrezime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IzmeniPrezime->Location = System::Drawing::Point(545, 35);
			this->IzmeniPrezime->Name = L"IzmeniPrezime";
			this->IzmeniPrezime->Size = System::Drawing::Size(65, 34);
			this->IzmeniPrezime->TabIndex = 87;
			this->IzmeniPrezime->Text = L"Izmeni";
			this->IzmeniPrezime->UseVisualStyleBackColor = true;
			this->IzmeniPrezime->Click += gcnew System::EventHandler(this, &IzmenaNaloga::IzmeniPrezime_Click);
			// 
			// IzmeniIme
			// 
			this->IzmeniIme->FlatAppearance->BorderSize = 0;
			this->IzmeniIme->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->IzmeniIme->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IzmeniIme->Location = System::Drawing::Point(240, 35);
			this->IzmeniIme->Name = L"IzmeniIme";
			this->IzmeniIme->Size = System::Drawing::Size(65, 34);
			this->IzmeniIme->TabIndex = 86;
			this->IzmeniIme->Text = L"Izmeni";
			this->IzmeniIme->UseVisualStyleBackColor = true;
			this->IzmeniIme->Click += gcnew System::EventHandler(this, &IzmenaNaloga::IzmeniIme_Click);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->Jmbg);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox5->Location = System::Drawing::Point(317, 656);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(221, 63);
			this->groupBox5->TabIndex = 84;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Jmbg";
			// 
			// Jmbg
			// 
			this->Jmbg->BackColor = System::Drawing::Color::White;
			this->Jmbg->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Jmbg->Enabled = false;
			this->Jmbg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Jmbg->Location = System::Drawing::Point(4, 26);
			this->Jmbg->Mask = L"0000000000000";
			this->Jmbg->Name = L"Jmbg";
			this->Jmbg->Size = System::Drawing::Size(213, 22);
			this->Jmbg->TabIndex = 1;
			this->Jmbg->ValidatingType = System::Int32::typeid;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->TipNaloga);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox4->Location = System::Drawing::Point(19, 656);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(222, 63);
			this->groupBox4->TabIndex = 83;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Tip Naloga";
			// 
			// TipNaloga
			// 
			this->TipNaloga->BackColor = System::Drawing::SystemColors::Window;
			this->TipNaloga->Cursor = System::Windows::Forms::Cursors::Hand;
			this->TipNaloga->DropDownHeight = 150;
			this->TipNaloga->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->TipNaloga->Enabled = false;
			this->TipNaloga->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TipNaloga->FormattingEnabled = true;
			this->TipNaloga->IntegralHeight = false;
			this->TipNaloga->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Tekuci", L"Stedni", L"Depozitni", L"Devizni",
					L"Poslovni", L"Student", L"Penzioni"
			});
			this->TipNaloga->Location = System::Drawing::Point(7, 23);
			this->TipNaloga->Name = L"TipNaloga";
			this->TipNaloga->Size = System::Drawing::Size(208, 30);
			this->TipNaloga->TabIndex = 82;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->Drzava);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(317, 529);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(222, 63);
			this->groupBox3->TabIndex = 81;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Država";
			// 
			// Drzava
			// 
			this->Drzava->BackColor = System::Drawing::SystemColors::Window;
			this->Drzava->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Drzava->DropDownHeight = 150;
			this->Drzava->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Drzava->Enabled = false;
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
			this->Drzava->Size = System::Drawing::Size(209, 30);
			this->Drzava->TabIndex = 52;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->PostanskiBroj);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(19, 529);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(222, 63);
			this->groupBox2->TabIndex = 79;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Poštanski broj";
			// 
			// PostanskiBroj
			// 
			this->PostanskiBroj->BackColor = System::Drawing::Color::White;
			this->PostanskiBroj->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->PostanskiBroj->Enabled = false;
			this->PostanskiBroj->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PostanskiBroj->Location = System::Drawing::Point(6, 28);
			this->PostanskiBroj->Mask = L"00000";
			this->PostanskiBroj->Name = L"PostanskiBroj";
			this->PostanskiBroj->Size = System::Drawing::Size(213, 22);
			this->PostanskiBroj->TabIndex = 0;
			this->PostanskiBroj->ValidatingType = System::Int32::typeid;
			// 
			// groupBox10
			// 
			this->groupBox10->Controls->Add(this->Grad);
			this->groupBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox10->Location = System::Drawing::Point(317, 388);
			this->groupBox10->Name = L"groupBox10";
			this->groupBox10->Size = System::Drawing::Size(221, 63);
			this->groupBox10->TabIndex = 77;
			this->groupBox10->TabStop = false;
			this->groupBox10->Text = L"Grad";
			// 
			// Grad
			// 
			this->Grad->BackColor = System::Drawing::Color::White;
			this->Grad->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Grad->Enabled = false;
			this->Grad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Grad->Location = System::Drawing::Point(7, 22);
			this->Grad->Name = L"Grad";
			this->Grad->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->Grad->Size = System::Drawing::Size(208, 30);
			this->Grad->TabIndex = 0;
			this->Grad->Text = L"";
			this->Grad->WordWrap = false;
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->Adresa);
			this->groupBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox9->Location = System::Drawing::Point(18, 388);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(221, 63);
			this->groupBox9->TabIndex = 75;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"Adresa";
			// 
			// Adresa
			// 
			this->Adresa->BackColor = System::Drawing::Color::White;
			this->Adresa->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Adresa->Enabled = false;
			this->Adresa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Adresa->Location = System::Drawing::Point(7, 22);
			this->Adresa->Name = L"Adresa";
			this->Adresa->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->Adresa->Size = System::Drawing::Size(208, 30);
			this->Adresa->TabIndex = 0;
			this->Adresa->Text = L"";
			this->Adresa->WordWrap = false;
			// 
			// groupBox13
			// 
			this->groupBox13->Controls->Add(this->Lozinka);
			this->groupBox13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox13->Location = System::Drawing::Point(317, 254);
			this->groupBox13->Name = L"groupBox13";
			this->groupBox13->Size = System::Drawing::Size(221, 63);
			this->groupBox13->TabIndex = 74;
			this->groupBox13->TabStop = false;
			this->groupBox13->Text = L"Lozinka";
			// 
			// Lozinka
			// 
			this->Lozinka->BackColor = System::Drawing::SystemColors::Control;
			this->Lozinka->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Lozinka->Enabled = false;
			this->Lozinka->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lozinka->ForeColor = System::Drawing::SystemColors::WindowText;
			this->Lozinka->Location = System::Drawing::Point(6, 24);
			this->Lozinka->Margin = System::Windows::Forms::Padding(4);
			this->Lozinka->Name = L"Lozinka";
			this->Lozinka->Size = System::Drawing::Size(209, 29);
			this->Lozinka->TabIndex = 27;
			this->Lozinka->UseSystemPasswordChar = true;
			this->Lozinka->WordWrap = false;
			// 
			// PrikazivanjeLozinke
			// 
			this->PrikazivanjeLozinke->AutoSize = true;
			this->PrikazivanjeLozinke->Cursor = System::Windows::Forms::Cursors::Hand;
			this->PrikazivanjeLozinke->Location = System::Drawing::Point(314, 322);
			this->PrikazivanjeLozinke->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PrikazivanjeLozinke->Name = L"PrikazivanjeLozinke";
			this->PrikazivanjeLozinke->Size = System::Drawing::Size(79, 17);
			this->PrikazivanjeLozinke->TabIndex = 72;
			this->PrikazivanjeLozinke->Text = L"Prikaži šifru";
			this->PrikazivanjeLozinke->UseVisualStyleBackColor = true;
			this->PrikazivanjeLozinke->CheckedChanged += gcnew System::EventHandler(this, &IzmenaNaloga::PrikazivanjeLozinke_CheckedChanged);
			// 
			// groupBox11
			// 
			this->groupBox11->Controls->Add(this->Email);
			this->groupBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox11->Location = System::Drawing::Point(18, 261);
			this->groupBox11->Name = L"groupBox11";
			this->groupBox11->Size = System::Drawing::Size(223, 63);
			this->groupBox11->TabIndex = 71;
			this->groupBox11->TabStop = false;
			this->groupBox11->Text = L"Email";
			// 
			// Email
			// 
			this->Email->BackColor = System::Drawing::Color::White;
			this->Email->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Email->Enabled = false;
			this->Email->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Email->Location = System::Drawing::Point(7, 24);
			this->Email->Margin = System::Windows::Forms::Padding(4);
			this->Email->Multiline = true;
			this->Email->Name = L"Email";
			this->Email->Size = System::Drawing::Size(211, 29);
			this->Email->TabIndex = 27;
			this->Email->WordWrap = false;
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->Prezime);
			this->groupBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox7->ForeColor = System::Drawing::SystemColors::ControlText;
			this->groupBox7->Location = System::Drawing::Point(317, 13);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(223, 63);
			this->groupBox7->TabIndex = 63;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Prezime";
			// 
			// Prezime
			// 
			this->Prezime->BackColor = System::Drawing::Color::White;
			this->Prezime->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Prezime->Enabled = false;
			this->Prezime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Prezime->Location = System::Drawing::Point(6, 22);
			this->Prezime->Name = L"Prezime";
			this->Prezime->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->Prezime->Size = System::Drawing::Size(210, 30);
			this->Prezime->TabIndex = 41;
			this->Prezime->Text = L"";
			this->Prezime->WordWrap = false;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->Ime);
			this->groupBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox6->Location = System::Drawing::Point(12, 13);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(223, 63);
			this->groupBox6->TabIndex = 61;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Ime";
			// 
			// Ime
			// 
			this->Ime->BackColor = System::Drawing::Color::White;
			this->Ime->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Ime->Enabled = false;
			this->Ime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ime->Location = System::Drawing::Point(7, 22);
			this->Ime->Name = L"Ime";
			this->Ime->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->Ime->Size = System::Drawing::Size(210, 30);
			this->Ime->TabIndex = 0;
			this->Ime->Text = L"";
			this->Ime->WordWrap = false;
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->KorisnickoIme);
			this->groupBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox8->ForeColor = System::Drawing::SystemColors::ControlText;
			this->groupBox8->Location = System::Drawing::Point(18, 141);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(223, 63);
			this->groupBox8->TabIndex = 85;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Korisnicko Ime";
			// 
			// KorisnickoIme
			// 
			this->KorisnickoIme->BackColor = System::Drawing::Color::White;
			this->KorisnickoIme->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->KorisnickoIme->Enabled = false;
			this->KorisnickoIme->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->KorisnickoIme->Location = System::Drawing::Point(6, 22);
			this->KorisnickoIme->Name = L"KorisnickoIme";
			this->KorisnickoIme->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->KorisnickoIme->Size = System::Drawing::Size(210, 30);
			this->KorisnickoIme->TabIndex = 41;
			this->KorisnickoIme->Text = L"";
			this->KorisnickoIme->WordWrap = false;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->BrojTelefona);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->groupBox1->Location = System::Drawing::Point(317, 141);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(223, 63);
			this->groupBox1->TabIndex = 69;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Broj Telefona";
			// 
			// BrojTelefona
			// 
			this->BrojTelefona->BackColor = System::Drawing::Color::White;
			this->BrojTelefona->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->BrojTelefona->Enabled = false;
			this->BrojTelefona->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BrojTelefona->HidePromptOnLeave = true;
			this->BrojTelefona->Location = System::Drawing::Point(8, 23);
			this->BrojTelefona->Mask = L"+000 00 0000000";
			this->BrojTelefona->Name = L"BrojTelefona";
			this->BrojTelefona->Size = System::Drawing::Size(210, 22);
			this->BrojTelefona->TabIndex = 67;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::AppStarting;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(274, 173);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(202, 203);
			this->pictureBox1->TabIndex = 98;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::ForestGreen;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(253, 542);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(119, 36);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Sačuvaj";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &IzmenaNaloga::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Gray;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(390, 542);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(122, 36);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Otkaži";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &IzmenaNaloga::button2_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &IzmenaNaloga::timer1_Tick);
			// 
			// PrezimeLabel
			// 
			this->PrezimeLabel->AutoSize = true;
			this->PrezimeLabel->ForeColor = System::Drawing::Color::Red;
			this->PrezimeLabel->Location = System::Drawing::Point(315, 79);
			this->PrezimeLabel->Name = L"PrezimeLabel";
			this->PrezimeLabel->Size = System::Drawing::Size(70, 13);
			this->PrezimeLabel->TabIndex = 99;
			this->PrezimeLabel->Text = L"PrezimeLabel";
			// 
			// ImeLabel
			// 
			this->ImeLabel->AutoSize = true;
			this->ImeLabel->ForeColor = System::Drawing::Color::Red;
			this->ImeLabel->Location = System::Drawing::Point(9, 79);
			this->ImeLabel->Name = L"ImeLabel";
			this->ImeLabel->Size = System::Drawing::Size(50, 13);
			this->ImeLabel->TabIndex = 98;
			this->ImeLabel->Text = L"ImeLabel";
			// 
			// BrojTelefonaLabel
			// 
			this->BrojTelefonaLabel->AutoSize = true;
			this->BrojTelefonaLabel->ForeColor = System::Drawing::Color::Red;
			this->BrojTelefonaLabel->Location = System::Drawing::Point(315, 207);
			this->BrojTelefonaLabel->Name = L"BrojTelefonaLabel";
			this->BrojTelefonaLabel->Size = System::Drawing::Size(93, 13);
			this->BrojTelefonaLabel->TabIndex = 104;
			this->BrojTelefonaLabel->Text = L"BrojTelefonaLabel";
			// 
			// JmbgLabel
			// 
			this->JmbgLabel->AutoSize = true;
			this->JmbgLabel->ForeColor = System::Drawing::Color::Red;
			this->JmbgLabel->Location = System::Drawing::Point(315, 722);
			this->JmbgLabel->Name = L"JmbgLabel";
			this->JmbgLabel->Size = System::Drawing::Size(58, 13);
			this->JmbgLabel->TabIndex = 105;
			this->JmbgLabel->Text = L"JmbgLabel";
			// 
			// EmailLabel
			// 
			this->EmailLabel->AutoSize = true;
			this->EmailLabel->ForeColor = System::Drawing::Color::Red;
			this->EmailLabel->Location = System::Drawing::Point(16, 327);
			this->EmailLabel->Name = L"EmailLabel";
			this->EmailLabel->Size = System::Drawing::Size(58, 13);
			this->EmailLabel->TabIndex = 106;
			this->EmailLabel->Text = L"EmailLabel";
			// 
			// LozinkaLabel
			// 
			this->LozinkaLabel->AutoSize = true;
			this->LozinkaLabel->ForeColor = System::Drawing::Color::Red;
			this->LozinkaLabel->Location = System::Drawing::Point(314, 341);
			this->LozinkaLabel->Name = L"LozinkaLabel";
			this->LozinkaLabel->Size = System::Drawing::Size(70, 13);
			this->LozinkaLabel->TabIndex = 107;
			this->LozinkaLabel->Text = L"LozinkaLabel";
			// 
			// DrzavaLabel
			// 
			this->DrzavaLabel->AutoSize = true;
			this->DrzavaLabel->ForeColor = System::Drawing::Color::Red;
			this->DrzavaLabel->Location = System::Drawing::Point(315, 595);
			this->DrzavaLabel->Name = L"DrzavaLabel";
			this->DrzavaLabel->Size = System::Drawing::Size(67, 13);
			this->DrzavaLabel->TabIndex = 108;
			this->DrzavaLabel->Text = L"DrzavaLabel";
			// 
			// PostanskiBrojLabel
			// 
			this->PostanskiBrojLabel->AutoSize = true;
			this->PostanskiBrojLabel->ForeColor = System::Drawing::Color::Red;
			this->PostanskiBrojLabel->Location = System::Drawing::Point(16, 595);
			this->PostanskiBrojLabel->Name = L"PostanskiBrojLabel";
			this->PostanskiBrojLabel->Size = System::Drawing::Size(97, 13);
			this->PostanskiBrojLabel->TabIndex = 103;
			this->PostanskiBrojLabel->Text = L"PostanskiBrojLabel";
			// 
			// GradLabel
			// 
			this->GradLabel->AutoSize = true;
			this->GradLabel->ForeColor = System::Drawing::Color::Red;
			this->GradLabel->Location = System::Drawing::Point(315, 454);
			this->GradLabel->Name = L"GradLabel";
			this->GradLabel->Size = System::Drawing::Size(56, 13);
			this->GradLabel->TabIndex = 101;
			this->GradLabel->Text = L"GradLabel";
			// 
			// AdresaLabel
			// 
			this->AdresaLabel->AutoSize = true;
			this->AdresaLabel->ForeColor = System::Drawing::Color::Red;
			this->AdresaLabel->Location = System::Drawing::Point(15, 454);
			this->AdresaLabel->Name = L"AdresaLabel";
			this->AdresaLabel->Size = System::Drawing::Size(66, 13);
			this->AdresaLabel->TabIndex = 100;
			this->AdresaLabel->Text = L"AdresaLabel";
			// 
			// TipNalogaLabel
			// 
			this->TipNalogaLabel->AutoSize = true;
			this->TipNalogaLabel->ForeColor = System::Drawing::Color::Red;
			this->TipNalogaLabel->Location = System::Drawing::Point(16, 722);
			this->TipNalogaLabel->Name = L"TipNalogaLabel";
			this->TipNalogaLabel->Size = System::Drawing::Size(82, 13);
			this->TipNalogaLabel->TabIndex = 102;
			this->TipNalogaLabel->Text = L"TipNalogaLabel";
			// 
			// KorisnickoImeLabel
			// 
			this->KorisnickoImeLabel->AutoSize = true;
			this->KorisnickoImeLabel->ForeColor = System::Drawing::Color::Red;
			this->KorisnickoImeLabel->Location = System::Drawing::Point(16, 207);
			this->KorisnickoImeLabel->Name = L"KorisnickoImeLabel";
			this->KorisnickoImeLabel->Size = System::Drawing::Size(99, 13);
			this->KorisnickoImeLabel->TabIndex = 109;
			this->KorisnickoImeLabel->Text = L"KorisnickoImeLabel";
			// 
			// IzmenaNaloga
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(760, 597);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"IzmenaNaloga";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"IzmenaNaloga";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &IzmenaNaloga::IzmenaNaloga_FormClosed);
			this->Load += gcnew System::EventHandler(this, &IzmenaNaloga::IzmenaNaloga_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox10->ResumeLayout(false);
			this->groupBox9->ResumeLayout(false);
			this->groupBox13->ResumeLayout(false);
			this->groupBox13->PerformLayout();
			this->groupBox11->ResumeLayout(false);
			this->groupBox11->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox6->ResumeLayout(false);
			this->groupBox8->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void IzmenaNaloga_Load(System::Object^ sender, System::EventArgs^ e) {
		KorisnickoImeLabel->Text = "";
		ImeLabel->Text = "";
		PrezimeLabel->Text = "";
		BrojTelefonaLabel->Text = "";
		JmbgLabel->Text = "";
		EmailLabel->Text = "";
		LozinkaLabel->Text = "";
		AdresaLabel->Text = "";
		GradLabel->Text = "";
		PostanskiBrojLabel->Text = "";
		DrzavaLabel->Text = "";
		TipNalogaLabel->Text = "";
		Ime->Text = toField(korisnik.user.ime);
		Prezime->Text = toField(korisnik.user.prezime);
		KorisnickoIme->Text = toField(korisnik.user.korisnicko_ime);
		Email->Text = toField(korisnik.email);
		Lozinka->Text = toField(korisnik.password);
		Adresa->Text = toField(korisnik.user.prebivaliste.adresa);
		PostanskiBroj->Text = toField(korisnik.user.prebivaliste.postanski_broj);
		Drzava->Text = toField(korisnik.user.prebivaliste.drzava);
		Grad->Text = toField(korisnik.user.prebivaliste.grad);
		BrojTelefona->Text = toField(korisnik.user.telefon);
		TipNaloga->Text = toField(korisnik.vrsta_naloga);
		Jmbg->Text = toField(korisnik.user.jmbg);
	}
	private: System::Void PrikazivanjeLozinke_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (PrikazivanjeLozinke->Checked)Lozinka->UseSystemPasswordChar = false;
		else Lozinka->UseSystemPasswordChar = true;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		string broj = StringTools::trim(fieldToString(BrojTelefona->Text));
		broj.erase(0, 1);
		KorisnickoImeLabel->Text = "";
		ImeLabel->Text = "";
		PrezimeLabel->Text = "";
		BrojTelefonaLabel->Text = "";
		JmbgLabel->Text = "";
		EmailLabel->Text = "";
		LozinkaLabel->Text = "";
		AdresaLabel->Text = "";
		GradLabel->Text = "";
		PostanskiBrojLabel->Text = "";
		DrzavaLabel->Text = "";
		TipNalogaLabel->Text = "";
		vector<pair<pair<gcroot<System::Windows::Forms::Label^>, string>, map<string, string>>> config = {
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
			{make_pair(gcroot<System::Windows::Forms::Label^>(KorisnickoImeLabel), fieldToString(KorisnickoIme->Text)) , {
				{"required", "true"},
				{"minlength", "5"},
				{"maxlength", "15"},
				{"regex", "^[a-zA-z]{3,}.*$"},
			}},
			{make_pair(gcroot<System::Windows::Forms::Label^>(BrojTelefonaLabel), broj) , {
				{"required", "false"},
				{"minlength", "14"},
			}},
			{make_pair(gcroot<System::Windows::Forms::Label^>(JmbgLabel), fieldToString(Jmbg->Text)) , {
				{"required", "true"},
				{"minlength", "13"},
			}},
			{make_pair(gcroot<System::Windows::Forms::Label^>(EmailLabel), fieldToString(Email->Text)) , {
				{"required", "true"},
				{"email", "true"},
				{"space", "false"},
			}},
			{make_pair(gcroot<System::Windows::Forms::Label^>(LozinkaLabel), fieldToString(Lozinka->Text)) , {
				{"required", "true"},
				{"password", "true"},
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
				{"minlength", "5"},
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
		}
		else {
			string id = to_string(korisnik.id);
			if (Ime->Enabled)
				nalozi.updateField("ime", "id = '" + id + "'", fieldToString(Ime->Text));
			if (Prezime->Enabled)
				nalozi.updateField("prezime", "id = '" + id + "'", fieldToString(Prezime->Text));
			if (KorisnickoIme->Enabled)
				nalozi.updateField("korisnicko_ime", "id = '" + id + "'", fieldToString(KorisnickoIme->Text));
			if (Email->Enabled)
				nalozi.updateField("email", "id = '" + id + "'", fieldToString(Email->Text));
			if (Lozinka->Enabled)
				nalozi.updateField("lozinka", "id = '" + id + "'", fieldToString(Lozinka->Text));
			if (Adresa->Enabled)
				nalozi.updateField("adresa", "id = '" + id + "'", fieldToString(Adresa->Text));
			if (Grad->Enabled)
				nalozi.updateField("grad", "id = '" + id + "'", fieldToString(Grad->Text));
			if (Drzava->Enabled)
				nalozi.updateField("drzava", "id = '" + id + "'", fieldToString(Drzava->Text));
			if (PostanskiBroj->Enabled)
				nalozi.updateField("postanski_broj", "id = '" + id + "'", fieldToString(PostanskiBroj->Text));
			if (BrojTelefona->Enabled)
				nalozi.updateField("telefon", "id = '" + id + "'", fieldToString(BrojTelefona->Text));
			if (TipNaloga->Enabled)
				nalozi.updateField("vrsta_naloga", "id = '" + id + "'", fieldToString(TipNaloga->Text));
			if (Jmbg->Enabled)
				nalozi.updateField("jmbg", "id = '" + id + "'", fieldToString(Jmbg->Text));
			pictureBox1->Visible = true;
			panel1->Visible = false;
			button1->Visible = false;
			button2->Visible = false;
			this->Cursor = Cursors::AppStarting;
			pictureBox1->Cursor = Cursors::AppStarting;
			this->BackColor = Color::Gray;
			timer1->Start();
		}
		
		
	}
	private: System::Void IzmenaNaloga_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		this->Hide();
		main_page->Show();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		main_page->Show();
	}
	private: System::Void IzmeniIme_Click(System::Object^ sender, System::EventArgs^ e) {
		Ime->Enabled = (Ime->Enabled) ? false : true;
	}
	private: System::Void IzmeniPrezime_Click(System::Object^ sender, System::EventArgs^ e) {
		Prezime->Enabled = (Prezime->Enabled) ? false : true;
	}
	private: System::Void IzmeniKorisnickoIme_Click(System::Object^ sender, System::EventArgs^ e) {
		KorisnickoIme->Enabled = (KorisnickoIme->Enabled) ? false : true;
	}
	private: System::Void IzmeniBrojTelefona_Click(System::Object^ sender, System::EventArgs^ e) {
		BrojTelefona->Enabled = (BrojTelefona->Enabled) ? false : true;
	}
	private: System::Void IzmeniEmail_Click(System::Object^ sender, System::EventArgs^ e) {
		Email->Enabled = (Email->Enabled) ? false : true;
	}
	private: System::Void IzmeniLozinka_Click(System::Object^ sender, System::EventArgs^ e) {
		Lozinka->Enabled = (Lozinka->Enabled) ? false : true;
	}
	private: System::Void IzmeniAdresa_Click(System::Object^ sender, System::EventArgs^ e) {
		Adresa->Enabled = (Adresa->Enabled) ? false : true;
	}
	private: System::Void IzmeniGrad_Click(System::Object^ sender, System::EventArgs^ e) {
		Grad->Enabled = (Grad->Enabled) ? false : true;
	}
	private: System::Void IzmeniPostanskiBroj_Click(System::Object^ sender, System::EventArgs^ e) {
		PostanskiBroj->Enabled = (PostanskiBroj->Enabled) ? false : true;
	}
	private: System::Void IzmeniDrzava_Click(System::Object^ sender, System::EventArgs^ e) {
		Drzava->Enabled = (Drzava->Enabled) ? false : true;
	}
	private: System::Void IzmeniTipNaloga_Click(System::Object^ sender, System::EventArgs^ e) {
		TipNaloga->Enabled = (TipNaloga->Enabled) ? false : true;
	}
	private: System::Void IzmeniJmbg_Click(System::Object^ sender, System::EventArgs^ e) {
		Jmbg->Enabled = (Jmbg->Enabled) ? false : true;
	}
	private: int br_sec = 0;
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		br_sec++;
		if (br_sec == 3) {
			this->Hide();
			login_page->Show();
			timer1->Stop();
		}
		
	}
	
};
}
