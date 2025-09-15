#pragma once
#include "Funkcije - Varijable.h"
#include "Validator.h"
namespace Bankovnisistem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	
	/// <summary>
	/// Summary for KonvertorValuta
	/// </summary>
	public ref class KonvertorValuta : public System::Windows::Forms::Form
	{
	public:
		Form^ form;
		KonvertorValuta(void)
		{
			InitializeComponent();
		}
		KonvertorValuta(Form^ form)
		{
			this->form = form;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~KonvertorValuta()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ comboBox1;
	protected:
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;

	protected:










	protected:






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(KonvertorValuta::typeid));
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownHeight = 150;
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->IntegralHeight = false;
			this->comboBox1->Location = System::Drawing::Point(167, 115);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(67, 33);
			this->comboBox1->TabIndex = 21;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &KonvertorValuta::comboBox1_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(287, 168);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(64, 25);
			this->label4->TabIndex = 27;
			this->label4->Text = L"label4";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(147, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(216, 31);
			this->label1->TabIndex = 22;
			this->label1->Text = L"Konvertor Valuta";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(251, 173);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(18, 20);
			this->label3->TabIndex = 26;
			this->label3->Text = L"=";
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownHeight = 150;
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->IntegralHeight = false;
			this->comboBox2->Location = System::Drawing::Point(286, 115);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(67, 33);
			this->comboBox2->TabIndex = 23;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &KonvertorValuta::comboBox2_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(251, 121);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(18, 20);
			this->label2->TabIndex = 25;
			this->label2->Text = L">";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(167, 168);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(67, 30);
			this->textBox1->TabIndex = 24;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &KonvertorValuta::textBox1_TextChanged);
			// 
			// KonvertorValuta
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(530, 265);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"KonvertorValuta";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Konvertor Valuta";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &KonvertorValuta::KonvertorValuta_FormClosed);
			this->Load += gcnew System::EventHandler(this, &KonvertorValuta::KonvertorValuta_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void KonvertorValuta_Load(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			for (string& el : valute) {
				comboBox1->Items->Add(toField(el));
				comboBox2->Items->Add(toField(el));
			}
			comboBox1->SelectedIndex = 1;
			comboBox2->SelectedIndex = 0;
			textBox1->Text = "100";

			label4->Text = toField(zaokruziBroj(konverterValuta(fieldToDouble(textBox1->Text), fieldToString(comboBox1->Text), fieldToString(comboBox2->Text)), 5));
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
		
	}
	private: System::Void KonvertorValuta_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		this->Hide();
		form->Show();
	}
	private: System::Void comboBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			map<pair<string, string>, map<string, string>> config = {
			{make_pair("", fieldToString(textBox1->Text)) , {
				{"required", "true"},
				{"number", "true"},
			}},
			};
			Validator::Login l(config);
			if (l.validationPassed() && comboBox1->Text != "" && comboBox2->Text != "") {
				label4->Text = toField(zaokruziBroj(konverterValuta(fieldToDouble(textBox1->Text), fieldToString(comboBox1->Text), fieldToString(comboBox2->Text)), 5));
			}
			else label4->Text = "0";
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
		
	}
	private: System::Void comboBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			map<pair<string, string>, map<string, string>> config = {
			{make_pair("", fieldToString(textBox1->Text)) , {
				{"required", "true"},
				{"number", "true"},
			}},
			};
			Validator::Login l(config);
			if (l.validationPassed() && comboBox1->Text != "" && comboBox2->Text != "") {
				label4->Text = toField(zaokruziBroj(konverterValuta(fieldToDouble(textBox1->Text), fieldToString(comboBox1->Text), fieldToString(comboBox2->Text)), 5));
			}
			else label4->Text = "0";
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
		
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			map<pair<string, string>, map<string, string>> config = {
			{make_pair("", fieldToString(textBox1->Text)) , {
				{"required", "true"},
				{"number", "true"},
			}},
			};
			Validator::Login l(config);
			if (l.validationPassed() && comboBox1->Text != "" && comboBox2->Text != "") {
				label4->Text = toField(zaokruziBroj(konverterValuta(fieldToDouble(textBox1->Text), fieldToString(comboBox1->Text), fieldToString(comboBox2->Text)), 5));
			}
			else label4->Text = "0";
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}


	}
};
}
