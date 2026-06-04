#pragma once
#include "RegistroForm.h"
#include "ConfirmacionForm.h"
#include "TurnoForm.h"

namespace ProyectoHospital {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de menuPacienteForm
	/// </summary>
	public ref class menuPacienteForm : public System::Windows::Forms::Form
	{
	public:
		menuPacienteForm(void)
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
		~menuPacienteForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ registroToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ turnoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ confirmaciónToolStripMenuItem;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(menuPacienteForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->registroToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->turnoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->confirmaciónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
				this->registroToolStripMenuItem,
					this->turnoToolStripMenuItem, this->confirmaciónToolStripMenuItem, this->salirToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(707, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// registroToolStripMenuItem
			// 
			this->registroToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"registroToolStripMenuItem.Image")));
			this->registroToolStripMenuItem->Name = L"registroToolStripMenuItem";
			this->registroToolStripMenuItem->Size = System::Drawing::Size(98, 24);
			this->registroToolStripMenuItem->Text = L"Registro";
			this->registroToolStripMenuItem->Click += gcnew System::EventHandler(this, &menuPacienteForm::registroToolStripMenuItem_Click);
			// 
			// turnoToolStripMenuItem
			// 
			this->turnoToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"turnoToolStripMenuItem.Image")));
			this->turnoToolStripMenuItem->Name = L"turnoToolStripMenuItem";
			this->turnoToolStripMenuItem->Size = System::Drawing::Size(81, 24);
			this->turnoToolStripMenuItem->Text = L"Turno";
			this->turnoToolStripMenuItem->Click += gcnew System::EventHandler(this, &menuPacienteForm::turnoToolStripMenuItem_Click);
			// 
			// confirmaciónToolStripMenuItem
			// 
			this->confirmaciónToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"confirmaciónToolStripMenuItem.Image")));
			this->confirmaciónToolStripMenuItem->Name = L"confirmaciónToolStripMenuItem";
			this->confirmaciónToolStripMenuItem->Size = System::Drawing::Size(132, 24);
			this->confirmaciónToolStripMenuItem->Text = L"Confirmación";
			this->confirmaciónToolStripMenuItem->Click += gcnew System::EventHandler(this, &menuPacienteForm::confirmaciónToolStripMenuItem_Click);
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"salirToolStripMenuItem.Image")));
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(72, 24);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &menuPacienteForm::salirToolStripMenuItem_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 44);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(112, 105);
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
			this->label5->Location = System::Drawing::Point(12, 170);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(76, 18);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Paciente";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 188);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(137, 18);
			this->label4->TabIndex = 11;
			this->label4->Text = L"P. Pamela Lucas";
			// 
			// menuPacienteForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(707, 407);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"menuPacienteForm";
			this->Text = L"menuPacienteForm";
			this->Load += gcnew System::EventHandler(this, &menuPacienteForm::menuPacienteForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void menuPacienteForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void registroToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		RegistroForm^ f = gcnew RegistroForm();
		this->Hide();
		f->ShowDialog();
		this->Show();
	}

private: System::Void turnoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		// Abrir pantalla de Turno
		TurnoForm^ f = gcnew TurnoForm();
		this->Hide();
		f->ShowDialog();
		this->Show();
	}

private: System::Void confirmaciónToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		// Abrir pantalla de Confirmación
		ConfirmacionForm^ f = gcnew ConfirmacionForm();
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
