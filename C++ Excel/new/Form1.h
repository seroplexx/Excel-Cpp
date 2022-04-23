#pragma once

namespace new_ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;


	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:

	protected:

	protected:

	protected:






	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::CheckBox^ checkBox6;
	private: System::Windows::Forms::CheckBox^ checkBox7;
	private: System::Windows::Forms::CheckBox^ checkBox8;
	private: System::Windows::Forms::CheckBox^ checkBox9;
	private: System::Windows::Forms::CheckBox^ checkBox10;
	private: System::Windows::Forms::CheckBox^ checkBox11;
	private: System::Windows::Forms::CheckBox^ checkBox12;
	private: System::Windows::Forms::CheckBox^ checkBox13;
	private: System::Windows::Forms::CheckBox^ checkBox14;
	private: System::Windows::Forms::CheckBox^ checkBox15;
	private: System::Windows::Forms::CheckBox^ checkBox16;
	private: System::Windows::Forms::CheckBox^ checkBox17;
	private: System::Windows::Forms::CheckBox^ checkBox18;
	private: System::Windows::Forms::CheckBox^ checkBox19;
	private: System::Windows::Forms::CheckBox^ checkBox20;
	private: System::Windows::Forms::CheckBox^ checkBox21;
	private: System::Windows::Forms::CheckBox^ checkBox22;
	private: System::Windows::Forms::CheckBox^ checkBox23;
	private: System::Windows::Forms::CheckBox^ checkBox24;
	private: System::Windows::Forms::CheckBox^ checkBox25;
	private: System::Windows::Forms::CheckBox^ checkBox26;
	private: System::Windows::Forms::CheckBox^ checkBox27;
	private: System::Windows::Forms::CheckBox^ checkBox28;
	private: System::Windows::Forms::CheckBox^ checkBox29;
	private: System::Windows::Forms::CheckBox^ checkBox30;
	private: System::Windows::Forms::CheckBox^ checkBox31;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox10 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox11 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox12 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox13 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox14 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox15 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox16 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox17 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox18 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox19 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox20 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox21 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox22 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox23 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox24 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox25 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox26 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox27 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox28 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox29 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox30 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox31 = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(335, 566);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(124, 34);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Oluştur";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(30, 84);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(38, 21);
			this->checkBox1->TabIndex = 7;
			this->checkBox1->Text = L"1";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(90, 84);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(38, 21);
			this->checkBox2->TabIndex = 7;
			this->checkBox2->Text = L"2";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(149, 84);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(38, 21);
			this->checkBox3->TabIndex = 7;
			this->checkBox3->Text = L"3";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(205, 84);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(38, 21);
			this->checkBox4->TabIndex = 7;
			this->checkBox4->Text = L"4";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(265, 84);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(38, 21);
			this->checkBox5->TabIndex = 7;
			this->checkBox5->Text = L"5";
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Location = System::Drawing::Point(323, 84);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(38, 21);
			this->checkBox6->TabIndex = 7;
			this->checkBox6->Text = L"6";
			this->checkBox6->UseVisualStyleBackColor = true;
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->Location = System::Drawing::Point(381, 84);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(38, 21);
			this->checkBox7->TabIndex = 7;
			this->checkBox7->Text = L"7";
			this->checkBox7->UseVisualStyleBackColor = true;
			// 
			// checkBox8
			// 
			this->checkBox8->AutoSize = true;
			this->checkBox8->Location = System::Drawing::Point(30, 126);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(38, 21);
			this->checkBox8->TabIndex = 7;
			this->checkBox8->Text = L"8";
			this->checkBox8->UseVisualStyleBackColor = true;
			// 
			// checkBox9
			// 
			this->checkBox9->AutoSize = true;
			this->checkBox9->Location = System::Drawing::Point(90, 126);
			this->checkBox9->Name = L"checkBox9";
			this->checkBox9->Size = System::Drawing::Size(38, 21);
			this->checkBox9->TabIndex = 7;
			this->checkBox9->Text = L"9";
			this->checkBox9->UseVisualStyleBackColor = true;
			// 
			// checkBox10
			// 
			this->checkBox10->AutoSize = true;
			this->checkBox10->Location = System::Drawing::Point(149, 126);
			this->checkBox10->Name = L"checkBox10";
			this->checkBox10->Size = System::Drawing::Size(46, 21);
			this->checkBox10->TabIndex = 7;
			this->checkBox10->Text = L"10";
			this->checkBox10->UseVisualStyleBackColor = true;
			// 
			// checkBox11
			// 
			this->checkBox11->AutoSize = true;
			this->checkBox11->Location = System::Drawing::Point(205, 126);
			this->checkBox11->Name = L"checkBox11";
			this->checkBox11->Size = System::Drawing::Size(46, 21);
			this->checkBox11->TabIndex = 7;
			this->checkBox11->Text = L"11";
			this->checkBox11->UseVisualStyleBackColor = true;
			// 
			// checkBox12
			// 
			this->checkBox12->AutoSize = true;
			this->checkBox12->Location = System::Drawing::Point(265, 126);
			this->checkBox12->Name = L"checkBox12";
			this->checkBox12->Size = System::Drawing::Size(46, 21);
			this->checkBox12->TabIndex = 7;
			this->checkBox12->Text = L"12";
			this->checkBox12->UseVisualStyleBackColor = true;
			// 
			// checkBox13
			// 
			this->checkBox13->AutoSize = true;
			this->checkBox13->Location = System::Drawing::Point(323, 126);
			this->checkBox13->Name = L"checkBox13";
			this->checkBox13->Size = System::Drawing::Size(46, 21);
			this->checkBox13->TabIndex = 7;
			this->checkBox13->Text = L"13";
			this->checkBox13->UseVisualStyleBackColor = true;
			// 
			// checkBox14
			// 
			this->checkBox14->AutoSize = true;
			this->checkBox14->Location = System::Drawing::Point(381, 126);
			this->checkBox14->Name = L"checkBox14";
			this->checkBox14->Size = System::Drawing::Size(46, 21);
			this->checkBox14->TabIndex = 7;
			this->checkBox14->Text = L"14";
			this->checkBox14->UseVisualStyleBackColor = true;
			// 
			// checkBox15
			// 
			this->checkBox15->AutoSize = true;
			this->checkBox15->Location = System::Drawing::Point(30, 163);
			this->checkBox15->Name = L"checkBox15";
			this->checkBox15->Size = System::Drawing::Size(46, 21);
			this->checkBox15->TabIndex = 7;
			this->checkBox15->Text = L"15";
			this->checkBox15->UseVisualStyleBackColor = true;
			// 
			// checkBox16
			// 
			this->checkBox16->AutoSize = true;
			this->checkBox16->Location = System::Drawing::Point(90, 163);
			this->checkBox16->Name = L"checkBox16";
			this->checkBox16->Size = System::Drawing::Size(46, 21);
			this->checkBox16->TabIndex = 7;
			this->checkBox16->Text = L"16";
			this->checkBox16->UseVisualStyleBackColor = true;
			// 
			// checkBox17
			// 
			this->checkBox17->AutoSize = true;
			this->checkBox17->Location = System::Drawing::Point(149, 163);
			this->checkBox17->Name = L"checkBox17";
			this->checkBox17->Size = System::Drawing::Size(46, 21);
			this->checkBox17->TabIndex = 7;
			this->checkBox17->Text = L"17";
			this->checkBox17->UseVisualStyleBackColor = true;
			// 
			// checkBox18
			// 
			this->checkBox18->AutoSize = true;
			this->checkBox18->Location = System::Drawing::Point(205, 163);
			this->checkBox18->Name = L"checkBox18";
			this->checkBox18->Size = System::Drawing::Size(46, 21);
			this->checkBox18->TabIndex = 7;
			this->checkBox18->Text = L"18";
			this->checkBox18->UseVisualStyleBackColor = true;
			// 
			// checkBox19
			// 
			this->checkBox19->AutoSize = true;
			this->checkBox19->Location = System::Drawing::Point(265, 163);
			this->checkBox19->Name = L"checkBox19";
			this->checkBox19->Size = System::Drawing::Size(46, 21);
			this->checkBox19->TabIndex = 7;
			this->checkBox19->Text = L"19";
			this->checkBox19->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->checkBox19->UseVisualStyleBackColor = true;
			// 
			// checkBox20
			// 
			this->checkBox20->AutoSize = true;
			this->checkBox20->Location = System::Drawing::Point(323, 163);
			this->checkBox20->Name = L"checkBox20";
			this->checkBox20->Size = System::Drawing::Size(46, 21);
			this->checkBox20->TabIndex = 7;
			this->checkBox20->Text = L"20";
			this->checkBox20->UseVisualStyleBackColor = true;
			// 
			// checkBox21
			// 
			this->checkBox21->AutoSize = true;
			this->checkBox21->Location = System::Drawing::Point(380, 163);
			this->checkBox21->Name = L"checkBox21";
			this->checkBox21->Size = System::Drawing::Size(46, 21);
			this->checkBox21->TabIndex = 7;
			this->checkBox21->Text = L"21";
			this->checkBox21->UseVisualStyleBackColor = true;
			// 
			// checkBox22
			// 
			this->checkBox22->AutoSize = true;
			this->checkBox22->Location = System::Drawing::Point(30, 198);
			this->checkBox22->Name = L"checkBox22";
			this->checkBox22->Size = System::Drawing::Size(46, 21);
			this->checkBox22->TabIndex = 7;
			this->checkBox22->Text = L"22";
			this->checkBox22->UseVisualStyleBackColor = true;
			// 
			// checkBox23
			// 
			this->checkBox23->AutoSize = true;
			this->checkBox23->Location = System::Drawing::Point(90, 200);
			this->checkBox23->Name = L"checkBox23";
			this->checkBox23->Size = System::Drawing::Size(46, 21);
			this->checkBox23->TabIndex = 7;
			this->checkBox23->Text = L"23";
			this->checkBox23->UseVisualStyleBackColor = true;
			// 
			// checkBox24
			// 
			this->checkBox24->AutoSize = true;
			this->checkBox24->Location = System::Drawing::Point(149, 200);
			this->checkBox24->Name = L"checkBox24";
			this->checkBox24->Size = System::Drawing::Size(46, 21);
			this->checkBox24->TabIndex = 7;
			this->checkBox24->Text = L"24";
			this->checkBox24->UseVisualStyleBackColor = true;
			// 
			// checkBox25
			// 
			this->checkBox25->AutoSize = true;
			this->checkBox25->Location = System::Drawing::Point(205, 200);
			this->checkBox25->Name = L"checkBox25";
			this->checkBox25->Size = System::Drawing::Size(46, 21);
			this->checkBox25->TabIndex = 7;
			this->checkBox25->Text = L"25";
			this->checkBox25->UseVisualStyleBackColor = true;
			// 
			// checkBox26
			// 
			this->checkBox26->AutoSize = true;
			this->checkBox26->Location = System::Drawing::Point(265, 200);
			this->checkBox26->Name = L"checkBox26";
			this->checkBox26->Size = System::Drawing::Size(46, 21);
			this->checkBox26->TabIndex = 7;
			this->checkBox26->Text = L"26";
			this->checkBox26->UseVisualStyleBackColor = true;
			// 
			// checkBox27
			// 
			this->checkBox27->AutoSize = true;
			this->checkBox27->Location = System::Drawing::Point(323, 200);
			this->checkBox27->Name = L"checkBox27";
			this->checkBox27->Size = System::Drawing::Size(46, 21);
			this->checkBox27->TabIndex = 7;
			this->checkBox27->Text = L"27";
			this->checkBox27->UseVisualStyleBackColor = true;
			// 
			// checkBox28
			// 
			this->checkBox28->AutoSize = true;
			this->checkBox28->Location = System::Drawing::Point(381, 200);
			this->checkBox28->Name = L"checkBox28";
			this->checkBox28->Size = System::Drawing::Size(46, 21);
			this->checkBox28->TabIndex = 7;
			this->checkBox28->Text = L"28";
			this->checkBox28->UseVisualStyleBackColor = true;
			// 
			// checkBox29
			// 
			this->checkBox29->AutoSize = true;
			this->checkBox29->Location = System::Drawing::Point(30, 238);
			this->checkBox29->Name = L"checkBox29";
			this->checkBox29->Size = System::Drawing::Size(46, 21);
			this->checkBox29->TabIndex = 7;
			this->checkBox29->Text = L"29";
			this->checkBox29->UseVisualStyleBackColor = true;
			// 
			// checkBox30
			// 
			this->checkBox30->AutoSize = true;
			this->checkBox30->Location = System::Drawing::Point(90, 238);
			this->checkBox30->Name = L"checkBox30";
			this->checkBox30->Size = System::Drawing::Size(46, 21);
			this->checkBox30->TabIndex = 7;
			this->checkBox30->Text = L"30";
			this->checkBox30->UseVisualStyleBackColor = true;
			// 
			// checkBox31
			// 
			this->checkBox31->AutoSize = true;
			this->checkBox31->Location = System::Drawing::Point(149, 238);
			this->checkBox31->Name = L"checkBox31";
			this->checkBox31->Size = System::Drawing::Size(46, 21);
			this->checkBox31->TabIndex = 7;
			this->checkBox31->Text = L"31";
			this->checkBox31->UseVisualStyleBackColor = true;
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::SystemColors::HighlightText;
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"isim1", L"isim2", L"isim3", L"isim4" });
			this->comboBox1->Location = System::Drawing::Point(138, 91);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(202, 24);
			this->comboBox1->TabIndex = 8;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->checkBox9);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->checkBox28);
			this->panel1->Controls->Add(this->checkBox1);
			this->panel1->Controls->Add(this->checkBox14);
			this->panel1->Controls->Add(this->checkBox15);
			this->panel1->Controls->Add(this->checkBox27);
			this->panel1->Controls->Add(this->checkBox2);
			this->panel1->Controls->Add(this->checkBox13);
			this->panel1->Controls->Add(this->checkBox16);
			this->panel1->Controls->Add(this->checkBox26);
			this->panel1->Controls->Add(this->checkBox8);
			this->panel1->Controls->Add(this->checkBox7);
			this->panel1->Controls->Add(this->checkBox17);
			this->panel1->Controls->Add(this->checkBox25);
			this->panel1->Controls->Add(this->checkBox3);
			this->panel1->Controls->Add(this->checkBox12);
			this->panel1->Controls->Add(this->checkBox29);
			this->panel1->Controls->Add(this->checkBox24);
			this->panel1->Controls->Add(this->checkBox18);
			this->panel1->Controls->Add(this->checkBox6);
			this->panel1->Controls->Add(this->checkBox19);
			this->panel1->Controls->Add(this->checkBox23);
			this->panel1->Controls->Add(this->checkBox4);
			this->panel1->Controls->Add(this->checkBox11);
			this->panel1->Controls->Add(this->checkBox30);
			this->panel1->Controls->Add(this->checkBox22);
			this->panel1->Controls->Add(this->checkBox20);
			this->panel1->Controls->Add(this->checkBox5);
			this->panel1->Controls->Add(this->checkBox10);
			this->panel1->Controls->Add(this->checkBox31);
			this->panel1->Controls->Add(this->checkBox21);
			this->panel1->Location = System::Drawing::Point(12, 146);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(456, 377);
			this->panel1->TabIndex = 9;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(98, 289);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(263, 33);
			this->button4->TabIndex = 13;
			this->button4->Text = L"Excel Liste Oluştur";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(30, 328);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(172, 34);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Güncelle";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(189, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 20);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Takvim";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(254, 328);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(172, 34);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Temizle";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(169, 61);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(146, 17);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Lütfen İsminizi Seçiniz";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Black;
			this->panel2->Location = System::Drawing::Point(-7, 566);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(200, 1);
			this->panel2->TabIndex = 11;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Black;
			this->panel3->Location = System::Drawing::Point(283, 566);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(200, 1);
			this->panel3->TabIndex = 11;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(207, 541);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(66, 50);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(478, 603);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"V1.0";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		


	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {


		button1->Visible = false;

		

	}
		   private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		  
			   OleDbConnection^ baglanti = gcnew OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\temp\\1\\qqq.xlsx;Extended Properties='Excel 8.0;HDR=YES';");
			   baglanti->Open();
			   OleDbCommand^ komut = gcnew OleDbCommand("update [Sayfa$] set Ad=@p0,1=@p1,2=@p2,3=@p3,4=@p4,5=@p5,6=@p6,7=@p7,8=@p8,9=@p9,10=@p10,11=@p11,12=@p12,13=@p13,14=@p14,15=@p15,16=@p16,17=@p17,18=@p18,19=@p19,20=@p20,21=@p21,22=@p22,23=@p23,24=@p24,25=@p25,26=@p26,27=@p27,28=@p28,29=@p29,30=@p30,31=@p31 where Ad=@p0", baglanti);

			   komut->Parameters->AddWithValue("@p0", comboBox1->Text);


			   if (checkBox1->Checked == true)
			   {
				   komut->Parameters->AddWithValue("@p1", "1");
			   }
			   else
			   {
				   komut->Parameters->AddWithValue("@p1", "0");
			   }

			   if (checkBox2->Checked == true)
			   {
				   komut->Parameters->AddWithValue("@p2", "1");
			   }
			   else
			   {
				   komut->Parameters->AddWithValue("@p2", "0");
			   }
			   if (checkBox3->Checked == true)
			   {
				   komut->Parameters->AddWithValue("@p3", "1");
			   }
			   else
			   {
				   komut->Parameters->AddWithValue("@p3", "0");
			   }
			   if (checkBox4->Checked == true)
			   {
				   komut->Parameters->AddWithValue("@p4", "1");
			   }
			   else
			   {
				   komut->Parameters->AddWithValue("@p4", "0");
			   }
			   if (checkBox5->Checked == true)
			   {
				   komut->Parameters->AddWithValue("@p5", "1");
			   }
			   else
			   {
				   komut->Parameters->AddWithValue("@p5", "0");
			   }
			   if (checkBox6->Checked == true)
			   {
				   komut->Parameters->AddWithValue("@p6", "1");
			   }
			   else
			   {
				   komut->Parameters->AddWithValue("@p6", "0");
			   }
			   if (checkBox7->Checked == true)
			   {
				   komut->Parameters->AddWithValue("@p7", "1");
			   }
			   else
			   {
				   komut->Parameters->AddWithValue("@p7", "0");
			   }
			   if (checkBox8->Checked == true)
			   {
				   komut->Parameters->AddWithValue("@p8", "1");
			   }
			   else
			   {
				   komut->Parameters->AddWithValue("@p8", "0");
			   }
			   if (checkBox9->Checked == true)
			   {
				   komut->Parameters->AddWithValue("@p9", "1");
			   }
			   else
			   {
				   komut->Parameters->AddWithValue("@p9", "0");
			   }
			   if (checkBox10->Checked == true)
			   {
				   komut->Parameters->AddWithValue("@p10", "1");
			   }
			   else
			   {
				   komut->Parameters->AddWithValue("@p10", "0");
			   }
			   if (checkBox11->Checked == true)
			   {
				   komut->Parameters->AddWithValue("@p11", "1");
			   }
			   else
			   {
				   komut->Parameters->AddWithValue("@p11", "0");
			   }
			   if (checkBox12->Checked == true)
			   {
				   komut->Parameters->AddWithValue("@p12", "1");
			   }
			   else
			   {
				   komut->Parameters->AddWithValue("@p12", "0");
			   }
			   if (checkBox13->Checked == true)
			   {
				   komut->Parameters->AddWithValue("@p13", "1");
			   }
			   else
			   {
				   komut->Parameters->AddWithValue("@p13", "0");
			   }
			   if (checkBox14->Checked == true)
			   {
				   komut->Parameters->AddWithValue("@p14", "1");
			   }
			   else
			   {
				   komut->Parameters->AddWithValue("@p14", "0");
			   }
			   if (checkBox15->Checked == true)
			   {
				   komut->Parameters->AddWithValue("@p15", "1");
			   }
			   else
			   {
				   komut->Parameters->AddWithValue("@p15", "0");
			   }
			   if (checkBox16->Checked == true)
			   {
				   komut->Parameters->AddWithValue("@p16", "1");
			   }
			   else
			   {
				   komut->Parameters->AddWithValue("@p16", "0");
			   }
			   if (checkBox17->Checked == true)
			   {
				   komut->Parameters->AddWithValue("@p17", "1");
			   }
			   else
			   {
				   komut->Parameters->AddWithValue("@p17", "0");
			   }
			   if (checkBox18->Checked == true)
			   {
				   komut->Parameters->AddWithValue("@p18", "1");
			   }
			   else
			   {
				   komut->Parameters->AddWithValue("@p18", "0");
			   }
			   if (checkBox19->Checked == true)
			   {
				   komut->Parameters->AddWithValue("@p19", "1");
			   }
			   else
			   {
				   komut->Parameters->AddWithValue("@p19", "0");
			   }
			   if (checkBox20->Checked == true)
			   {
				   komut->Parameters->AddWithValue("@p20", "1");
			   }
			   else
			   {
				   komut->Parameters->AddWithValue("@p20", "0");
			   }
			   if (checkBox21->Checked == true)
			   {
				   komut->Parameters->AddWithValue("@p21", "1");
			   }
			   else
			   {
				   komut->Parameters->AddWithValue("@p21", "0");
			   }
			   if (checkBox22->Checked == true)
			   {
				   komut->Parameters->AddWithValue("@p22", "1");
			   }
			   else
			   {
				   komut->Parameters->AddWithValue("@p22", "0");
			   }
			   if (checkBox23->Checked == true)
			   {
				   komut->Parameters->AddWithValue("@p23", "1");
			   }
			   else
			   {
				   komut->Parameters->AddWithValue("@p23", "0");
			   }
			   if (checkBox24->Checked == true)
			   {
				   komut->Parameters->AddWithValue("@p24", "1");
			   }
			   else
			   {
				   komut->Parameters->AddWithValue("@p24", "0");
			   }
			   if (checkBox25->Checked == true)
			   {
				   komut->Parameters->AddWithValue("@p25", "1");
			   }
			   else
			   {
				   komut->Parameters->AddWithValue("@p25", "0");
			   }
			   if (checkBox26->Checked == true)
			   {
				   komut->Parameters->AddWithValue("@p26", "1");
			   }
			   else
			   {
				   komut->Parameters->AddWithValue("@p26", "0");
			   }
			   if (checkBox27->Checked == true)
			   {
				   komut->Parameters->AddWithValue("@p27", "1");
			   }
			   else
			   {
				   komut->Parameters->AddWithValue("@p27", "0");
			   }
			   if (checkBox28->Checked == true)
			   {
				   komut->Parameters->AddWithValue("@p28", "1");
			   }
			   else
			   {
				   komut->Parameters->AddWithValue("@p28", "0");
			   }
			   if (checkBox29->Checked == true)
			   {
				   komut->Parameters->AddWithValue("@p29", "1");
			   }
			   else
			   {
				   komut->Parameters->AddWithValue("@p29", "0");
			   }
			   if (checkBox30->Checked == true)
			   {
				   komut->Parameters->AddWithValue("@p30", "1");
			   }
			   else
			   {
				   komut->Parameters->AddWithValue("@p30", "0");
			   }
			   if (checkBox31->Checked == true)
			   {
				   komut->Parameters->AddWithValue("@p31", "1");
			   }
			   else
			   {
				   komut->Parameters->AddWithValue("@p31", "0");
			   }


			   komut->ExecuteNonQuery();
			   baglanti->Close();


		   
		   
		   
		   }


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		

		//-------------------------------------oledb nesne----------------------------------------------------- 

		OleDbConnection^ baglanti = gcnew OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\temp\\1\\qqq.xlsx;Extended Properties='Excel 8.0;HDR=YES';");
		baglanti->Open();
		OleDbCommand^ komut = gcnew OleDbCommand("insert into [Sayfa$] (Ad,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31) values (?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?)", baglanti);
		
		//-------------------------------------şartlar----------------------------------------------------- 


		komut->Parameters->AddWithValue("@p0",comboBox1->Text);
		

		if (checkBox1->Checked == true)
		{
			komut->Parameters->AddWithValue("@p1", "1");
		}
		else
		{
			komut->Parameters->AddWithValue("@p1", "0");
		}

		if (checkBox2->Checked == true)
		{
			komut->Parameters->AddWithValue("@p2", "1");
		}
		else
		{
			komut->Parameters->AddWithValue("@p2", "0");
		}
		if (checkBox3->Checked == true)
		{
			komut->Parameters->AddWithValue("@p3", "1");
		}
		else
		{
			komut->Parameters->AddWithValue("@p3", "0");
		}
		if (checkBox4->Checked == true)
		{
			komut->Parameters->AddWithValue("@p4", "1");
		}
		else
		{
			komut->Parameters->AddWithValue("@p4", "0");
		}
		if (checkBox5->Checked == true)
		{
			komut->Parameters->AddWithValue("@p5", "1");
		}
		else
		{
			komut->Parameters->AddWithValue("@p5", "0");
		}
		if (checkBox6->Checked == true)
		{
			komut->Parameters->AddWithValue("@p6", "1");
		}
		else
		{
			komut->Parameters->AddWithValue("@p6", "0");
		}
		if (checkBox7->Checked == true)
		{
			komut->Parameters->AddWithValue("@p7", "1");
		}
		else
		{
			komut->Parameters->AddWithValue("@p7", "0");
		}
		if (checkBox8->Checked == true)
		{
			komut->Parameters->AddWithValue("@p8", "1");
		}
		else
		{
			komut->Parameters->AddWithValue("@p8", "0");
		}
		if (checkBox9->Checked == true)
		{
			komut->Parameters->AddWithValue("@p9", "1");
		}
		else
		{
			komut->Parameters->AddWithValue("@p9", "0");
		}
		if (checkBox10->Checked == true)
		{
			komut->Parameters->AddWithValue("@p10", "1");
		}
		else
		{
			komut->Parameters->AddWithValue("@p10", "0");
		}
		if (checkBox11->Checked == true)
		{
			komut->Parameters->AddWithValue("@p11", "1");
		}
		else
		{
			komut->Parameters->AddWithValue("@p11", "0");
		}
		if (checkBox12->Checked == true)
		{
			komut->Parameters->AddWithValue("@p12", "1");
		}
		else
		{
			komut->Parameters->AddWithValue("@p12", "0");
		}
		if (checkBox13->Checked == true)
		{
			komut->Parameters->AddWithValue("@p13", "1");
		}
		else
		{
			komut->Parameters->AddWithValue("@p13", "0");
		}
		if (checkBox14->Checked == true)
		{
			komut->Parameters->AddWithValue("@p14", "1");
		}
		else
		{
			komut->Parameters->AddWithValue("@p14", "0");
		}
		if (checkBox15->Checked == true)
		{
			komut->Parameters->AddWithValue("@p15", "1");
		}
		else
		{
			komut->Parameters->AddWithValue("@p15", "0");
		}
		if (checkBox16->Checked == true)
		{
			komut->Parameters->AddWithValue("@p16", "1");
		}
		else
		{
			komut->Parameters->AddWithValue("@p16", "0");
		}
		if (checkBox17->Checked == true)
		{
			komut->Parameters->AddWithValue("@p17", "1");
		}
		else
		{
			komut->Parameters->AddWithValue("@p17", "0");
		}
		if (checkBox18->Checked == true)
		{
			komut->Parameters->AddWithValue("@p18", "1");
		}
		else
		{
			komut->Parameters->AddWithValue("@p18", "0");
		}
		if (checkBox19->Checked == true)
		{
			komut->Parameters->AddWithValue("@p19", "1");
		}
		else
		{
			komut->Parameters->AddWithValue("@p19", "0");
		}
		if (checkBox20->Checked == true)
		{
			komut->Parameters->AddWithValue("@p20", "1");
		}
		else
		{
			komut->Parameters->AddWithValue("@p20", "0");
		}
		if (checkBox21->Checked == true)
		{
			komut->Parameters->AddWithValue("@p21", "1");
		}
		else
		{
			komut->Parameters->AddWithValue("@p21", "0");
		}
		if (checkBox22->Checked == true)
		{
			komut->Parameters->AddWithValue("@p22", "1");
		}
		else
		{
			komut->Parameters->AddWithValue("@p22", "0");
		}
		if (checkBox23->Checked == true)
		{
			komut->Parameters->AddWithValue("@p23", "1");
		}
		else
		{
			komut->Parameters->AddWithValue("@p23", "0");
		}
		if (checkBox24->Checked == true)
		{
			komut->Parameters->AddWithValue("@p24", "1");
		}
		else
		{
			komut->Parameters->AddWithValue("@p24", "0");
		}
		if (checkBox25->Checked == true)
		{
			komut->Parameters->AddWithValue("@p25", "1");
		}
		else
		{
			komut->Parameters->AddWithValue("@p25", "0");
		}
		if (checkBox26->Checked == true)
		{
			komut->Parameters->AddWithValue("@p26", "1");
		}
		else
		{
			komut->Parameters->AddWithValue("@p26", "0");
		}
		if (checkBox27->Checked == true)
		{
			komut->Parameters->AddWithValue("@p27", "1");
		}
		else
		{
			komut->Parameters->AddWithValue("@p27", "0");
		}
		if (checkBox28->Checked == true)
		{
			komut->Parameters->AddWithValue("@p28", "1");
		}
		else
		{
			komut->Parameters->AddWithValue("@p28", "0");
		}
		if (checkBox29->Checked == true)
		{
			komut->Parameters->AddWithValue("@p29", "1");
		}
		else
		{
			komut->Parameters->AddWithValue("@p29", "0");
		}
		if (checkBox30->Checked == true)
		{
			komut->Parameters->AddWithValue("@p30", "1");
		}
		else
		{
			komut->Parameters->AddWithValue("@p30", "0");
		}
		if (checkBox31->Checked == true)
		{
			komut->Parameters->AddWithValue("@p31", "1");
		}
		else
		{
			komut->Parameters->AddWithValue("@p31", "0");
		}

		
		komut->ExecuteNonQuery();
		baglanti->Close();
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {

		if (comboBox1->SelectedItem == nullptr)
		{
			panel1->Visible = false;


		}
		else
		{
			panel1->Visible = true;
			label1->Visible = false;
		}
	}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	checkBox1->Checked = false;
	checkBox2->Checked = false;
	checkBox3->Checked = false;
	checkBox4->Checked = false;
	checkBox5->Checked = false;
	checkBox6->Checked = false;
	checkBox7->Checked = false;
	checkBox8->Checked = false;
	checkBox9->Checked = false;
	checkBox10->Checked = false;
	checkBox11->Checked = false;
	checkBox12->Checked = false;
	checkBox13->Checked = false;
	checkBox14->Checked = false;
	checkBox15->Checked = false;
	checkBox16->Checked = false;
	checkBox17->Checked = false;
	checkBox18->Checked = false;
	checkBox19->Checked = false;
	checkBox20->Checked = false;
	checkBox21->Checked = false;
	checkBox22->Checked = false;
	checkBox23->Checked = false;
	checkBox24->Checked = false;
	checkBox25->Checked = false;
	checkBox26->Checked = false;
	checkBox27->Checked = false;
	checkBox28->Checked = false;
	checkBox29->Checked = false;
	checkBox30->Checked = false;
	checkBox31->Checked = false;
	//--------------------------
	comboBox1->SelectedItem = nullptr;

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	OleDbConnection^ baglanti = gcnew OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\temp\\1\\qqq.xlsx;Extended Properties='Excel 8.0;HDR=YES';");
	baglanti->Open();
	for (int i  = 0; i <= 19; i++)
	{

	OleDbCommand^ komut = gcnew OleDbCommand("insert into [Sayfa$] (Ad,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31) values (@p50,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?)", baglanti);


	
	komut->Parameters->AddWithValue("@p0", comboBox1->Items[i]);
	

		komut->Parameters->AddWithValue("@p1", "0");
		komut->Parameters->AddWithValue("@p2", "0");
		komut->Parameters->AddWithValue("@p3", "0");
		komut->Parameters->AddWithValue("@p4", "0");
		komut->Parameters->AddWithValue("@p5", "0");
		komut->Parameters->AddWithValue("@p6", "0");
		komut->Parameters->AddWithValue("@p7", "0");
		komut->Parameters->AddWithValue("@p8", "0");
		komut->Parameters->AddWithValue("@p9", "0");
		komut->Parameters->AddWithValue("@p10", "0");
		komut->Parameters->AddWithValue("@p11", "0");
		komut->Parameters->AddWithValue("@p12", "0");
		komut->Parameters->AddWithValue("@p13", "0");
		komut->Parameters->AddWithValue("@p14", "0");
		komut->Parameters->AddWithValue("@p15", "0");
		komut->Parameters->AddWithValue("@p16", "0");
		komut->Parameters->AddWithValue("@p17", "0");
		komut->Parameters->AddWithValue("@p18", "0");
		komut->Parameters->AddWithValue("@p19", "0");
		komut->Parameters->AddWithValue("@p20", "0");
		komut->Parameters->AddWithValue("@p21", "0");
		komut->Parameters->AddWithValue("@p22", "0");
		komut->Parameters->AddWithValue("@p23", "0");
		komut->Parameters->AddWithValue("@p24", "0");
		komut->Parameters->AddWithValue("@p25", "0");
		komut->Parameters->AddWithValue("@p26", "0");	
		komut->Parameters->AddWithValue("@p27", "0");
		komut->Parameters->AddWithValue("@p28", "0");
		komut->Parameters->AddWithValue("@p29", "0");
		komut->Parameters->AddWithValue("@p30", "0");
		komut->Parameters->AddWithValue("@p31", "0");
		komut->ExecuteNonQuery();
		
	}
	baglanti->Close();
}
};
}
