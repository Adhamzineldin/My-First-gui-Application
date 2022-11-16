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
	/// Summary for ForgotPass
	/// </summary>
	public ref class ForgotPass : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		ForgotPass(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		ForgotPass(Form^ obj1)
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
		~ForgotPass()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ fusername;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ForgotPass::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->fusername = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(156, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(327, 42);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Forgot  Password";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::LightGray;
			this->label2->Location = System::Drawing::Point(12, 117);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(152, 31);
			this->label2->TabIndex = 11;
			this->label2->Text = L"UserName";
			// 
			// fusername
			// 
			this->fusername->Location = System::Drawing::Point(213, 128);
			this->fusername->Name = L"fusername";
			this->fusername->Size = System::Drawing::Size(217, 20);
			this->fusername->TabIndex = 12;
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button1->Location = System::Drawing::Point(3, 249);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(139, 66);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Login Menu";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ForgotPass::button1_Click_1);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button2->Location = System::Drawing::Point(508, 114);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(119, 46);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Submit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ForgotPass::button2_Click_1);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(206, 249);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(327, 42);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Forgot  Password";
			// 
			// ForgotPass
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(660, 314);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->fusername);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"ForgotPass";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ForgotPass";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	obj->Show();
}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {

	int count = 0;
	std::string sid, spass;
	String^ susrid = fusername->Text;
	std::string suserid = msclr::interop::marshal_as<std::string>(susrid);
	std::ifstream f2("records.txt");
	while (f2 >> sid >> spass) {
		if (sid == suserid) {
			count = 1;
			break;

		}
	}
	f2.close();
	if (count == 1) {
		std::string lol= "Password : " + spass;
		String^ XD = gcnew String(lol.c_str());
		label3->Text = XD;
	}
	else {
		label3->Text = "Account not Found";
		
	}





}
};
}
