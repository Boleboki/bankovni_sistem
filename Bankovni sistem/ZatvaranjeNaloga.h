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
	/// Summary for ZatvaranjeNaloga
	/// </summary>
	public ref class ZatvaranjeNaloga : public System::Windows::Forms::Form
	{
	public:
		Form^ main;
		Form^ login_page;
		ZatvaranjeNaloga(void)
		{
			InitializeComponent();
		}
		ZatvaranjeNaloga(Form^ main, const User& data, Form^ login)
		{
			login_page = login;
			this->main = main;
			user = data;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ZatvaranjeNaloga()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:












	private: System::Windows::Forms::GroupBox^ groupBox13;
	private: System::Windows::Forms::TextBox^ Lozinka;
	private: System::Windows::Forms::CheckBox^ PrikazivanjeLozinke;
	private: System::Windows::Forms::GroupBox^ groupBox11;
	private: System::Windows::Forms::TextBox^ Email;




	private: System::Windows::Forms::GroupBox^ groupBox7;
	private: System::Windows::Forms::RichTextBox^ Prezime;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::RichTextBox^ Ime;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ PrezimeLabel;
	private: System::Windows::Forms::Label^ ImeLabel;
	private: System::Windows::Forms::Label^ EmailLabel;
	private: System::Windows::Forms::Label^ LozinkaLabel;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ZatvaranjeNaloga::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->PrezimeLabel = (gcnew System::Windows::Forms::Label());
			this->ImeLabel = (gcnew System::Windows::Forms::Label());
			this->EmailLabel = (gcnew System::Windows::Forms::Label());
			this->LozinkaLabel = (gcnew System::Windows::Forms::Label());
			this->groupBox13 = (gcnew System::Windows::Forms::GroupBox());
			this->Lozinka = (gcnew System::Windows::Forms::TextBox());
			this->PrikazivanjeLozinke = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox11 = (gcnew System::Windows::Forms::GroupBox());
			this->Email = (gcnew System::Windows::Forms::TextBox());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->Prezime = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->Ime = (gcnew System::Windows::Forms::RichTextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			this->groupBox13->SuspendLayout();
			this->groupBox11->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->Controls->Add(this->PrezimeLabel);
			this->panel1->Controls->Add(this->ImeLabel);
			this->panel1->Controls->Add(this->EmailLabel);
			this->panel1->Controls->Add(this->LozinkaLabel);
			this->panel1->Controls->Add(this->groupBox13);
			this->panel1->Controls->Add(this->PrikazivanjeLozinke);
			this->panel1->Controls->Add(this->groupBox11);
			this->panel1->Controls->Add(this->groupBox7);
			this->panel1->Controls->Add(this->groupBox6);
			this->panel1->Location = System::Drawing::Point(17, 30);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(590, 266);
			this->panel1->TabIndex = 0;
			// 
			// PrezimeLabel
			// 
			this->PrezimeLabel->AutoSize = true;
			this->PrezimeLabel->ForeColor = System::Drawing::Color::Red;
			this->PrezimeLabel->Location = System::Drawing::Point(300, 78);
			this->PrezimeLabel->Name = L"PrezimeLabel";
			this->PrezimeLabel->Size = System::Drawing::Size(70, 13);
			this->PrezimeLabel->TabIndex = 93;
			this->PrezimeLabel->Text = L"PrezimeLabel";
			// 
			// ImeLabel
			// 
			this->ImeLabel->AutoSize = true;
			this->ImeLabel->ForeColor = System::Drawing::Color::Red;
			this->ImeLabel->Location = System::Drawing::Point(40, 78);
			this->ImeLabel->Name = L"ImeLabel";
			this->ImeLabel->Size = System::Drawing::Size(50, 13);
			this->ImeLabel->TabIndex = 92;
			this->ImeLabel->Text = L"ImeLabel";
			// 
			// EmailLabel
			// 
			this->EmailLabel->AutoSize = true;
			this->EmailLabel->ForeColor = System::Drawing::Color::Red;
			this->EmailLabel->Location = System::Drawing::Point(40, 188);
			this->EmailLabel->Name = L"EmailLabel";
			this->EmailLabel->Size = System::Drawing::Size(58, 13);
			this->EmailLabel->TabIndex = 94;
			this->EmailLabel->Text = L"EmailLabel";
			// 
			// LozinkaLabel
			// 
			this->LozinkaLabel->AutoSize = true;
			this->LozinkaLabel->ForeColor = System::Drawing::Color::Red;
			this->LozinkaLabel->Location = System::Drawing::Point(300, 203);
			this->LozinkaLabel->Name = L"LozinkaLabel";
			this->LozinkaLabel->Size = System::Drawing::Size(70, 13);
			this->LozinkaLabel->TabIndex = 95;
			this->LozinkaLabel->Text = L"LozinkaLabel";
			// 
			// groupBox13
			// 
			this->groupBox13->Controls->Add(this->Lozinka);
			this->groupBox13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox13->Location = System::Drawing::Point(303, 122);
			this->groupBox13->Name = L"groupBox13";
			this->groupBox13->Size = System::Drawing::Size(221, 63);
			this->groupBox13->TabIndex = 91;
			this->groupBox13->TabStop = false;
			this->groupBox13->Text = L"Potvrdi Lozinku";
			// 
			// Lozinka
			// 
			this->Lozinka->BackColor = System::Drawing::SystemColors::Control;
			this->Lozinka->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
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
			this->PrikazivanjeLozinke->Location = System::Drawing::Point(303, 184);
			this->PrikazivanjeLozinke->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PrikazivanjeLozinke->Name = L"PrikazivanjeLozinke";
			this->PrikazivanjeLozinke->Size = System::Drawing::Size(79, 17);
			this->PrikazivanjeLozinke->TabIndex = 90;
			this->PrikazivanjeLozinke->Text = L"Prikaži šifru";
			this->PrikazivanjeLozinke->UseVisualStyleBackColor = true;
			this->PrikazivanjeLozinke->Click += gcnew System::EventHandler(this, &ZatvaranjeNaloga::PrikazivanjeLozinke_Click);
			// 
			// groupBox11
			// 
			this->groupBox11->Controls->Add(this->Email);
			this->groupBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox11->Location = System::Drawing::Point(43, 122);
			this->groupBox11->Name = L"groupBox11";
			this->groupBox11->Size = System::Drawing::Size(223, 63);
			this->groupBox11->TabIndex = 89;
			this->groupBox11->TabStop = false;
			this->groupBox11->Text = L"Potvrdi Email";
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
			this->groupBox7->Location = System::Drawing::Point(301, 12);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(223, 63);
			this->groupBox7->TabIndex = 87;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Potvrdi Prezime";
			// 
			// Prezime
			// 
			this->Prezime->BackColor = System::Drawing::Color::White;
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
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->Ime);
			this->groupBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox6->Location = System::Drawing::Point(43, 12);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(223, 63);
			this->groupBox6->TabIndex = 86;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Potvrdi Ime";
			// 
			// Ime
			// 
			this->Ime->BackColor = System::Drawing::Color::White;
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
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Gray;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(320, 308);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(122, 36);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Otkaži";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::ForestGreen;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(183, 308);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(119, 36);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Sačuvaj";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &ZatvaranjeNaloga::button1_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &ZatvaranjeNaloga::timer1_Tick);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(212, 74);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(205, 202);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// ZatvaranjeNaloga
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(625, 364);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"ZatvaranjeNaloga";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ZatvaranjeNaloga";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &ZatvaranjeNaloga::ZatvaranjeNaloga_FormClosed);
			this->Load += gcnew System::EventHandler(this, &ZatvaranjeNaloga::ZatvaranjeNaloga_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->groupBox13->ResumeLayout(false);
			this->groupBox13->PerformLayout();
			this->groupBox11->ResumeLayout(false);
			this->groupBox11->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox6->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ZatvaranjeNaloga_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		this->Hide();
		main->Show();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		EmailLabel->Text = "";
		ImeLabel->Text = "";
		PrezimeLabel->Text = "";
		LozinkaLabel->Text = "";
		vector<pair<pair<gcroot<System::Windows::Forms::Label^>, string>, map<string, string>>> config = {
			{make_pair(gcroot<System::Windows::Forms::Label^>(EmailLabel), fieldToString(Email->Text)) , {
				{"required", "true"},
				{"matching", user.email}
			}},
			{make_pair(gcroot<System::Windows::Forms::Label^>(ImeLabel), fieldToString(Ime->Text)) , {
				{"required", "true"},
				{"matching", user.user.ime}
			}},
			{make_pair(gcroot<System::Windows::Forms::Label^>(PrezimeLabel), fieldToString(Prezime->Text)) , {
				{"required", "true"},
				{"matching", user.user.prezime}
			}},
			{make_pair(gcroot<System::Windows::Forms::Label^>(LozinkaLabel), fieldToString(Lozinka->Text)) , {
				{"required", "true"},
				{"matching", user.password}
			}},
		};
		Validator::Login l(config);
		if (l.validationPassed()) {
			nalozi.DeleteUser("id", to_string(user.id));
			pictureBox1->Visible = true;
			panel1->Visible = false;
			button1->Visible = false;
			button2->Visible = false;
			this->Cursor = Cursors::AppStarting;
			pictureBox1->Cursor = Cursors::AppStarting;
			this->BackColor = Color::Gray;
			timer1->Start();
		}
		else l.putErrorsInFields();
		
	}
	private: System::Void PrikazivanjeLozinke_Click(System::Object^ sender, System::EventArgs^ e) {
		Lozinka->UseSystemPasswordChar = (!PrikazivanjeLozinke->Checked) ? true : false;
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
	private: System::Void ZatvaranjeNaloga_Load(System::Object^ sender, System::EventArgs^ e) {
		EmailLabel->Text = "";
		ImeLabel->Text = "";
		PrezimeLabel->Text = "";
		LozinkaLabel->Text = "";
	}
};
}
