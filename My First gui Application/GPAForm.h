#pragma once
#include <fstream>
#include <iostream>
#include "ForgotPass.h"
#include <msclr/marshal.h>
#include <msclr\marshal_cppstd.h> 
namespace MyFirstguiApplication {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GPAForm
	/// </summary>
	public ref class GPAForm : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		GPAForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		GPAForm(Form^ obj1)
		{
			obj = obj1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~GPAForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ gpa4;

	private: System::Windows::Forms::TextBox^ gpa1;
	private: System::Windows::Forms::TextBox^ gpa2;
	private: System::Windows::Forms::TextBox^ gpa3;
	private: System::Windows::Forms::TextBox^ gpa6;




	private: System::Windows::Forms::TextBox^ gpa5;
	private: System::Windows::Forms::TextBox^ gpa8;


	private: System::Windows::Forms::TextBox^ gpa7;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ gpa8w;

	private: System::Windows::Forms::TextBox^ gpa2w;
	private: System::Windows::Forms::TextBox^ gpa3w;
	private: System::Windows::Forms::TextBox^ gpa4w;
	private: System::Windows::Forms::TextBox^ gpa5w;
	private: System::Windows::Forms::TextBox^ gpa6w;
	private: System::Windows::Forms::TextBox^ gpa7w;








	private: System::Windows::Forms::TextBox^ gpa1w;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GPAForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->gpa4 = (gcnew System::Windows::Forms::TextBox());
			this->gpa1 = (gcnew System::Windows::Forms::TextBox());
			this->gpa2 = (gcnew System::Windows::Forms::TextBox());
			this->gpa3 = (gcnew System::Windows::Forms::TextBox());
			this->gpa6 = (gcnew System::Windows::Forms::TextBox());
			this->gpa5 = (gcnew System::Windows::Forms::TextBox());
			this->gpa8 = (gcnew System::Windows::Forms::TextBox());
			this->gpa7 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->gpa8w = (gcnew System::Windows::Forms::TextBox());
			this->gpa2w = (gcnew System::Windows::Forms::TextBox());
			this->gpa3w = (gcnew System::Windows::Forms::TextBox());
			this->gpa4w = (gcnew System::Windows::Forms::TextBox());
			this->gpa5w = (gcnew System::Windows::Forms::TextBox());
			this->gpa6w = (gcnew System::Windows::Forms::TextBox());
			this->gpa7w = (gcnew System::Windows::Forms::TextBox());
			this->gpa1w = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Yellow;
			this->button1->Location = System::Drawing::Point(519, 245);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(129, 57);
			this->button1->TabIndex = 1;
			this->button1->Text = L"App Menu";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &GPAForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(202, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(270, 39);
			this->label1->TabIndex = 2;
			this->label1->Text = L"GPA Calculator";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &GPAForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(0, 92);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(97, 24);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Subject 1";
			// 
			// gpa4
			// 
			this->gpa4->Location = System::Drawing::Point(103, 170);
			this->gpa4->Name = L"gpa4";
			this->gpa4->Size = System::Drawing::Size(100, 20);
			this->gpa4->TabIndex = 8;
			// 
			// gpa1
			// 
			this->gpa1->Location = System::Drawing::Point(103, 92);
			this->gpa1->Name = L"gpa1";
			this->gpa1->Size = System::Drawing::Size(100, 20);
			this->gpa1->TabIndex = 8;
			// 
			// gpa2
			// 
			this->gpa2->Location = System::Drawing::Point(103, 118);
			this->gpa2->Name = L"gpa2";
			this->gpa2->Size = System::Drawing::Size(100, 20);
			this->gpa2->TabIndex = 9;
			// 
			// gpa3
			// 
			this->gpa3->Location = System::Drawing::Point(103, 144);
			this->gpa3->Name = L"gpa3";
			this->gpa3->Size = System::Drawing::Size(100, 20);
			this->gpa3->TabIndex = 8;
			// 
			// gpa6
			// 
			this->gpa6->Location = System::Drawing::Point(103, 222);
			this->gpa6->Name = L"gpa6";
			this->gpa6->Size = System::Drawing::Size(100, 20);
			this->gpa6->TabIndex = 10;
			// 
			// gpa5
			// 
			this->gpa5->Location = System::Drawing::Point(103, 196);
			this->gpa5->Name = L"gpa5";
			this->gpa5->Size = System::Drawing::Size(100, 20);
			this->gpa5->TabIndex = 11;
			// 
			// gpa8
			// 
			this->gpa8->Location = System::Drawing::Point(103, 271);
			this->gpa8->Name = L"gpa8";
			this->gpa8->Size = System::Drawing::Size(100, 20);
			this->gpa8->TabIndex = 12;
			// 
			// gpa7
			// 
			this->gpa7->Location = System::Drawing::Point(103, 245);
			this->gpa7->Name = L"gpa7";
			this->gpa7->Size = System::Drawing::Size(100, 20);
			this->gpa7->TabIndex = 13;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(0, 116);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(97, 24);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Subject 2";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(0, 140);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(97, 24);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Subject 3";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(0, 196);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(97, 24);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Subject 5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(0, 220);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(97, 24);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Subject 6";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(0, 245);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(97, 24);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Subject 7";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(0, 170);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(97, 24);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Subject 4";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(0, 271);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(97, 24);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Subject 8";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(437, 103);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 39);
			this->label10->TabIndex = 19;
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Yellow;
			this->button2->Location = System::Drawing::Point(375, 245);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(129, 57);
			this->button2->TabIndex = 20;
			this->button2->Text = L"Submit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &GPAForm::button2_Click);
			// 
			// gpa8w
			// 
			this->gpa8w->Location = System::Drawing::Point(209, 271);
			this->gpa8w->Name = L"gpa8w";
			this->gpa8w->Size = System::Drawing::Size(100, 20);
			this->gpa8w->TabIndex = 21;
			// 
			// gpa2w
			// 
			this->gpa2w->Location = System::Drawing::Point(209, 118);
			this->gpa2w->Name = L"gpa2w";
			this->gpa2w->Size = System::Drawing::Size(100, 20);
			this->gpa2w->TabIndex = 22;
			// 
			// gpa3w
			// 
			this->gpa3w->Location = System::Drawing::Point(209, 144);
			this->gpa3w->Name = L"gpa3w";
			this->gpa3w->Size = System::Drawing::Size(100, 20);
			this->gpa3w->TabIndex = 23;
			// 
			// gpa4w
			// 
			this->gpa4w->Location = System::Drawing::Point(209, 170);
			this->gpa4w->Name = L"gpa4w";
			this->gpa4w->Size = System::Drawing::Size(100, 20);
			this->gpa4w->TabIndex = 24;
			// 
			// gpa5w
			// 
			this->gpa5w->Location = System::Drawing::Point(209, 196);
			this->gpa5w->Name = L"gpa5w";
			this->gpa5w->Size = System::Drawing::Size(100, 20);
			this->gpa5w->TabIndex = 25;
			// 
			// gpa6w
			// 
			this->gpa6w->Location = System::Drawing::Point(209, 222);
			this->gpa6w->Name = L"gpa6w";
			this->gpa6w->Size = System::Drawing::Size(100, 20);
			this->gpa6w->TabIndex = 26;
			// 
			// gpa7w
			// 
			this->gpa7w->Location = System::Drawing::Point(209, 245);
			this->gpa7w->Name = L"gpa7w";
			this->gpa7w->Size = System::Drawing::Size(100, 20);
			this->gpa7w->TabIndex = 27;
			// 
			// gpa1w
			// 
			this->gpa1w->Location = System::Drawing::Point(209, 92);
			this->gpa1w->Name = L"gpa1w";
			this->gpa1w->Size = System::Drawing::Size(100, 20);
			this->gpa1w->TabIndex = 28;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(193, 56);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(150, 24);
			this->label11->TabIndex = 29;
			this->label11->Text = L"Weight out of 4";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(121, 56);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(73, 24);
			this->label12->TabIndex = 30;
			this->label12->Text = L"Grade ";
			// 
			// GPAForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(660, 314);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->gpa1w);
			this->Controls->Add(this->gpa7w);
			this->Controls->Add(this->gpa6w);
			this->Controls->Add(this->gpa5w);
			this->Controls->Add(this->gpa4w);
			this->Controls->Add(this->gpa3w);
			this->Controls->Add(this->gpa2w);
			this->Controls->Add(this->gpa8w);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->gpa7);
			this->Controls->Add(this->gpa8);
			this->Controls->Add(this->gpa5);
			this->Controls->Add(this->gpa6);
			this->Controls->Add(this->gpa2);
			this->Controls->Add(this->gpa1);
			this->Controls->Add(this->gpa3);
			this->Controls->Add(this->gpa4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"GPAForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"GPAForm";
			this->Load += gcnew System::EventHandler(this, &GPAForm::GPAForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void GPAForm_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		obj->Show();
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ Sclass1 = gpa1->Text;
	String^ Sclass2 = gpa2->Text;
	String^ Sclass3 = gpa3->Text;
	String^ Sclass4 = gpa4->Text;
	String^ Sclass5 = gpa5->Text;
	String^ Sclass6 = gpa6->Text;
	String^ Sclass7 = gpa7->Text;
	String^ Sclass8 = gpa8->Text;
	Double sclass1 = System::Convert::ToDouble(Sclass1);
	Double sclass2 = System::Convert::ToDouble(Sclass2);
	Double sclass3 = System::Convert::ToDouble(Sclass3);
	Double sclass4 = System::Convert::ToDouble(Sclass4);
	Double sclass5 = System::Convert::ToDouble(Sclass5);
	Double sclass6 = System::Convert::ToDouble(Sclass6);
	Double sclass7 = System::Convert::ToDouble(Sclass7);
	Double sclass8 = System::Convert::ToDouble(Sclass8);
	String^ Wclass1 = gpa1w->Text;
	String^ Wclass2 = gpa2w->Text;
	String^ Wclass3 = gpa3w->Text;
	String^ Wclass4 = gpa4w->Text;
	String^ Wclass5 = gpa5w->Text;
	String^ Wclass6 = gpa6w->Text;
	String^ Wclass7 = gpa7w->Text;
	String^ Wclass8 = gpa8w->Text;
	Double wclass1 = System::Convert::ToDouble(Wclass1);
	Double wclass2 = System::Convert::ToDouble(Wclass2);
	Double wclass3 = System::Convert::ToDouble(Wclass3);
	Double wclass4 = System::Convert::ToDouble(Wclass4);
	Double wclass5 = System::Convert::ToDouble(Wclass5);
	Double wclass6 = System::Convert::ToDouble(Wclass6);
	Double wclass7 = System::Convert::ToDouble(Wclass7);
	Double wclass8 = System::Convert::ToDouble(Wclass8);
	
		
	
	double gclass1, gclass2, gclass3, gclass4, gclass5, gclass6, gclass7, gclass8;

	//class name
	if (sclass1 > 92) {
		gclass1 = 4.0;
	}
	else if (sclass1 > 89) {
		gclass1 = 3.7;
	}
	else if (sclass1 > 86) {
		gclass1 = 3.3;
	}
	else if (sclass1 > 82) {
		gclass1 = 3.0;
	}
	else if (sclass1 > 79) {
		gclass1 = 2.7;
	}
	else if (sclass1 > 76) {
		gclass1 = 2.3;
	}
	else if (sclass1 > 72) {
		gclass1 = 2.0;
	}
	else if (sclass1 > 69) {
		gclass1 = 1.7;
	}
	else if (sclass1 > 66) {
		gclass1 = 1.3;
	}
	else if (sclass1 > 62) {
		gclass1 = 1.0;
	}
	else if (sclass1 > 59) {
		gclass1 = 0.7;
	}
	else if (sclass1 < 59) {
		gclass1 = 0;
	}
	if (sclass2 > 92) {
		gclass2 = 4.0;
	}
	else if (sclass2 > 89) {
		gclass2 = 3.7;
	}
	else if (sclass2 > 86) {
		gclass2 = 3.3;
	}
	else if (sclass2 > 82) {
		gclass2 = 3.0;
	}
	else if (sclass2 > 79) {
		gclass2 = 2.7;
	}
	else if (sclass2 > 76) {
		gclass2 = 2.3;
	}
	else if (sclass2 > 72) {
		gclass2 = 2.0;
	}
	else if (sclass2 > 69) {
		gclass2 = 1.7;
	}
	else if (sclass2 > 66) {
		gclass2 = 1.3;
	}
	else if (sclass2 > 62) {
		gclass2 = 1.0;
	}
	else if (sclass2 > 59) {
		gclass2 = 0.7;
	}
	else if (sclass2 < 59) {
		gclass2 = 0;
	}
	if (sclass3 > 92) {
		gclass3 = 4.0;
	}
	else if (sclass3 > 89) {
		gclass3 = 3.7;
	}
	else if (sclass3 > 86) {
		gclass3 = 3.3;
	}
	else if (sclass3 > 82) {
		gclass3 = 3.0;
	}
	else if (sclass3 > 79) {
		gclass3 = 2.7;
	}
	else if (sclass3 > 76) {
		gclass3 = 2.3;
	}
	else if (sclass3 > 72) {
		gclass3 = 2.0;
	}
	else if (sclass3 > 69) {
		gclass3 = 1.7;
	}
	else if (sclass3 > 66) {
		gclass3 = 1.3;
	}
	else if (sclass3 > 62) {
		gclass3 = 1.0;
	}
	else if (sclass3 > 59) {
		gclass3 = 0.7;
	}
	else if (sclass3 < 59) {
		gclass3 = 0;
	}

	if (sclass4 > 92) {
		gclass4 = 4.0;
	}
	else if (sclass4 > 89) {
		gclass4 = 3.7;
	}
	else if (sclass4 > 86) {
		gclass4 = 3.3;
	}
	else if (sclass4 > 82) {
		gclass4 = 3.0;
	}
	else if (sclass4 > 79) {
		gclass4 = 2.7;
	}
	else if (sclass4 > 76) {
		gclass4 = 2.3;
	}
	else if (sclass4 > 72) {
		gclass4 = 2.0;
	}
	else if (sclass4 > 69) {
		gclass4 = 1.7;
	}
	else if (sclass4 > 66) {
		gclass4 = 1.3;
	}
	else if (sclass4 > 62) {
		gclass4 = 1.0;
	}
	else if (sclass4 > 59) {
		gclass4 = 0.7;
	}
	else if (sclass4 < 59) {
		gclass4 = 0;
	}

	if (sclass5 > 92) {
		gclass5 = 4.0;
	}
	else if (sclass5 > 89) {
		gclass5 = 3.7;
	}
	else if (sclass5 > 86) {
		gclass5 = 3.3;
	}
	else if (sclass5 > 82) {
		gclass5 = 3.0;
	}
	else if (sclass5 > 79) {
		gclass5 = 2.7;
	}
	else if (sclass5 > 76) {
		gclass5 = 2.3;
	}
	else if (sclass5 > 72) {
		gclass5 = 2.0;
	}
	else if (sclass5 > 69) {
		gclass5 = 1.7;
	}
	else if (sclass5 > 66) {
		gclass5 = 1.3;
	}
	else if (sclass5 > 62) {
		gclass5 = 1.0;
	}
	else if (sclass5 > 59) {
		gclass5 = 0.7;
	}
	else if (sclass5 < 59) {
		gclass5 = 0;
	}

	if (sclass6 > 92) {
		gclass6 = 4.0;
	}
	else if (sclass6 > 89) {
		gclass6 = 3.7;
	}
	else if (sclass6 > 86) {
		gclass6 = 3.3;
	}
	else if (sclass6 > 82) {
		gclass6 = 3.0;
	}
	else if (sclass6 > 79) {
		gclass6 = 2.7;
	}
	else if (sclass6 > 76) {
		gclass6 = 2.3;
	}
	else if (sclass6 > 72) {
		gclass6 = 2.0;
	}
	else if (sclass6 > 69) {
		gclass6 = 1.7;
	}
	else if (sclass6 > 66) {
		gclass6 = 1.3;
	}
	else if (sclass6 > 62) {
		gclass6 = 1.0;
	}
	else if (sclass6 > 59) {
		gclass6 = 0.7;
	}
	else if (sclass6 < 59) {
		gclass6 = 0;
	}

	if (sclass7 > 92) {
		gclass7 = 4.0;
	}
	else if (sclass7 > 89) {
		gclass7 = 3.7;
	}
	else if (sclass7 > 86) {
		gclass7 = 3.3;
	}
	else if (sclass7 > 82) {
		gclass7 = 3.0;
	}
	else if (sclass7 > 79) {
		gclass7 = 2.7;
	}
	else if (sclass7 > 76) {
		gclass7 = 2.3;
	}
	else if (sclass7 > 72) {
		gclass7 = 2.0;
	}
	else if (sclass7 > 69) {
		gclass7 = 1.7;
	}
	else if (sclass7 > 66) {
		gclass7 = 1.3;
	}
	else if (sclass7 > 62) {
		gclass7 = 1.0;
	}
	else if (sclass7 > 59) {
		gclass7 = 0.7;
	}
	else if (sclass7 < 59) {
		gclass7 = 0;
	}

	if (sclass8 > 92) {
		gclass8 = 4.0;
	}
	else if (sclass8 > 89) {
		gclass8 = 3.7;
	}
	else if (sclass8 > 86) {
		gclass8 = 3.3;
	}
	else if (sclass8 > 82) {
		gclass8 = 3.0;
	}
	else if (sclass8 > 79) {
		gclass8 = 2.7;
	}
	else if (sclass8 > 76) {
		gclass8 = 2.3;
	}
	else if (sclass8 > 72) {
		gclass8 = 2.0;
	}
	else if (sclass8 > 69) {
		gclass8 = 1.7;
	}
	else if (sclass8 > 66) {
		gclass8 = 1.3;
	}
	else if (sclass8 > 62) {
		gclass8 = 1.0;
	}
	else if (sclass8 > 59) {
		gclass8 = 0.7;
	}
	else if (sclass8 < 59) {
		gclass8 = 0;
	}
	double sum_of_weight = wclass1 + wclass2 + wclass3 + wclass4 + wclass5 + wclass6 + wclass7 + wclass8;
	double sum_weight_gpa1 = gclass1 * wclass1;
	double sum_weight_gpa2 = gclass2 * wclass2;
	double sum_weight_gpa3 = gclass3 * wclass3;
	double sum_weight_gpa4 = gclass4 * wclass4;
	double sum_weight_gpa5 = gclass5 * wclass5;
	double sum_weight_gpa6 = gclass6 * wclass6;
	double sum_weight_gpa7 = gclass7 * wclass7;
	double sum_weight_gpa8 = gclass8 * wclass8;
	double sum_of_gpa = sum_weight_gpa1 + sum_weight_gpa2 + sum_weight_gpa3 + sum_weight_gpa4 + sum_weight_gpa5 + sum_weight_gpa6 + sum_weight_gpa7 + sum_weight_gpa8;
	double result = sum_of_gpa / sum_of_weight;
	std::string rresult = std::to_string(result);
	String^ Result = gcnew String(rresult.c_str());
	label10->Text = Result;
}
};
}
