#pragma once
#include <iostream>
#include <Windows.h>
#include <msclr\marshal_cppstd.h>
#include "Konverzije.h"
#include <string>
#include "Funkcije - Varijable.h"

namespace Bankovnisistem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Summary for Pozadina
	/// </summary>
	public ref class Pozadina : public System::Windows::Forms::Form
	{
	public:
		Form^ main;
		int id;
		Panel^ panel;
		Pozadina(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Pozadina(Form^ obj, int id, Panel^ panel)
		{
			this->panel = panel;
			this->id = id;
			main = obj;
			InitializeComponent();

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Pozadina()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Pozadina::typeid));
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(12, 67);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(107, 29);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Izaberi Boju";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Pozadina::button1_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(151, 67);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(107, 29);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Izaberi Sliku";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Pozadina::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FloralWhite;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(100, 147);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(76, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Reset";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Pozadina::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FloralWhite;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(182, 147);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(76, 23);
			this->button4->TabIndex = 3;
			this->button4->Text = L"OK";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Pozadina::button4_Click);
			// 
			// Pozadina
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(270, 182);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Pozadina";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Izmena Pozadine";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Pozadina::Pozadina_FormClosed);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			ColorDialog^ colorDialog1 = gcnew ColorDialog();
			if (colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				main->BackgroundImage = nullptr;
				main->BackgroundImageLayout = ImageLayout::None;
				pozadine.updateField("Boja", "id = '" + to_string(id) + "'", ColorToString(colorDialog1->Color));
				pozadine.updateField("Slika", "id = '" + to_string(id) + "'", "");
				main->BackColor = colorDialog1->Color;
				panel->BackColor = svetlijaBoja(main->BackColor);
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
		
		
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		pozadina_otvorena = false;
		this->Hide();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			main->BackgroundImageLayout = ImageLayout::None;
			main->BackgroundImage = nullptr;
			pozadine.updateField("Boja", "id = '" + to_string(id) + "'", ColorToString(Color::FromArgb(240, 240, 240)));
			pozadine.updateField("Slika", "id = '" + to_string(id) + "'", "");
			main->BackColor = Color::FromArgb(240, 240, 240);
			panel->BackColor = svetlijaBoja(main->BackColor);
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
		
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			openFileDialog1->InitialDirectory = "C:\\";
			openFileDialog1->Filter = "Image Files (*.bmp;*.jpg;*.jpeg;*.png)|*.bmp;*.jpg;*.jpeg;*.png|All Files (*.*)|*.*";
			openFileDialog1->FilterIndex = 1;
			openFileDialog1->RestoreDirectory = true;
			if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				String^ filePath = openFileDialog1->FileName;
				pozadine.updateField("Slika", "id = '" + to_string(id) + "'", kosaCrta(fieldToString(filePath)));
				pozadine.updateField("Boja", "id = '" + to_string(id) + "'", "");
				main->BackgroundImage = Image::FromFile(filePath);
				main->BackgroundImageLayout = ImageLayout::Stretch;
				panel->BackColor = Color::FromArgb(128, 0, 0, 0);
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();

		
	}

	private: System::Void Pozadina_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		pozadina_otvorena = false;
	}
};
}
