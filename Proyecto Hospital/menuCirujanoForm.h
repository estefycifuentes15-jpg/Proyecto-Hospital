#pragma once
#include "CitasCForm.h"
#include "ReservaPersonalForm.h"
#include "ReservaEquipoForm.h"

namespace ProyectoHospital {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de menuCirujanoForm
	/// </summary>
	public ref class menuCirujanoForm : public System::Windows::Forms::Form
	{
	public:
		menuCirujanoForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~menuCirujanoForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ citasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ quirofanoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ equipoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(menuCirujanoForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->citasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->quirofanoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->equipoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->citasToolStripMenuItem,
					this->quirofanoToolStripMenuItem, this->equipoToolStripMenuItem, this->salirToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(715, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// citasToolStripMenuItem
			// 
			this->citasToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"citasToolStripMenuItem.Image")));
			this->citasToolStripMenuItem->Name = L"citasToolStripMenuItem";
			this->citasToolStripMenuItem->Size = System::Drawing::Size(82, 24);
			this->citasToolStripMenuItem->Text = L"citasC";
			this->citasToolStripMenuItem->Click += gcnew System::EventHandler(this, &menuCirujanoForm::citasToolStripMenuItem_Click);
			// 
			// quirofanoToolStripMenuItem
			// 
			this->quirofanoToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"quirofanoToolStripMenuItem.Image")));
			this->quirofanoToolStripMenuItem->Name = L"quirofanoToolStripMenuItem";
			this->quirofanoToolStripMenuItem->Size = System::Drawing::Size(110, 24);
			this->quirofanoToolStripMenuItem->Text = L"\tQuirofano";
			this->quirofanoToolStripMenuItem->Click += gcnew System::EventHandler(this, &menuCirujanoForm::quirofanoToolStripMenuItem_Click);
			// 
			// equipoToolStripMenuItem
			// 
			this->equipoToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"equipoToolStripMenuItem.Image")));
			this->equipoToolStripMenuItem->Name = L"equipoToolStripMenuItem";
			this->equipoToolStripMenuItem->Size = System::Drawing::Size(90, 24);
			this->equipoToolStripMenuItem->Text = L"Equipo";
			this->equipoToolStripMenuItem->Click += gcnew System::EventHandler(this, &menuCirujanoForm::equipoToolStripMenuItem_Click);
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"salirToolStripMenuItem.Image")));
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(72, 24);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &menuCirujanoForm::salirToolStripMenuItem_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 44);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(122, 107);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(12, 169);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(143, 18);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Médico Cirujano";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 187);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(151, 18);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Dr. Jair Sanguano";
			// 
			// menuCirujanoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(715, 417);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"menuCirujanoForm";
			this->Text = L"menuCirujanoForm";
			this->Load += gcnew System::EventHandler(this, &menuCirujanoForm::menuCirujanoForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void menuCirujanoForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void citasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		CitasCForm^ f = gcnew CitasCForm();
		this->Hide();
		f->ShowDialog();
		this->Show();
	}

private: System::Void quirofanoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		ReservaPersonalForm^ f = gcnew ReservaPersonalForm();
		this->Hide();
		f->ShowDialog();
		this->Show();
	}

private: System::Void equipoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		ReservaEquipoForm^ f = gcnew ReservaEquipoForm();
		this->Hide();
		f->ShowDialog();
		this->Show();
	}

private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		// Cerrar este formulario para volver al login
		this->Close();
	}
	};
}
