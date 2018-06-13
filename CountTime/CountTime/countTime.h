#pragma once

namespace CountTime {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			this->label7->Hide();
			this->label8->Hide();
			this->label9->Hide();
			this->label10->Hide();
			this->label11->Hide();
			this->label12->Hide();
			this->label13->Hide();
			this->label14->Hide();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;

	private: System::ComponentModel::IContainer^  components;
	protected:

	private:


#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"標楷體", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(158, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(157, 27);
			this->label1->TabIndex = 0;
			this->label1->Text = L"倒數計時器";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"標楷體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label2->Location = System::Drawing::Point(29, 176);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(115, 19);
			this->label2->TabIndex = 1;
			this->label2->Text = L"倒數時間 :";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->numericUpDown1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"標楷體", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->numericUpDown1->InterceptArrowKeys = false;
			this->numericUpDown1->Location = System::Drawing::Point(146, 176);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(56, 23);
			this->numericUpDown1->TabIndex = 2;
			this->numericUpDown1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->numericUpDown2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->numericUpDown2->Font = (gcnew System::Drawing::Font(L"標楷體", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->numericUpDown2->Location = System::Drawing::Point(267, 176);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 59, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(56, 23);
			this->numericUpDown2->TabIndex = 3;
			this->numericUpDown2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown2->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown2_ValueChanged);
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->numericUpDown3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->numericUpDown3->Font = (gcnew System::Drawing::Font(L"標楷體", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->numericUpDown3->Location = System::Drawing::Point(386, 176);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 59, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(56, 23);
			this->numericUpDown3->TabIndex = 4;
			this->numericUpDown3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown3->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown3_ValueChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"標楷體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label3->Location = System::Drawing::Point(210, 176);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 19);
			this->label3->TabIndex = 5;
			this->label3->Text = L"小時";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"標楷體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label4->Location = System::Drawing::Point(329, 176);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(51, 19);
			this->label4->TabIndex = 6;
			this->label4->Text = L"分鐘";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"標楷體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label5->Location = System::Drawing::Point(448, 176);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(30, 19);
			this->label5->TabIndex = 7;
			this->label5->Text = L"秒";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"標楷體", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label6->Location = System::Drawing::Point(183, 440);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(117, 12);
			this->label6->TabIndex = 8;
			this->label6->Text = L"©Samuel Chi 2017";
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->Font = (gcnew System::Drawing::Font(L"標楷體", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button1->Location = System::Drawing::Point(127, 286);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 30);
			this->button1->TabIndex = 9;
			this->button1->Text = L"全部歸零";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button2->Font = (gcnew System::Drawing::Font(L"標楷體", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button2->Location = System::Drawing::Point(285, 286);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 30);
			this->button2->TabIndex = 10;
			this->button2->Text = L"開始計時";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"標楷體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label7->Location = System::Drawing::Point(29, 261);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(115, 19);
			this->label7->TabIndex = 11;
			this->label7->Text = L"剩下時間 :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"標楷體", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label8->Location = System::Drawing::Point(165, 261);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(23, 24);
			this->label8->TabIndex = 12;
			this->label8->Text = L"0";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"標楷體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label9->Location = System::Drawing::Point(210, 261);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(51, 19);
			this->label9->TabIndex = 15;
			this->label9->Text = L"小時";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"標楷體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label10->Location = System::Drawing::Point(329, 261);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(51, 19);
			this->label10->TabIndex = 14;
			this->label10->Text = L"分鐘";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"標楷體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label11->Location = System::Drawing::Point(448, 261);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(30, 19);
			this->label11->TabIndex = 13;
			this->label11->Text = L"秒";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"標楷體", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label12->Location = System::Drawing::Point(284, 261);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(23, 24);
			this->label12->TabIndex = 16;
			this->label12->Text = L"0";
			this->label12->Click += gcnew System::EventHandler(this, &MyForm::label12_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"標楷體", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label13->Location = System::Drawing::Point(405, 261);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(23, 24);
			this->label13->TabIndex = 17;
			this->label13->Text = L"0";
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick_1);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"標楷體", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label14->ForeColor = System::Drawing::Color::Red;
			this->label14->Location = System::Drawing::Point(144, 96);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(213, 37);
			this->label14->TabIndex = 18;
			this->label14->Text = L"時間到囉!!";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"標楷體", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label15->Location = System::Drawing::Point(439, 43);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(33, 12);
			this->label15->TabIndex = 19;
			this->label15->Text = L"V1.0";
			this->label15->Click += gcnew System::EventHandler(this, &MyForm::label15_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->ClientSize = System::Drawing::Size(484, 461);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"倒數計時器";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label12_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label15_Click(System::Object^  sender, System::EventArgs^  e) {
}

//
// set hour
//
private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	this->label14->Hide();
	this->label8->Text = (this->numericUpDown1->Value).ToString();
}

//
// set minute
//
private: System::Void numericUpDown2_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	this->label14->Hide();
	this->label12->Text = (this->numericUpDown2->Value).ToString();
}

//
// set second
//
private: System::Void numericUpDown3_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	this->label14->Hide();
	this->label13->Text = (this->numericUpDown3->Value).ToString();
}

//
// push button1(setButton)
//
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	this->timer1->Stop();
	this->label7->Hide();
	this->label8->Hide();
	this->label9->Hide();
	this->label10->Hide();
	this->label11->Hide();
	this->label12->Hide();
	this->label13->Hide();
	this->label14->Hide();
	this->label8->Text = "0";
	this->label12->Text = "0";
	this->label13->Text = "0";
	this->button2->Show();
	this->button1->Location = System::Drawing::Point(127, 286);
	this->button1->Text = L"全部歸零";
	this->numericUpDown1->Value = 0;
	this->numericUpDown2->Value = 0;
	this->numericUpDown3->Value = 0;
	this->numericUpDown1->Enabled = true;
	this->numericUpDown2->Enabled = true;
	this->numericUpDown3->Enabled = true;
	this->timer1->Enabled = false;
}

//
// push button2(startButton)
//
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->numericUpDown1->Value == 0 &&
		this->numericUpDown2->Value == 0 &&
		this->numericUpDown3->Value == 0)
	{
		this->label14->Location = System::Drawing::Point(45, 96);
		this->label14->Text = L"您尚未輸入倒數時間!!";
		this->label14->Show();
	}
	else
	{
		this->label7->Show();
		this->label8->Show();
		this->label9->Show();
		this->label10->Show();
		this->label11->Show();
		this->label12->Show();
		this->label13->Show();
		this->label14->Hide();
		this->button2->Hide();
		this->button1->Location = System::Drawing::Point(200, 350);
		this->numericUpDown1->Enabled = false;
		this->numericUpDown2->Enabled = false;
		this->numericUpDown3->Enabled = false;
		this->timer1->Interval = 1000;
		this->timer1->Enabled = true;
		this->button1->Text = L"重新設定";
	}	
}

//
// timer run
//
private: System::Void timer1_Tick_1(System::Object^  sender, System::EventArgs^  e) {
	if (System::Convert::ToInt32(this->label13->Text) != 0)
	{
		this->label13->Text = (System::Convert::ToInt32(this->label13->Text) - 1).ToString();
	}
	else if (System::Convert::ToInt32(this->label12->Text) != 0)
	{
		this->label12->Text = (System::Convert::ToInt32(this->label12->Text) - 1).ToString();
		this->label13->Text = (System::Convert::ToInt32(this->label13->Text) + 59).ToString();
	}
	else if (System::Convert::ToInt32(this->label8->Text) != 0)
	{
		this->label8->Text = (System::Convert::ToInt32(this->label8->Text) - 1).ToString();
		this->label12->Text = (System::Convert::ToInt32(this->label12->Text) + 59).ToString();
		this->label13->Text = (System::Convert::ToInt32(this->label13->Text) + 59).ToString();
	}
	else
	{
		this->button1->Text = L"結束";
		//
		// Text flash
		//
		static bool oc = true;
		this->timer1->Interval = 400;
		if (oc == true)
		{
			this->label14->Location = System::Drawing::Point(144, 96);
			this->label14->Text = L"時間到囉!!";
			this->label14->Show();
			oc = false;
		}
		else
		{
			this->label14->Hide();
			oc = true;
		}
	}
}
};
}
