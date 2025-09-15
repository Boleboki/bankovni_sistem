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
	inline int najbliziBroj(int value, int multiple) {
		int vrednost = (value / multiple) * multiple;
		if (value % multiple > multiple / 2)
			vrednost += multiple;
		return vrednost;
	}
	inline int broj_cifara(int br) {
		int brojac = 0;
		while (br != 0) {
			brojac++;
			br /= 10;
		}
		return brojac;
	}
	inline int test1(int value) {
		int delilac = pow(10, broj_cifara(value) - 2);
		double vrednost = (double)value / (double)delilac;
		vrednost = zaokruziBroj(vrednost, 0);
		return vrednost * delilac;
	}

	/// <summary>
	/// Summary for Kredit
	/// </summary>
	public ref class Kredit : public System::Windows::Forms::Form
	{
	public:
		Form^ main;
		Kredit(void)
		{
			InitializeComponent();
		}
		Kredit(Form^ main, const User& data)
		{
			user = data;
			this->main = main;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Kredit()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox2;
	private: System::Windows::Forms::TrackBar^ trackBar2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button1;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(64, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(191, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Želim kredit od";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->maskedTextBox1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->trackBar1);
			this->panel1->Location = System::Drawing::Point(42, 114);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(334, 281);
			this->panel1->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(256, 241);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"label3";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(43, 241);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"label2";
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->maskedTextBox1->Location = System::Drawing::Point(59, 134);
			this->maskedTextBox1->Mask = L"0000000";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(220, 32);
			this->maskedTextBox1->TabIndex = 1;
			this->maskedTextBox1->Click += gcnew System::EventHandler(this, &Kredit::maskedTextBox1_Click);
			this->maskedTextBox1->TextChanged += gcnew System::EventHandler(this, &Kredit::maskedTextBox1_TextChanged);
			this->maskedTextBox1->Leave += gcnew System::EventHandler(this, &Kredit::maskedTextBox1_Leave);
			// 
			// trackBar1
			// 
			this->trackBar1->LargeChange = 5000;
			this->trackBar1->Location = System::Drawing::Point(46, 209);
			this->trackBar1->Maximum = 2500000;
			this->trackBar1->Minimum = 10000;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(245, 45);
			this->trackBar1->SmallChange = 5000;
			this->trackBar1->TabIndex = 0;
			this->trackBar1->TickStyle = System::Windows::Forms::TickStyle::None;
			this->trackBar1->Value = 25000;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &Kredit::trackBar1_Scroll);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->maskedTextBox2);
			this->panel2->Controls->Add(this->trackBar2);
			this->panel2->Location = System::Drawing::Point(382, 114);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(334, 281);
			this->panel2->TabIndex = 2;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(21, 32);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(292, 31);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Želim da ga otplatim za";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(278, 241);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"label4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(45, 241);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"label5";
			// 
			// maskedTextBox2
			// 
			this->maskedTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->maskedTextBox2->Location = System::Drawing::Point(61, 134);
			this->maskedTextBox2->Mask = L"000";
			this->maskedTextBox2->Name = L"maskedTextBox2";
			this->maskedTextBox2->Size = System::Drawing::Size(220, 32);
			this->maskedTextBox2->TabIndex = 5;
			this->maskedTextBox2->Click += gcnew System::EventHandler(this, &Kredit::maskedTextBox2_Click);
			this->maskedTextBox2->TextChanged += gcnew System::EventHandler(this, &Kredit::maskedTextBox2_TextChanged);
			this->maskedTextBox2->Leave += gcnew System::EventHandler(this, &Kredit::maskedTextBox2_Leave);
			// 
			// trackBar2
			// 
			this->trackBar2->LargeChange = 1;
			this->trackBar2->Location = System::Drawing::Point(48, 209);
			this->trackBar2->Maximum = 100;
			this->trackBar2->Minimum = 3;
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Size = System::Drawing::Size(245, 45);
			this->trackBar2->TabIndex = 4;
			this->trackBar2->TickStyle = System::Windows::Forms::TickStyle::None;
			this->trackBar2->Value = 12;
			this->trackBar2->Scroll += gcnew System::EventHandler(this, &Kredit::trackBar2_Scroll);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->panel3->Controls->Add(this->button1);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Location = System::Drawing::Point(722, 114);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(334, 281);
			this->panel3->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(88, 225);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(146, 40);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Pošalji zehtev";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Kredit::button1_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(82, 131);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(86, 31);
			this->label8->TabIndex = 10;
			this->label8->Text = L"label8";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(42, 32);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(251, 31);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Iznos mesečne rate";
			// 
			// Kredit
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1162, 483);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"Kredit";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Kredit";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Kredit::Kredit_FormClosed);
			this->Load += gcnew System::EventHandler(this, &Kredit::Kredit_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Kredit_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		this->Hide();
		main->Show();
	}
	private: int min, max, valuta; double rata_kredita;
	private: System::Void Kredit_Load(System::Object^ sender, System::EventArgs^ e) {
		maskedTextBox1->PromptChar = ' ';
		maskedTextBox2->PromptChar = ' ';
		min = test1((int)konverterValuta(trackBar1->Minimum, "RSD", user.valuta));
		max = test1((int)konverterValuta(trackBar1->Maximum, "RSD", user.valuta));
		trackBar1->Minimum = min;
		trackBar1->Maximum = max;
		trackBar1->Value = (double)min * 2.5; 
		valuta = min / 2;
		label2->Text = toField(format_novac(min)) + " " + toField(user.valuta);
		label3->Text = toField(format_novac(max)) + " " + toField(user.valuta);
		label5->Text = "3";
		label4->Text = "100";
		maskedTextBox1->Text = toField(trackBar1->Value);
		maskedTextBox2->Text = toField(trackBar2->Value);
		rata_kredita = rata(fieldToNumber(maskedTextBox1->Text), fieldToNumber(maskedTextBox2->Text), 14.5);
		label8->Text = toField(format_novac(rata_kredita)) + " " + toField(user.valuta);

	}
	private: System::Void maskedTextBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		maskedTextBox1->SelectionStart = StringTools::trim(fieldToString(maskedTextBox1->Text)).length();
	}
	private: System::Void maskedTextBox2_Click(System::Object^ sender, System::EventArgs^ e) {
		maskedTextBox2->SelectionStart = StringTools::trim(fieldToString(maskedTextBox2->Text)).length();
	}
	private: System::Void maskedTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (maskedTextBox1->Text != "") {
			if (fieldToNumber(maskedTextBox1->Text) >= min && fieldToNumber(maskedTextBox1->Text) <= max)
				trackBar1->Value = fieldToNumber(maskedTextBox1->Text);
		}

	}
	private: System::Void maskedTextBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (maskedTextBox2->Text != "") {
			if (fieldToNumber(maskedTextBox2->Text) >= 3 && fieldToNumber(maskedTextBox2->Text) <= 100)
				trackBar2->Value = fieldToNumber(maskedTextBox2->Text);
		}
	}
	private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {
		int trackBarValue = trackBar1->Value;
		trackBar1->Value = najbliziBroj(trackBar1->Value, valuta);
		maskedTextBox1->Text = toField(trackBar1->Value);
		rata_kredita = rata(fieldToNumber(maskedTextBox1->Text), fieldToNumber(maskedTextBox2->Text), 14.5);
		label8->Text = toField(format_novac(rata_kredita)) + " " + toField(user.valuta);
	}
	private: System::Void trackBar2_Scroll(System::Object^ sender, System::EventArgs^ e) {
		maskedTextBox2->Text = toField(trackBar2->Value);
		rata_kredita = rata(fieldToNumber(maskedTextBox1->Text), fieldToNumber(maskedTextBox2->Text), 14.5);
		label8->Text = toField(format_novac(rata_kredita)) + " " + toField(user.valuta);
	}
	private: System::Void maskedTextBox1_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (fieldToNumber(maskedTextBox1->Text) < min) {
			trackBar1->Value = trackBar1->Minimum;
			maskedTextBox1->Text = toField(trackBar1->Value);
		}
		else if (fieldToNumber(maskedTextBox1->Text) > max) {
			trackBar1->Value = trackBar1->Maximum;
			maskedTextBox1->Text = toField(trackBar1->Value);
		}

	}
	private: System::Void maskedTextBox2_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (fieldToNumber(maskedTextBox2->Text) < 3) {
			trackBar2->Value = trackBar2->Minimum;
			maskedTextBox2->Text = toField(trackBar2->Value);
		}
		else if (fieldToNumber(maskedTextBox2->Text) > 100) {
			trackBar2->Value = trackBar2->Maximum;
			maskedTextBox2->Text = toField(trackBar2->Value);
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		rata_kredita = rata(fieldToNumber(maskedTextBox1->Text), fieldToNumber(maskedTextBox2->Text), 14.5);
		label8->Text = toField(format_novac(rata_kredita)) + " " + toField(user.valuta);

	}
	};
}