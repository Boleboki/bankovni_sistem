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
	using namespace System::Data::SqlClient;
	using namespace System::Net::Mail;
	static User test;
	/// <summary>
	/// Summary for Reset
	/// </summary>
	public ref class Reset : public System::Windows::Forms::Form
	{
	public:
		Random^ r = gcnew Random();
		int^ OTP;
		
	public:
		Form^ main;
		Reset(void)
		{
			InitializeComponent();
		}
		Reset(Form^ main)
		{
			this->main = main;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Reset()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:

	protected:




	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;


	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Button^ button1;







	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Reset::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(43, 71);
			this->textBox1->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(383, 29);
			this->textBox1->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(38, 41);
			this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(68, 26);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Email";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::Window;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(43, 182);
			this->textBox2->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(383, 29);
			this->textBox2->TabIndex = 7;
			this->textBox2->UseSystemPasswordChar = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(38, 152);
			this->label2->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 26);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Kod";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::ForestGreen;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(132, 387);
			this->button1->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(221, 31);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Reset";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Reset::button1_Click);
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(6, 8);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(37, 32);
			this->button3->TabIndex = 38;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Reset::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::ForestGreen;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(132, 116);
			this->button4->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(221, 31);
			this->button4->TabIndex = 39;
			this->button4->Text = L"Posalji kod";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Reset::button4_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->Location = System::Drawing::Point(43, 361);
			this->checkBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(94, 20);
			this->checkBox1->TabIndex = 15;
			this->checkBox1->Text = L"Prikaži šifru";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Reset::checkBox1_CheckedChanged);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::Window;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(43, 254);
			this->textBox3->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(383, 29);
			this->textBox3->TabIndex = 41;
			this->textBox3->UseSystemPasswordChar = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(38, 224);
			this->label3->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 26);
			this->label3->TabIndex = 40;
			this->label3->Text = L"Lozinka";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::Window;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(43, 326);
			this->textBox4->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(383, 29);
			this->textBox4->TabIndex = 43;
			this->textBox4->UseSystemPasswordChar = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(38, 296);
			this->label4->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(160, 26);
			this->label4->TabIndex = 42;
			this->label4->Text = L"Ponovi Lozinku";
			// 
			// Reset
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(475, 502);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->MaximizeBox = false;
			this->MinimumSize = System::Drawing::Size(491, 341);
			this->Name = L"Reset";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Reset";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Validator l;
		try
		{
			if (textBox2->Text == OTP->ToString()) {
				if (l.is_password(fieldToString(textBox3->Text))) {
					if (textBox3->Text == textBox4->Text) {
						if (fieldToString(textBox3->Text) != test.password) {
							nalozi.updateField("lozinka", "email = '" + test.email + "'", fieldToString(textBox3->Text));
							MessageBox::Show("Lozinka je uspesno promenjena");
							OTP = 0;
							this->Hide();
							main->Show();
						}
						else MessageBox::Show("Loznika ne sme biti ista kao stara");
					}
					else MessageBox::Show("Lozinke se ne podudaraju, pokusaj ponovo.");
				}
				else MessageBox::Show("Morate uneti jacu lozinku.");
			}
			else MessageBox::Show("Neispravan kod.");
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}

	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox1->Checked) {
			textBox2->UseSystemPasswordChar = false;
			textBox3->UseSystemPasswordChar = false;
			textBox4->UseSystemPasswordChar = false;
		}
		else {
			textBox2->UseSystemPasswordChar = true;
			textBox3->UseSystemPasswordChar = true;
			textBox4->UseSystemPasswordChar = true;
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
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
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			OTP = r->Next(1000, 9999);
			String^ usernm = "boza.authenticationservice@hotmail.com";
			String^ password = "Boza@banka123";
			String^ to;
			String^ from = "boza.authenticationservice@hotmail.com";
			String^ subject = "Kod za resetovanje lozinke";
			auto data = nalozi.FetchUsers("*", "email = '" + fieldToString(textBox1->Text) + "'");
			test = data[0];
			to = toField(data[0].email);
			String^ msg = "Zdravo " + toField(data[0].user.ime) + ", \nTvoj kod je: " + OTP;

			try
			{
				MailMessage^ mail = gcnew MailMessage(from, to, subject, msg);
				SmtpClient^ client = gcnew SmtpClient("smtp-mail.outlook.com");
				client->Port = 587;
				client->Credentials = gcnew System::Net::NetworkCredential(usernm, password);
				client->EnableSsl = true;
				client->Send(mail);
				MessageBox::Show("Kod je poslat na vasu email adresu", "", MessageBoxButtons::OK);
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
};
}
