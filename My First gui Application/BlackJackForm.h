#pragma once
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <cmath>
#include <Windows.h>

namespace MyFirstguiApplication {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for BlackJackForm
	/// </summary>
	public ref class BlackJackForm : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		
		BlackJackForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		BlackJackForm(Form^ obj1)
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
		~BlackJackForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ Hit;
	private: System::Windows::Forms::Button^ Stand;
	private: System::Windows::Forms::TextBox^ Bet;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ Money;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(BlackJackForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Hit = (gcnew System::Windows::Forms::Button());
			this->Stand = (gcnew System::Windows::Forms::Button());
			this->Bet = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->Money = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(25, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(139, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Player 1";
			this->label1->Click += gcnew System::EventHandler(this, &BlackJackForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(460, 34);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(166, 37);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Computer";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(-9, 119);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(124, 37);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Total : ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(413, 119);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(124, 37);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Total : ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(543, 119);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(83, 37);
			this->label5->TabIndex = 4;
			this->label5->Text = L"total";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(101, 119);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(83, 37);
			this->label6->TabIndex = 5;
			this->label6->Text = L"total";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(88, 200);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(36, 37);
			this->label7->TabIndex = 6;
			this->label7->Text = L"0";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(519, 200);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(36, 37);
			this->label8->TabIndex = 7;
			this->label8->Text = L"0";
			// 
			// Hit
			// 
			this->Hit->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Hit.BackgroundImage")));
			this->Hit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Hit->ForeColor = System::Drawing::Color::Yellow;
			this->Hit->Location = System::Drawing::Point(196, 252);
			this->Hit->Name = L"Hit";
			this->Hit->Size = System::Drawing::Size(101, 50);
			this->Hit->TabIndex = 8;
			this->Hit->Text = L"Hit";
			this->Hit->UseVisualStyleBackColor = true;
			this->Hit->Click += gcnew System::EventHandler(this, &BlackJackForm::button1_Click);
			// 
			// Stand
			// 
			this->Stand->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Stand.BackgroundImage")));
			this->Stand->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Stand->ForeColor = System::Drawing::Color::Yellow;
			this->Stand->Location = System::Drawing::Point(303, 252);
			this->Stand->Name = L"Stand";
			this->Stand->Size = System::Drawing::Size(101, 50);
			this->Stand->TabIndex = 9;
			this->Stand->Text = L"Stand";
			this->Stand->UseVisualStyleBackColor = true;
			// 
			// Bet
			// 
			this->Bet->Location = System::Drawing::Point(232, 140);
			this->Bet->Name = L"Bet";
			this->Bet->Size = System::Drawing::Size(128, 20);
			this->Bet->TabIndex = 10;
			this->Bet->TextChanged += gcnew System::EventHandler(this, &BlackJackForm::Bet_TextChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(225, 100);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(149, 37);
			this->label9->TabIndex = 11;
			this->label9->Text = L"input bet";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(235, 163);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(116, 37);
			this->label10->TabIndex = 13;
			this->label10->Text = L"Money";
			// 
			// Money
			// 
			this->Money->AutoSize = true;
			this->Money->BackColor = System::Drawing::Color::Transparent;
			this->Money->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Money->Location = System::Drawing::Point(268, 200);
			this->Money->Name = L"Money";
			this->Money->Size = System::Drawing::Size(36, 37);
			this->Money->TabIndex = 14;
			this->Money->Text = L"0";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Red;
			this->label11->Location = System::Drawing::Point(254, 78);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(0, 24);
			this->label11->TabIndex = 15;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(235, 9);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(0, 37);
			this->label12->TabIndex = 16;
			// 
			// BlackJackForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(660, 314);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->Money);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->Bet);
			this->Controls->Add(this->Stand);
			this->Controls->Add(this->Hit);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"BlackJackForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"BlackJackForm";
			this->Load += gcnew System::EventHandler(this, &BlackJackForm::BlackJackForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

	private: System::Void BlackJackForm_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	}
    
private: System::Void Bet_TextChanged(System::Object^ sender, System::EventArgs^ e) {





	   }
	
	









};
}
