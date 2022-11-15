#pragma once
#include <iostream>
#include <cmath>

namespace MyFirstguiApplication {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for KenamaticsForm
	/// </summary>
	public ref class KenamaticsForm : public System::Windows::Forms::Form
	{
	public:
		KenamaticsForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~KenamaticsForm()
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
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::TextBox^ Time;
	private: System::Windows::Forms::TextBox^ Acceleration;
	private: System::Windows::Forms::TextBox^ Displacment;
	private: System::Windows::Forms::TextBox^ initial_velocity;
	private: System::Windows::Forms::TextBox^ final_velocity;
	private: System::Windows::Forms::Label^ Answer;

	private: System::Windows::Forms::Button^ button1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(KenamaticsForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->Time = (gcnew System::Windows::Forms::TextBox());
			this->Acceleration = (gcnew System::Windows::Forms::TextBox());
			this->Displacment = (gcnew System::Windows::Forms::TextBox());
			this->initial_velocity = (gcnew System::Windows::Forms::TextBox());
			this->final_velocity = (gcnew System::Windows::Forms::TextBox());
			this->Answer = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(96, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(525, 55);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Kenamatics Calculator";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(22, 101);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 29);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Time";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(22, 139);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(158, 29);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Acceleration";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(22, 182);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(157, 29);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Displacment";
			this->label4->Click += gcnew System::EventHandler(this, &KenamaticsForm::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			this->label5->Location = System::Drawing::Point(22, 219);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(175, 29);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Initial Velocity";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			this->label6->Location = System::Drawing::Point(22, 254);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(170, 29);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Final Velocity";
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// Time
			// 
			this->Time->Location = System::Drawing::Point(202, 101);
			this->Time->Name = L"Time";
			this->Time->Size = System::Drawing::Size(100, 20);
			this->Time->TabIndex = 7;
			// 
			// Acceleration
			// 
			this->Acceleration->Location = System::Drawing::Point(202, 139);
			this->Acceleration->Name = L"Acceleration";
			this->Acceleration->Size = System::Drawing::Size(100, 20);
			this->Acceleration->TabIndex = 8;
			// 
			// Displacment
			// 
			this->Displacment->Location = System::Drawing::Point(202, 190);
			this->Displacment->Name = L"Displacment";
			this->Displacment->Size = System::Drawing::Size(100, 20);
			this->Displacment->TabIndex = 9;
			// 
			// initial_velocity
			// 
			this->initial_velocity->Location = System::Drawing::Point(202, 228);
			this->initial_velocity->Name = L"initial_velocity";
			this->initial_velocity->Size = System::Drawing::Size(100, 20);
			this->initial_velocity->TabIndex = 10;
			// 
			// final_velocity
			// 
			this->final_velocity->Location = System::Drawing::Point(202, 263);
			this->final_velocity->Name = L"final_velocity";
			this->final_velocity->Size = System::Drawing::Size(100, 20);
			this->final_velocity->TabIndex = 11;
			// 
			// Answer
			// 
			this->Answer->AutoSize = true;
			this->Answer->BackColor = System::Drawing::Color::Transparent;
			this->Answer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Answer->Location = System::Drawing::Point(434, 244);
			this->Answer->Name = L"Answer";
			this->Answer->Size = System::Drawing::Size(85, 29);
			this->Answer->TabIndex = 12;
			this->Answer->Text = L"label7";
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(422, 119);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(170, 64);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Calculate";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &KenamaticsForm::button1_Click);
			// 
			// KenamaticsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(660, 314);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Answer);
			this->Controls->Add(this->final_velocity);
			this->Controls->Add(this->initial_velocity);
			this->Controls->Add(this->Displacment);
			this->Controls->Add(this->Acceleration);
			this->Controls->Add(this->Time);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"KenamaticsForm";
			this->Text = L"KenamaticsForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
		Double vix(Double final_velocity, Double accelaration, Double time) {
			return (final_velocity - (accelaration * time));
		}
		Double vfx(Double initial_velocity, Double accelaration, Double time) {
			return (initial_velocity)+(accelaration * time);
		}
		Double tx(Double final_velocity, Double initial_velocity, Double accelaration) {
			return ((final_velocity - initial_velocity) / accelaration);
		}
		Double ax(Double final_velocity, Double initial_velocity, Double time) {
			return ((final_velocity - initial_velocity) / time);
		}
		//second kenamatic eqaution
		Double da(Double final_velocity, Double initial_velocity, Double time) {
			return (0.5 * (final_velocity + initial_velocity) * time);
		}
		Double via(Double final_velocity, Double displacment, Double time) {
			return ((2 * displacment) / (time)-final_velocity);
		}
		Double vfa(Double displacment, Double initial_velocity, Double time) {
			return ((2 * displacment) / (time)-initial_velocity);
		}
		Double ta(Double final_velocity, Double initial_velocity, Double displacment) {
			return ((2 * displacment) / (initial_velocity + final_velocity));
		}
		//third kenamatic equation
		Double avf(Double initial_velocity, Double displacment, Double time) {
			return ((displacment - (initial_velocity * time)) / (0.5 * pow(time, 2)));
		}
		Double xvf(Double initial_velocity, Double accelaration, Double time) {
			return ((initial_velocity * time) + (0.5 * accelaration * pow(time, 2)));
		}
		Double tvf(Double initial_velocity, Double accelaration, Double displacment) {
			return ((((-initial_velocity) - sqrt(pow(initial_velocity, 2) + (2 * (accelaration) * (displacment))))) / (accelaration));
		}
		Double vivf(Double time, Double accelaration, Double displacment) {
			return ((displacment - (0.5 * accelaration * pow(time, 2))) / time);
		}
		//fourth kenamatic equation 
		Double vft(Double initial_velocity, Double accelaration, Double displacment) {
			return(sqrt(pow(initial_velocity, 2) + (2 * accelaration * displacment)));
		}
		Double vit(Double final_velocity, Double accelaration, Double displacment) {
			return (sqrt(pow(final_velocity, 2) - (2 * accelaration * displacment)));
		}//revise
		Double at(Double initial_velocity, Double final_velocity, Double displacment) {
			return ((pow(final_velocity, 2) - pow(initial_velocity, 2)) / (2 * displacment));
		}
		Double xt(Double initial_velocity, Double accelaration, Double final_velocity) {
			return ((pow(final_velocity, 2) - pow(initial_velocity, 2)) / (2 * accelaration));
		}

		std::string unit(std::string unit) {
			return unit;
		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		///

		





		KenamaticsForm cal;
		String^ t_u = Time->Text;
		String^ a_u = Acceleration->Text;
		String^ x_u = Displacment->Text;
		String^ vi_u = initial_velocity->Text;
		String^ vf_u = final_velocity->Text;

		Double answer;



		if (vf_u == "unknown" && x_u == "missing") {
			Double t = System::Convert::ToDouble(t_u);
			Double a = System::Convert::ToDouble(a_u);
			Double vi = System::Convert::ToDouble(vi_u);
			answer = cal.vfx(vi, a, t);
		}
		else if (a_u == "unknown" && x_u == "missing") {

			Double t = System::Convert::ToDouble(t_u);
			Double vf = System::Convert::ToDouble(vf_u);
			Double vi = System::Convert::ToDouble(vi_u);
			answer = cal.ax(vf, vi, t);

		}
		else if (t_u == "unknown" && x_u == "missing") {

			Double a = System::Convert::ToDouble(a_u);
			Double vf = System::Convert::ToDouble(vf_u);
			Double vi = System::Convert::ToDouble(vi_u);
			answer = cal.tx(vf, vi, a);
		}
		else if (vi_u == "unknown" && x_u == "missing") {

			Double a = System::Convert::ToDouble(a_u);
			Double vf = System::Convert::ToDouble(vf_u);
			Double t = System::Convert::ToDouble(t_u);
			Double bug_fix = a * t;
			answer = cal.vix(vf, bug_fix, 1);

		}
		// second kenamatic equation
		else if (x_u == "unknown" && a_u == "missing") {

			Double vi = System::Convert::ToDouble(vi_u);
			Double vf = System::Convert::ToDouble(vf_u);
			Double t = System::Convert::ToDouble(t_u);
			answer = cal.da(vf, vi, t);

		}
		else if (vi_u == "unknown" && a_u == "missing") {

			Double x = System::Convert::ToDouble(x_u);
			Double vf = System::Convert::ToDouble(vf_u);
			Double t = System::Convert::ToDouble(t_u);
			answer = cal.via(vf, x, t);

		}
		else if (vf_u == "unknown" && a_u == "missing") {

			Double x = System::Convert::ToDouble(x_u);
			Double vi = System::Convert::ToDouble(vi_u);
			Double t = System::Convert::ToDouble(t_u);
			answer = cal.vfa(x, vi, t);

		}
		else if (t_u == "unknown" && a_u == "missing") {

			Double x = System::Convert::ToDouble(x_u);
			Double vf = System::Convert::ToDouble(vf_u);
			Double vi = System::Convert::ToDouble(vi_u);
			answer = cal.ta(vf, vi, x);

		}
		//third kenamatic equation
		else if (x_u == "unknown" && vf_u == "missing") {

			Double t = System::Convert::ToDouble(t_u);
			Double a = System::Convert::ToDouble(a_u);
			Double vi = System::Convert::ToDouble(vi_u);
			answer = cal.xvf(vi, a, t);

		}
		else if (a_u == "unknown" && vf_u == "missing") {

			Double t = System::Convert::ToDouble(t_u);
			Double x = System::Convert::ToDouble(x);
			Double vi = System::Convert::ToDouble(vi_u);
			answer = cal.avf(vi, x, t);

		}
		else if (t_u == "unknown" && vf_u == "missing") {

			Double x = System::Convert::ToDouble(x_u);
			Double a = System::Convert::ToDouble(a_u);
			Double vi = System::Convert::ToDouble(vi_u);
			answer = cal.tvf(vi, a, x);

		}
		else if (vi_u == "unknown" && vf_u == "missing") {

			Double t = System::Convert::ToDouble(t_u);
			Double a = System::Convert::ToDouble(a_u);
			Double x = System::Convert::ToDouble(x_u);
			Double bug_fix = (t * 2) * (t * 2);
			Double bug = a * bug_fix;
			answer = (x - (0.5 * bug)) / t;

		}
		//fourth kenamatic equation
		else if (vi_u == "unknown" && t_u == "missing") {

			Double vf = System::Convert::ToDouble(vf_u);
			Double a = System::Convert::ToDouble(a_u);
			Double x = System::Convert::ToDouble(x_u);
			answer = cal.vit(vf, a, x);

		}
		else if (vf_u == "unknown" && t_u == "missing") {

			Double vi = System::Convert::ToDouble(vi_u);
			Double a = System::Convert::ToDouble(a_u);
			Double x = System::Convert::ToDouble(x_u);
			answer = cal.vft(vi, a, x);

		}
		else if (a_u == "unknown" && t_u == "missing") {

			Double vi = System::Convert::ToDouble(vi_u);
			Double vf = System::Convert::ToDouble(vf_u);
			Double x = System::Convert::ToDouble(x_u);
			answer = cal.at(vi, vf, x);

		}
		else if (x_u == "unknown" && t_u == "missing") {

			Double vi = System::Convert::ToDouble(vi_u);
			Double vf = System::Convert::ToDouble(vf_u);
			Double a = System::Convert::ToDouble(a_u);
			answer = cal.xt(vi, a, vf);


		}

		Answer->Text = System::Convert::ToString(answer);

























		///
	}




	

private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
