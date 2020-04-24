#pragma once
#include <string>
#include <msclr\marshal_cppstd.h>
#include <stdlib.h>
#include <time.h>
#include <sstream>
#include <algorithm> 

#include "Kerdes.h"
#include "AdatFeldolgozas.h"
#include "Jatek.h"
namespace LegyenOnIsMilliomos {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainWindow
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		MainWindow(void)
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
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::OpenFileDialog^  ofdKerdesBetoltes;


	private: System::Windows::Forms::Label^  lblKerdes;











	private: System::Windows::Forms::Panel^  pnlKerdes;
	private: System::Windows::Forms::Panel^  pnlPenz;
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::ListBox^  lstPenz;


	private: System::Windows::Forms::Button^  btnB;
	private: System::Windows::Forms::Button^  btnA;



	private: System::Windows::Forms::Label^  lblKor;

	private: System::Windows::Forms::Button^  btnTelefon;

	private: System::Windows::Forms::Label^  lblSegitsegek;
	private: System::Windows::Forms::Button^  btnFelezes;
	private: System::Windows::Forms::Button^  btnKozonseg;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  btnD;
	private: System::Windows::Forms::Button^  btnC;
	private: System::Windows::Forms::Label^  lblTelefonCim;
	private: System::Windows::Forms::Label^  lblTelefonTipp;

	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  pnlTelefon;
	private: System::Windows::Forms::Panel^  pnlKozonseg;


	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Label^  lblKozonsegCim;
	private: System::Windows::Forms::Label^  lblKozD;

	private: System::Windows::Forms::Label^  lblKozC;

	private: System::Windows::Forms::Label^  lblKozB;

	private: System::Windows::Forms::Label^  lblKozA;
	private: System::Windows::Forms::Button^  btnMegall;
	private: System::Windows::Forms::Label^  lblKategoria;

	private: System::Windows::Forms::TableLayoutPanel^  tlyMenu;
	private: System::Windows::Forms::Panel^  pnlMenu;
	private: System::Windows::Forms::Label^  lblKerdesekSzama;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  btnJatek;
	private: System::Windows::Forms::Button^  btnKilepes;
	private: System::Windows::Forms::Button^  btnNevjegy;
	private: System::Windows::Forms::Button^  btnAdatFeltoltes;
	private: System::Windows::Forms::TableLayoutPanel^  tlyJatek;
	private: System::Windows::Forms::TableLayoutPanel^  tlyPenzSegitseg;




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainWindow::typeid));
			this->ofdKerdesBetoltes = (gcnew System::Windows::Forms::OpenFileDialog());
			this->lblKerdes = (gcnew System::Windows::Forms::Label());
			this->pnlPenz = (gcnew System::Windows::Forms::Panel());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->lstPenz = (gcnew System::Windows::Forms::ListBox());
			this->lblKategoria = (gcnew System::Windows::Forms::Label());
			this->btnMegall = (gcnew System::Windows::Forms::Button());
			this->btnFelezes = (gcnew System::Windows::Forms::Button());
			this->btnKozonseg = (gcnew System::Windows::Forms::Button());
			this->btnTelefon = (gcnew System::Windows::Forms::Button());
			this->lblSegitsegek = (gcnew System::Windows::Forms::Label());
			this->lblKor = (gcnew System::Windows::Forms::Label());
			this->pnlKerdes = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnD = (gcnew System::Windows::Forms::Button());
			this->btnB = (gcnew System::Windows::Forms::Button());
			this->btnA = (gcnew System::Windows::Forms::Button());
			this->btnC = (gcnew System::Windows::Forms::Button());
			this->lblTelefonCim = (gcnew System::Windows::Forms::Label());
			this->lblTelefonTipp = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pnlTelefon = (gcnew System::Windows::Forms::Panel());
			this->pnlKozonseg = (gcnew System::Windows::Forms::Panel());
			this->lblKozD = (gcnew System::Windows::Forms::Label());
			this->lblKozC = (gcnew System::Windows::Forms::Label());
			this->lblKozB = (gcnew System::Windows::Forms::Label());
			this->lblKozA = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->lblKozonsegCim = (gcnew System::Windows::Forms::Label());
			this->tlyMenu = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pnlMenu = (gcnew System::Windows::Forms::Panel());
			this->lblKerdesekSzama = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btnJatek = (gcnew System::Windows::Forms::Button());
			this->btnKilepes = (gcnew System::Windows::Forms::Button());
			this->btnNevjegy = (gcnew System::Windows::Forms::Button());
			this->btnAdatFeltoltes = (gcnew System::Windows::Forms::Button());
			this->tlyJatek = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tlyPenzSegitseg = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pnlPenz->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->pnlKerdes->SuspendLayout();
			this->panel1->SuspendLayout();
			this->pnlTelefon->SuspendLayout();
			this->pnlKozonseg->SuspendLayout();
			this->tlyMenu->SuspendLayout();
			this->pnlMenu->SuspendLayout();
			this->tlyJatek->SuspendLayout();
			this->tlyPenzSegitseg->SuspendLayout();
			this->SuspendLayout();
			// 
			// ofdKerdesBetoltes
			// 
			this->ofdKerdesBetoltes->FileName = L"openFileDialog1";
			this->ofdKerdesBetoltes->Filter = L"Szövegfájlok (.txt)|*.txt";
			// 
			// lblKerdes
			// 
			this->lblKerdes->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblKerdes->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lblKerdes->ForeColor = System::Drawing::Color::White;
			this->lblKerdes->Location = System::Drawing::Point(69, 23);
			this->lblKerdes->Name = L"lblKerdes";
			this->lblKerdes->Size = System::Drawing::Size(872, 29);
			this->lblKerdes->TabIndex = 1;
			this->lblKerdes->Text = L"Kérdés";
			this->lblKerdes->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pnlPenz
			// 
			this->pnlPenz->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pnlPenz->Controls->Add(this->splitContainer1);
			this->pnlPenz->Location = System::Drawing::Point(222, 23);
			this->pnlPenz->Name = L"pnlPenz";
			this->pnlPenz->Size = System::Drawing::Size(592, 404);
			this->pnlPenz->TabIndex = 5;
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->lstPenz);
			this->splitContainer1->Panel1->Controls->Add(this->lblKategoria);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->btnMegall);
			this->splitContainer1->Panel2->Controls->Add(this->btnFelezes);
			this->splitContainer1->Panel2->Controls->Add(this->btnKozonseg);
			this->splitContainer1->Panel2->Controls->Add(this->btnTelefon);
			this->splitContainer1->Panel2->Controls->Add(this->lblSegitsegek);
			this->splitContainer1->Panel2->Controls->Add(this->lblKor);
			this->splitContainer1->Size = System::Drawing::Size(592, 404);
			this->splitContainer1->SplitterDistance = 411;
			this->splitContainer1->TabIndex = 0;
			// 
			// lstPenz
			// 
			this->lstPenz->BackColor = System::Drawing::SystemColors::InfoText;
			this->lstPenz->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->lstPenz->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lstPenz->ForeColor = System::Drawing::SystemColors::Window;
			this->lstPenz->FormattingEnabled = true;
			this->lstPenz->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->lstPenz->ItemHeight = 22;
			this->lstPenz->Location = System::Drawing::Point(22, 20);
			this->lstPenz->Name = L"lstPenz";
			this->lstPenz->Size = System::Drawing::Size(278, 330);
			this->lstPenz->TabIndex = 0;
			// 
			// lblKategoria
			// 
			this->lblKategoria->AutoSize = true;
			this->lblKategoria->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblKategoria->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lblKategoria->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblKategoria->Location = System::Drawing::Point(18, 363);
			this->lblKategoria->Name = L"lblKategoria";
			this->lblKategoria->Size = System::Drawing::Size(85, 22);
			this->lblKategoria->TabIndex = 0;
			this->lblKategoria->Text = L"Kategória";
			// 
			// btnMegall
			// 
			this->btnMegall->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMegall->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnMegall->ForeColor = System::Drawing::Color::Red;
			this->btnMegall->Location = System::Drawing::Point(22, 345);
			this->btnMegall->Name = L"btnMegall";
			this->btnMegall->Size = System::Drawing::Size(147, 40);
			this->btnMegall->TabIndex = 2;
			this->btnMegall->Text = L"Megáll";
			this->btnMegall->UseVisualStyleBackColor = true;
			this->btnMegall->Click += gcnew System::EventHandler(this, &MainWindow::btnMegall_Click);
			// 
			// btnFelezes
			// 
			this->btnFelezes->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnFelezes->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnFelezes.BackgroundImage")));
			this->btnFelezes->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnFelezes->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnFelezes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnFelezes->ForeColor = System::Drawing::Color::White;
			this->btnFelezes->Location = System::Drawing::Point(22, 249);
			this->btnFelezes->Name = L"btnFelezes";
			this->btnFelezes->Size = System::Drawing::Size(147, 77);
			this->btnFelezes->TabIndex = 1;
			this->btnFelezes->Text = L"X";
			this->btnFelezes->UseVisualStyleBackColor = false;
			this->btnFelezes->Click += gcnew System::EventHandler(this, &MainWindow::btnFelezes_Click);
			// 
			// btnKozonseg
			// 
			this->btnKozonseg->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnKozonseg.BackgroundImage")));
			this->btnKozonseg->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnKozonseg->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnKozonseg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnKozonseg->ForeColor = System::Drawing::SystemColors::Window;
			this->btnKozonseg->Location = System::Drawing::Point(22, 166);
			this->btnKozonseg->Name = L"btnKozonseg";
			this->btnKozonseg->Size = System::Drawing::Size(147, 77);
			this->btnKozonseg->TabIndex = 1;
			this->btnKozonseg->Text = L"X";
			this->btnKozonseg->UseVisualStyleBackColor = true;
			this->btnKozonseg->Click += gcnew System::EventHandler(this, &MainWindow::btnKozonseg_Click);
			// 
			// btnTelefon
			// 
			this->btnTelefon->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnTelefon.BackgroundImage")));
			this->btnTelefon->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnTelefon->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnTelefon->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnTelefon->ForeColor = System::Drawing::SystemColors::Window;
			this->btnTelefon->Location = System::Drawing::Point(22, 83);
			this->btnTelefon->Name = L"btnTelefon";
			this->btnTelefon->Size = System::Drawing::Size(147, 77);
			this->btnTelefon->TabIndex = 1;
			this->btnTelefon->Text = L"X";
			this->btnTelefon->UseVisualStyleBackColor = true;
			this->btnTelefon->Click += gcnew System::EventHandler(this, &MainWindow::btnTelefon_Click);
			// 
			// lblSegitsegek
			// 
			this->lblSegitsegek->AutoSize = true;
			this->lblSegitsegek->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lblSegitsegek->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblSegitsegek->Location = System::Drawing::Point(18, 42);
			this->lblSegitsegek->Name = L"lblSegitsegek";
			this->lblSegitsegek->Size = System::Drawing::Size(97, 22);
			this->lblSegitsegek->TabIndex = 0;
			this->lblSegitsegek->Text = L"Segítségek:";
			// 
			// lblKor
			// 
			this->lblKor->AutoSize = true;
			this->lblKor->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lblKor->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblKor->Location = System::Drawing::Point(18, 20);
			this->lblKor->Name = L"lblKor";
			this->lblKor->Size = System::Drawing::Size(36, 22);
			this->lblKor->TabIndex = 0;
			this->lblKor->Text = L"Kör";
			// 
			// pnlKerdes
			// 
			this->pnlKerdes->BackColor = System::Drawing::SystemColors::Desktop;
			this->pnlKerdes->Controls->Add(this->panel1);
			this->pnlKerdes->Controls->Add(this->btnD);
			this->pnlKerdes->Controls->Add(this->btnB);
			this->pnlKerdes->Controls->Add(this->btnA);
			this->pnlKerdes->Controls->Add(this->btnC);
			this->pnlKerdes->Location = System::Drawing::Point(3, 563);
			this->pnlKerdes->Name = L"pnlKerdes";
			this->pnlKerdes->Size = System::Drawing::Size(1037, 181);
			this->pnlKerdes->TabIndex = 4;
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->lblKerdes);
			this->panel1->Location = System::Drawing::Point(12, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1017, 73);
			this->panel1->TabIndex = 4;
			// 
			// btnD
			// 
			this->btnD->BackColor = System::Drawing::SystemColors::ControlText;
			this->btnD->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnD.BackgroundImage")));
			this->btnD->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnD->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnD->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnD->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnD->Location = System::Drawing::Point(564, 135);
			this->btnD->Name = L"btnD";
			this->btnD->Size = System::Drawing::Size(465, 41);
			this->btnD->TabIndex = 2;
			this->btnD->Text = L"D";
			this->btnD->UseVisualStyleBackColor = false;
			this->btnD->Click += gcnew System::EventHandler(this, &MainWindow::btnD_Click);
			// 
			// btnB
			// 
			this->btnB->BackColor = System::Drawing::SystemColors::ControlText;
			this->btnB->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnB.BackgroundImage")));
			this->btnB->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnB->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnB->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnB->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnB->Location = System::Drawing::Point(564, 81);
			this->btnB->Name = L"btnB";
			this->btnB->Size = System::Drawing::Size(465, 41);
			this->btnB->TabIndex = 2;
			this->btnB->Text = L"B";
			this->btnB->UseVisualStyleBackColor = false;
			this->btnB->Click += gcnew System::EventHandler(this, &MainWindow::btnB_Click);
			// 
			// btnA
			// 
			this->btnA->BackColor = System::Drawing::SystemColors::ControlText;
			this->btnA->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnA.BackgroundImage")));
			this->btnA->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnA->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnA->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnA->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnA->Location = System::Drawing::Point(12, 81);
			this->btnA->Name = L"btnA";
			this->btnA->Size = System::Drawing::Size(465, 41);
			this->btnA->TabIndex = 2;
			this->btnA->Text = L"A";
			this->btnA->UseVisualStyleBackColor = false;
			this->btnA->Click += gcnew System::EventHandler(this, &MainWindow::btnA_Click);
			// 
			// btnC
			// 
			this->btnC->BackColor = System::Drawing::SystemColors::ControlText;
			this->btnC->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnC.BackgroundImage")));
			this->btnC->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnC->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnC->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnC->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnC->Location = System::Drawing::Point(16, 135);
			this->btnC->Name = L"btnC";
			this->btnC->Size = System::Drawing::Size(461, 41);
			this->btnC->TabIndex = 2;
			this->btnC->Text = L"C";
			this->btnC->UseVisualStyleBackColor = false;
			this->btnC->Click += gcnew System::EventHandler(this, &MainWindow::btnC_Click);
			// 
			// lblTelefonCim
			// 
			this->lblTelefonCim->AutoSize = true;
			this->lblTelefonCim->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lblTelefonCim->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->lblTelefonCim->Location = System::Drawing::Point(11, 154);
			this->lblTelefonCim->Name = L"lblTelefonCim";
			this->lblTelefonCim->Size = System::Drawing::Size(179, 24);
			this->lblTelefonCim->TabIndex = 0;
			this->lblTelefonCim->Text = L"A telefonáló tippje:";
			// 
			// lblTelefonTipp
			// 
			this->lblTelefonTipp->AutoSize = true;
			this->lblTelefonTipp->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lblTelefonTipp->ForeColor = System::Drawing::SystemColors::Info;
			this->lblTelefonTipp->Location = System::Drawing::Point(59, 188);
			this->lblTelefonTipp->Name = L"lblTelefonTipp";
			this->lblTelefonTipp->Size = System::Drawing::Size(89, 110);
			this->lblTelefonTipp->TabIndex = 0;
			this->lblTelefonTipp->Text = L"T";
			// 
			// panel3
			// 
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel3->Location = System::Drawing::Point(25, 20);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(152, 77);
			this->panel3->TabIndex = 1;
			// 
			// pnlTelefon
			// 
			this->pnlTelefon->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pnlTelefon->Controls->Add(this->lblTelefonTipp);
			this->pnlTelefon->Controls->Add(this->panel3);
			this->pnlTelefon->Controls->Add(this->lblTelefonCim);
			this->pnlTelefon->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnlTelefon->Location = System::Drawing::Point(23, 23);
			this->pnlTelefon->Name = L"pnlTelefon";
			this->pnlTelefon->Size = System::Drawing::Size(193, 464);
			this->pnlTelefon->TabIndex = 7;
			this->pnlTelefon->Visible = false;
			// 
			// pnlKozonseg
			// 
			this->pnlKozonseg->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pnlKozonseg->Controls->Add(this->lblKozD);
			this->pnlKozonseg->Controls->Add(this->lblKozC);
			this->pnlKozonseg->Controls->Add(this->lblKozB);
			this->pnlKozonseg->Controls->Add(this->lblKozA);
			this->pnlKozonseg->Controls->Add(this->panel5);
			this->pnlKozonseg->Controls->Add(this->lblKozonsegCim);
			this->pnlKozonseg->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnlKozonseg->Location = System::Drawing::Point(820, 23);
			this->pnlKozonseg->Name = L"pnlKozonseg";
			this->pnlKozonseg->Size = System::Drawing::Size(194, 464);
			this->pnlKozonseg->TabIndex = 7;
			this->pnlKozonseg->Visible = false;
			// 
			// lblKozD
			// 
			this->lblKozD->AutoSize = true;
			this->lblKozD->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lblKozD->ForeColor = System::Drawing::SystemColors::Info;
			this->lblKozD->Location = System::Drawing::Point(15, 330);
			this->lblKozD->Name = L"lblKozD";
			this->lblKozD->Size = System::Drawing::Size(83, 31);
			this->lblKozD->TabIndex = 0;
			this->lblKozD->Text = L"D: --%";
			this->lblKozD->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblKozC
			// 
			this->lblKozC->AutoSize = true;
			this->lblKozC->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lblKozC->ForeColor = System::Drawing::SystemColors::Info;
			this->lblKozC->Location = System::Drawing::Point(15, 267);
			this->lblKozC->Name = L"lblKozC";
			this->lblKozC->Size = System::Drawing::Size(83, 31);
			this->lblKozC->TabIndex = 0;
			this->lblKozC->Text = L"C: --%";
			this->lblKozC->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblKozB
			// 
			this->lblKozB->AutoSize = true;
			this->lblKozB->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lblKozB->ForeColor = System::Drawing::SystemColors::Info;
			this->lblKozB->Location = System::Drawing::Point(15, 207);
			this->lblKozB->Name = L"lblKozB";
			this->lblKozB->Size = System::Drawing::Size(81, 31);
			this->lblKozB->TabIndex = 0;
			this->lblKozB->Text = L"B: --%";
			this->lblKozB->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblKozA
			// 
			this->lblKozA->AutoSize = true;
			this->lblKozA->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lblKozA->ForeColor = System::Drawing::SystemColors::Info;
			this->lblKozA->Location = System::Drawing::Point(15, 154);
			this->lblKozA->Name = L"lblKozA";
			this->lblKozA->Size = System::Drawing::Size(83, 31);
			this->lblKozA->TabIndex = 0;
			this->lblKozA->Text = L"A: --%";
			this->lblKozA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel5
			// 
			this->panel5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel5.BackgroundImage")));
			this->panel5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel5->Location = System::Drawing::Point(22, 20);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(152, 77);
			this->panel5->TabIndex = 1;
			// 
			// lblKozonsegCim
			// 
			this->lblKozonsegCim->AutoSize = true;
			this->lblKozonsegCim->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lblKozonsegCim->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->lblKozonsegCim->Location = System::Drawing::Point(11, 115);
			this->lblKozonsegCim->Name = L"lblKozonsegCim";
			this->lblKozonsegCim->Size = System::Drawing::Size(173, 24);
			this->lblKozonsegCim->TabIndex = 0;
			this->lblKozonsegCim->Text = L"A közönség szerint:";
			// 
			// tlyMenu
			// 
			this->tlyMenu->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->tlyMenu->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tlyMenu.BackgroundImage")));
			this->tlyMenu->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tlyMenu->ColumnCount = 3;
			this->tlyMenu->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 30)));
			this->tlyMenu->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 40)));
			this->tlyMenu->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 30)));
			this->tlyMenu->Controls->Add(this->pnlMenu, 1, 0);
			this->tlyMenu->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tlyMenu->Location = System::Drawing::Point(0, 0);
			this->tlyMenu->Name = L"tlyMenu";
			this->tlyMenu->RowCount = 1;
			this->tlyMenu->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlyMenu->Size = System::Drawing::Size(1043, 747);
			this->tlyMenu->TabIndex = 9;
			// 
			// pnlMenu
			// 
			this->pnlMenu->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pnlMenu->Controls->Add(this->lblKerdesekSzama);
			this->pnlMenu->Controls->Add(this->panel2);
			this->pnlMenu->Controls->Add(this->btnJatek);
			this->pnlMenu->Controls->Add(this->btnKilepes);
			this->pnlMenu->Controls->Add(this->btnNevjegy);
			this->pnlMenu->Controls->Add(this->btnAdatFeltoltes);
			this->pnlMenu->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnlMenu->Location = System::Drawing::Point(315, 3);
			this->pnlMenu->Name = L"pnlMenu";
			this->pnlMenu->Size = System::Drawing::Size(411, 741);
			this->pnlMenu->TabIndex = 3;
			// 
			// lblKerdesekSzama
			// 
			this->lblKerdesekSzama->AutoSize = true;
			this->lblKerdesekSzama->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lblKerdesekSzama->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->lblKerdesekSzama->Location = System::Drawing::Point(159, 376);
			this->lblKerdesekSzama->Name = L"lblKerdesekSzama";
			this->lblKerdesekSzama->Size = System::Drawing::Size(100, 15);
			this->lblKerdesekSzama->TabIndex = 5;
			this->lblKerdesekSzama->Text = L"0 kérdés betöltve";
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(411, 291);
			this->panel2->TabIndex = 4;
			// 
			// btnJatek
			// 
			this->btnJatek->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnJatek.BackgroundImage")));
			this->btnJatek->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnJatek->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnJatek->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnJatek->ForeColor = System::Drawing::Color::SpringGreen;
			this->btnJatek->Location = System::Drawing::Point(20, 317);
			this->btnJatek->Name = L"btnJatek";
			this->btnJatek->Size = System::Drawing::Size(362, 62);
			this->btnJatek->TabIndex = 3;
			this->btnJatek->Text = L"Játék Indítása";
			this->btnJatek->UseVisualStyleBackColor = true;
			this->btnJatek->Click += gcnew System::EventHandler(this, &MainWindow::btnJatek_Click);
			// 
			// btnKilepes
			// 
			this->btnKilepes->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnKilepes.BackgroundImage")));
			this->btnKilepes->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnKilepes->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnKilepes->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnKilepes->ForeColor = System::Drawing::Color::LightCoral;
			this->btnKilepes->Location = System::Drawing::Point(20, 560);
			this->btnKilepes->Name = L"btnKilepes";
			this->btnKilepes->Size = System::Drawing::Size(362, 51);
			this->btnKilepes->TabIndex = 0;
			this->btnKilepes->Text = L"Kilépés";
			this->btnKilepes->UseVisualStyleBackColor = true;
			this->btnKilepes->Click += gcnew System::EventHandler(this, &MainWindow::btnKilepes_Click);
			// 
			// btnNevjegy
			// 
			this->btnNevjegy->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnNevjegy.BackgroundImage")));
			this->btnNevjegy->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnNevjegy->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnNevjegy->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnNevjegy->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnNevjegy->Location = System::Drawing::Point(103, 475);
			this->btnNevjegy->Name = L"btnNevjegy";
			this->btnNevjegy->Size = System::Drawing::Size(279, 51);
			this->btnNevjegy->TabIndex = 0;
			this->btnNevjegy->Text = L"Névjegy";
			this->btnNevjegy->UseVisualStyleBackColor = true;
			this->btnNevjegy->Click += gcnew System::EventHandler(this, &MainWindow::btnNevjegy_Click);
			// 
			// btnAdatFeltoltes
			// 
			this->btnAdatFeltoltes->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAdatFeltoltes.BackgroundImage")));
			this->btnAdatFeltoltes->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnAdatFeltoltes->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnAdatFeltoltes->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnAdatFeltoltes->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnAdatFeltoltes->Location = System::Drawing::Point(20, 418);
			this->btnAdatFeltoltes->Name = L"btnAdatFeltoltes";
			this->btnAdatFeltoltes->Size = System::Drawing::Size(263, 51);
			this->btnAdatFeltoltes->TabIndex = 0;
			this->btnAdatFeltoltes->Text = L"Kérdéssor betöltése...";
			this->btnAdatFeltoltes->UseVisualStyleBackColor = true;
			this->btnAdatFeltoltes->Click += gcnew System::EventHandler(this, &MainWindow::btnAdatFeltoltes_Click);
			// 
			// tlyJatek
			// 
			this->tlyJatek->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->tlyJatek->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tlyJatek->ColumnCount = 1;
			this->tlyJatek->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlyJatek->Controls->Add(this->tlyPenzSegitseg, 0, 0);
			this->tlyJatek->Controls->Add(this->pnlKerdes, 0, 1);
			this->tlyJatek->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tlyJatek->Location = System::Drawing::Point(0, 0);
			this->tlyJatek->Name = L"tlyJatek";
			this->tlyJatek->RowCount = 2;
			this->tlyJatek->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 75)));
			this->tlyJatek->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tlyJatek->Size = System::Drawing::Size(1043, 747);
			this->tlyJatek->TabIndex = 10;
			this->tlyJatek->Visible = false;
			// 
			// tlyPenzSegitseg
			// 
			this->tlyPenzSegitseg->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tlyPenzSegitseg.BackgroundImage")));
			this->tlyPenzSegitseg->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tlyPenzSegitseg->ColumnCount = 3;
			this->tlyPenzSegitseg->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tlyPenzSegitseg->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				60)));
			this->tlyPenzSegitseg->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tlyPenzSegitseg->Controls->Add(this->pnlPenz, 1, 0);
			this->tlyPenzSegitseg->Controls->Add(this->pnlKozonseg, 2, 0);
			this->tlyPenzSegitseg->Controls->Add(this->pnlTelefon, 0, 0);
			this->tlyPenzSegitseg->Location = System::Drawing::Point(3, 3);
			this->tlyPenzSegitseg->Name = L"tlyPenzSegitseg";
			this->tlyPenzSegitseg->Padding = System::Windows::Forms::Padding(20);
			this->tlyPenzSegitseg->RowCount = 1;
			this->tlyPenzSegitseg->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlyPenzSegitseg->Size = System::Drawing::Size(1037, 510);
			this->tlyPenzSegitseg->TabIndex = 5;
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1043, 747);
			this->Controls->Add(this->tlyMenu);
			this->Controls->Add(this->tlyJatek);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MainWindow";
			this->Text = L"Legyen Ön Is Milliomos!";
			this->Load += gcnew System::EventHandler(this, &MainWindow::MainWindow_Load);
			this->pnlPenz->ResumeLayout(false);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->pnlKerdes->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->pnlTelefon->ResumeLayout(false);
			this->pnlTelefon->PerformLayout();
			this->pnlKozonseg->ResumeLayout(false);
			this->pnlKozonseg->PerformLayout();
			this->tlyMenu->ResumeLayout(false);
			this->pnlMenu->ResumeLayout(false);
			this->pnlMenu->PerformLayout();
			this->tlyJatek->ResumeLayout(false);
			this->tlyPenzSegitseg->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnAdatFeltoltes_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ filePath;
		if (ofdKerdesBetoltes->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			filePath = ofdKerdesBetoltes->FileName;

				AdatFeldolgozas::AdatokBetoltese(msclr::interop::marshal_as<std::string>(filePath));
				lblKerdesekSzama->Text = gcnew String(AdatFeldolgozas::getKerdesekSzama().ToString()) + " kérdés betöltve.";
		}

	}

	private: Jatek *jatek;


	private: System::Void btnKilepes_Click(System::Object^  sender, System::EventArgs^  e) {
		exit(0);
	}
	private: System::Void MainWindow_Load(System::Object^  sender, System::EventArgs^  e) {
		lblKerdesekSzama->Text = gcnew String(AdatFeldolgozas::getKerdesekSzama().ToString()) + " kérdés betöltve.";
	}
	private: System::Void btnJatek_Click(System::Object^  sender, System::EventArgs^  e) {
		if (AdatFeldolgozas::getKerdesekSzama() > 0) {

			// Ha van betöltve helyes kérdéssor, új játék objektum kerül létrehozásra

			jatek = new Jatek(AdatFeldolgozas::getKerdesek());
			
			btnFelezes->Text = "";
			btnKozonseg->Text = "";
			btnTelefon->Text = "";

			jatek->ujJatek();

			mainMenu(false);

			if (lstPenz->Items->Count == 0) {
				for (int i = 0; i < jatek->getKorokSzama(); i++) {
					lstPenz->Items->Add(jatek->getPenz()[i] + " Ft");
				}
			}
			
			ujKerdes();

		}
		else {
			MessageBox::Show("Nincs kérdéssor betöltve! A játék nem indítható.", "Hiba", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}
	private: void mainMenu(bool menu) {
		if (menu) {
			tlyMenu->Visible = true;
			tlyJatek->Visible = false;
		}
		else {
			tlyMenu->Visible = false;
			tlyJatek->Visible = true;
		}
		
	}
	private: void ujKerdes() {
		// Új kérdés objektum generálása
		Kerdes aktKerdes = jatek->KerdesGeneralas();

		// Grafikai elemek megkapják a megfelelõ Text értéket

		lblKerdes->Text = gcnew String(aktKerdes.getKerdes().c_str());
		btnA->Text = gcnew String(("A: " + aktKerdes.getA()).c_str());
		btnB->Text = gcnew String(("B: " + aktKerdes.getB()).c_str());
		btnC->Text = gcnew String(("C: " + aktKerdes.getC()).c_str());
		btnD->Text = gcnew String(("D: " + aktKerdes.getD()).c_str());
		lblKor->Text = gcnew String((jatek->getKor().ToString() + "/" + jatek->getKorokSzama().ToString() + ".kör"));
		lblKategoria->Text = gcnew String(("Kategória: " + aktKerdes.getKategoria()).c_str());

		// Pénzértékeket tartalmazó listbox megkapja az elemeit

		lstPenz->SetSelected(jatek->getKor() - 1, true);

		aktKerdes.~Kerdes();
	}
	private: void ellenorzes(std::string adottValasz) {

		if (strcmp(jatek->getAktKerdes().getValasz().c_str(), adottValasz.c_str()) == 0) {
			MessageBox::Show("A válasz helyes!", "Helyes válasz!", MessageBoxButtons::OK, MessageBoxIcon::Information);
			jatek->kovetkezoKor();
			jatek->garantaltNyeremeny();
			if (jatek->getKor() != jatek->getKorokSzama() + 1) {
				ujKerdes();
			}
			else {
				MessageBox::Show("Gratulálunk, nyert!", "Fõnyeremény", MessageBoxButtons::OK, MessageBoxIcon::Information);
				jatekVege(false);
			}
		}
		else {
			MessageBox::Show(gcnew String(("A válasz helytelen!\nHelyes válasz: " + jatek->getAktKerdes().getValasz()).c_str()), "Rossz válasz", MessageBoxButtons::OK, MessageBoxIcon::Error);

			jatekVege(false);
		}
		// Ha a telefonos vagy a közönség segítsége panel látható, ellenõrzés során eltûnik

		if (pnlTelefon->Visible) pnlTelefon->Visible = false;
		if (pnlKozonseg->Visible) pnlKozonseg->Visible = false;

		// Ha a felezés során a gombok láthatósága hamis értéket kapott, ellenõrzés után újra megjelenik

		if (btnA->Visible == false) btnA->Visible = true;
		if (btnB->Visible == false) btnB->Visible = true;
		if (btnC->Visible == false) btnC->Visible = true;
		if (btnD->Visible == false) btnD->Visible = true;
	}

	private: void felezes() {
		srand(time(0));

		int toroltLehetoseg = 0;
		int veletlenSzam;
		/*
			Felezés során két lehetõséget kell eltávolítani, melyek nem tartalmazzák a helyes választ
			Ha a vizsgált gomb Text tulajdonsága nem tartalmazza a helyes válasz betûjelét, a törölt 
			lehetõsgek száma eggyel nõ, a gomb pedig eltûnik.
			Ha eléri a kettõt, kilép a ciklusból.
		*/
		while (toroltLehetoseg < 2) {
			veletlenSzam = rand() % 4 + 1;
			if (veletlenSzam == 1) {
				if (msclr::interop::marshal_as<std::string>(btnA->Text).find(jatek->getAktKerdes().getValasz() + ": ") == std::string::npos) {
					if (btnA->Visible == true) {
						btnA->Visible = false;
						toroltLehetoseg++;
					}
				}
			}
			if (veletlenSzam == 2) {
				if (msclr::interop::marshal_as<std::string>(btnB->Text).find(jatek->getAktKerdes().getValasz() + ": ") == std::string::npos) {
					if (btnB->Visible == true) {
						btnB->Visible = false;
						toroltLehetoseg++;
					}
				}
			}
			if (veletlenSzam == 3) {
				if (msclr::interop::marshal_as<std::string>(btnC->Text).find(jatek->getAktKerdes().getValasz() + ": ") == std::string::npos) {
					if (btnC->Visible == true) {
						btnC->Visible = false;
						toroltLehetoseg++;
					}
				}
			}
			if (veletlenSzam == 4) {
				if (msclr::interop::marshal_as<std::string>(btnD->Text).find(jatek->getAktKerdes().getValasz() + ": ") == std::string::npos) {
					if (btnD->Visible == true) {
						btnD->Visible = false;
						toroltLehetoseg++;
					}
				}
			}
		}
	}
	private: void telefon() {
		srand(time(0));
		/*
			A telefonos segítség 80 %-ban eltalálja a helyes választ.
			Ha a véletlenszerûen generált szám < 20, akkor véletlenszerû betûjelet generál a progrm, nem
			feltétlenül a helyes választ.
		*/
		int helyesValaszEsely = rand() % 100 + 1;

		if (helyesValaszEsely >= 20 ) {
			lblTelefonTipp->Text = gcnew String(jatek->getAktKerdes().getValasz().c_str());
		}
		else {
			char veletlenValasz[1];
			sprintf(veletlenValasz, "%c", (rand() % (68 - 65 + 1) + 65));
			lblTelefonTipp->Text = gcnew String(veletlenValasz);
		}
		pnlTelefon->Visible = true;
	}
	

	private: void kozonseg() {
		srand(time(0));
		/*
			Közönség segítsége során 4 véletlen számot generál, úgy, hogy az összegük 100-at adjon.
			Ezek közül a legnagyobb fog a helyes válasz betûjele mellé kerülni. 
		*/
		double veletlenSzamok[4] = { rand() % 100 + 1, rand() % 100 + 1, rand() % 100 + 1, rand() % 100 + 1 };

		double sum = AdatFeldolgozas::tombOsszeg(veletlenSzamok);

		veletlenSzamok[0] = AdatFeldolgozas::kerekites((veletlenSzamok[0] / sum) * 100.0);
		veletlenSzamok[1] = AdatFeldolgozas::kerekites((veletlenSzamok[1] / sum) * 100.0);
		veletlenSzamok[2] = AdatFeldolgozas::kerekites((veletlenSzamok[2] / sum) * 100.0);
		veletlenSzamok[3] = AdatFeldolgozas::kerekites((veletlenSzamok[3] / sum) * 100.0);

		std::sort(veletlenSzamok, veletlenSzamok + 4);
		
		if (jatek->getAktKerdes().getValasz() == "A") {
			lblKozA->Text = "A: " + veletlenSzamok[3].ToString() + "%";
			lblKozB->Text = "B: " + veletlenSzamok[0].ToString() + "%";
			lblKozC->Text = "C: " + veletlenSzamok[1].ToString() + "%";
			lblKozD->Text = "D: " + veletlenSzamok[2].ToString() + "%";
		}
		else if (jatek->getAktKerdes().getValasz() == "B") {
			lblKozA->Text = "A: " + veletlenSzamok[0].ToString() + "%";
			lblKozB->Text = "B: " + veletlenSzamok[3].ToString() + "%";
			lblKozC->Text = "C: " + veletlenSzamok[1].ToString() + "%";
			lblKozD->Text = "D: " + veletlenSzamok[2].ToString() + "%";
		}
		else if (jatek->getAktKerdes().getValasz() == "C") {
			lblKozA->Text = "A: " + veletlenSzamok[0].ToString() + "%";
			lblKozB->Text = "B: " + veletlenSzamok[1].ToString() + "%";
			lblKozC->Text = "C: " + veletlenSzamok[3].ToString() + "%";
			lblKozD->Text = "D: " + veletlenSzamok[2].ToString() + "%";
		}
		else if (jatek->getAktKerdes().getValasz() == "D") {
			lblKozA->Text = "A: " + veletlenSzamok[0].ToString() + "%";
			lblKozB->Text = "B: " + veletlenSzamok[1].ToString() + "%";
			lblKozC->Text = "C: " + veletlenSzamok[2].ToString() + "%";
			lblKozD->Text = "D: " + veletlenSzamok[3].ToString() + "%";
		}
		pnlKozonseg->Visible = true;
	}
	private: void jatekVege(bool megallt) {
		MessageBox::Show("Játék vége!\nNyeremény: " + jatek->getNyeremeny(megallt) + " Ft", "Játék vége", MessageBoxButtons::OK, MessageBoxIcon::Information);
		jatek->~Jatek();
		mainMenu(true);
	}

private: System::Void btnA_Click(System::Object^  sender, System::EventArgs^  e) {
	ellenorzes("A");
}
private: System::Void btnB_Click(System::Object^  sender, System::EventArgs^  e) {
	ellenorzes("B");
}
private: System::Void btnC_Click(System::Object^  sender, System::EventArgs^  e) {
	ellenorzes("C");
}
private: System::Void btnD_Click(System::Object^  sender, System::EventArgs^  e) {
	ellenorzes("D");
}
private: System::Void btnFelezes_Click(System::Object^  sender, System::EventArgs^  e) {
	if (btnFelezes->Text != "X") {
		felezes();
		btnFelezes->Text = "X";
	}
	else {
		MessageBox::Show("A felezés már felhasználásra került!", "Felhasználva!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void btnTelefon_Click(System::Object^  sender, System::EventArgs^  e) {
	if (btnTelefon->Text != "X") {
		telefon();
		btnTelefon->Text = "X";
	}
	else {
		MessageBox::Show("A telefonos segítség már felhasználásra került!", "Felhasználva!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void btnKozonseg_Click(System::Object^  sender, System::EventArgs^  e) {
	if (btnKozonseg->Text != "X") {
		kozonseg();
		btnKozonseg->Text = "X";
	}
	else {
		MessageBox::Show("A közönség segítsége már felhasználásra került!", "Felhasználva!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void btnMegall_Click(System::Object^  sender, System::EventArgs^  e) {
	jatekVege(true);
}
private: System::Void btnNevjegy_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Legyen Ön Is Milliomos\nC++ programozási feladat\nKészítette: Szalai Bence Zoltán", "Névjegy", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
};
}
