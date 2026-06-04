#pragma once
#include "ReservaEquipoForm.h"

namespace ProyectoHospital {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ReservaPersonalForm
	/// </summary>
	public ref class ReservaPersonalForm : public System::Windows::Forms::Form
	{
	public:
		ReservaPersonalForm(void)
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
		~ReservaPersonalForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ Siguiente;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ReservaPersonalForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Siguiente = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(164, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(274, 22);
			this->label1->TabIndex = 5;
			this->label1->Text = L"SERVICIOS DE QUIROFANO";
			// 
			// Siguiente
			// 
			this->Siguiente->BackColor = System::Drawing::Color::SlateGray;
			this->Siguiente->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Siguiente->Location = System::Drawing::Point(529, 364);
			this->Siguiente->Name = L"Siguiente";
			this->Siguiente->Size = System::Drawing::Size(147, 28);
			this->Siguiente->TabIndex = 26;
			this->Siguiente->Text = L"Reservar y Continuar";
			this->Siguiente->UseVisualStyleBackColor = false;
			this->Siguiente->Click += gcnew System::EventHandler(this, &ReservaPersonalForm::Siguiente_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(30, 27);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(104, 94);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 27;
			this->pictureBox1->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 134);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(176, 18);
			this->label4->TabIndex = 28;
			this->label4->Text = L"Responsable a Cargo";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(27, 165);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(69, 18);
			this->label7->TabIndex = 29;
			this->label7->Text = L"Doctor:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(30, 186);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(168, 22);
			this->textBox1->TabIndex = 30;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(27, 241);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(37, 18);
			this->label8->TabIndex = 31;
			this->label8->Text = L"CL:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(30, 262);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(168, 22);
			this->textBox2->TabIndex = 32;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(225, 69);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(167, 18);
			this->label3->TabIndex = 33;
			this->label3->Text = L"Personal disponible";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(226, 103);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(52, 18);
			this->label5->TabIndex = 34;
			this->label5->Text = L"Área:";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(228, 124);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(427, 59);
			this->richTextBox2->TabIndex = 35;
			this->richTextBox2->Text = L"";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(226, 199);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(404, 18);
			this->label6->TabIndex = 36;
			this->label6->Text = L"Describir la Especialidad y cantidad de personal:";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(229, 220);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(427, 59);
			this->richTextBox1->TabIndex = 37;
			this->richTextBox1->Text = L"";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(226, 291);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(53, 18);
			this->label9->TabIndex = 38;
			this->label9->Text = L"Hora:";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Controls->Add(this->checkBox1);
			this->panel2->Controls->Add(this->checkBox2);
			this->panel2->Controls->Add(this->checkBox3);
			this->panel2->Location = System::Drawing::Point(229, 312);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(127, 80);
			this->panel2->TabIndex = 39;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(14, 5);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(98, 20);
			this->checkBox1->TabIndex = 21;
			this->checkBox1->Text = L"07:00_10:00";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(14, 31);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(98, 20);
			this->checkBox2->TabIndex = 22;
			this->checkBox2->Text = L"15:00_18:00";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(14, 57);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(98, 20);
			this->checkBox3->TabIndex = 23;
			this->checkBox3->Text = L"19:00_23:00";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// ReservaPersonalForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(688, 404);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->Siguiente);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"ReservaPersonalForm";
			this->Text = L"ReservaPersonalForm";
			this->Load += gcnew System::EventHandler(this, &ReservaPersonalForm::ReservaPersonalForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Siguiente_Click(System::Object^ sender, System::EventArgs^ e) {
		ReservaEquipoForm^ f = gcnew ReservaEquipoForm();
		this->Hide();
		System::Windows::Forms::DialogResult res = f->ShowDialog();
		if (res == System::Windows::Forms::DialogResult::OK) {
			// Propagar resultado hacia arriba y cerrar este formulario
			this->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->Close();
		} else {
			this->Show();
		}
	}
	private: System::Void ReservaPersonalForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};

}
