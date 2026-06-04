#pragma once
#include "ConfirmacionForm.h"

namespace ProyectoHospital {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de TurnoForm
	/// </summary>
	public ref class TurnoForm : public System::Windows::Forms::Form
	{
	public:
		TurnoForm(void)
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
		~TurnoForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ Siguiente;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::CheckBox^ checkBox6;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TurnoForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Siguiente = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(189, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(173, 22);
			this->label1->TabIndex = 6;
			this->label1->Text = L"GENERAR TURNO";
			// 
			// Siguiente
			// 
			this->Siguiente->BackColor = System::Drawing::Color::SlateGray;
			this->Siguiente->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Siguiente->Location = System::Drawing::Point(500, 361);
			this->Siguiente->Name = L"Siguiente";
			this->Siguiente->Size = System::Drawing::Size(147, 28);
			this->Siguiente->TabIndex = 27;
			this->Siguiente->Text = L"Generar turno";
			this->Siguiente->UseVisualStyleBackColor = false;
			this->Siguiente->Click += gcnew System::EventHandler(this, &TurnoForm::Siguiente_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(38, 66);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(307, 18);
			this->label3->TabIndex = 28;
			this->label3->Text = L"Llene los datos para generar su turno";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(38, 108);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(172, 18);
			this->label5->TabIndex = 29;
			this->label5->Text = L"Nombres completos:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(41, 141);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(365, 22);
			this->textBox1->TabIndex = 30;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(38, 175);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(92, 18);
			this->label4->TabIndex = 31;
			this->label4->Text = L"Apellidos:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(41, 196);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(365, 22);
			this->textBox2->TabIndex = 32;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(38, 236);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 18);
			this->label2->TabIndex = 33;
			this->label2->Text = L"Área:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(41, 257);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(365, 22);
			this->textBox3->TabIndex = 34;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(38, 300);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(53, 18);
			this->label6->TabIndex = 35;
			this->label6->Text = L"Hora:";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Controls->Add(this->checkBox4);
			this->panel2->Controls->Add(this->checkBox5);
			this->panel2->Controls->Add(this->checkBox6);
			this->panel2->Location = System::Drawing::Point(97, 300);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(127, 80);
			this->panel2->TabIndex = 36;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(14, 5);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(98, 20);
			this->checkBox4->TabIndex = 21;
			this->checkBox4->Text = L"07:00_10:00";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(14, 31);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(98, 20);
			this->checkBox5->TabIndex = 22;
			this->checkBox5->Text = L"13:00_18:00";
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Location = System::Drawing::Point(14, 57);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(98, 20);
			this->checkBox6->TabIndex = 23;
			this->checkBox6->Text = L"19:00_21:00";
			this->checkBox6->UseVisualStyleBackColor = true;
			// 
			// TurnoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(659, 401);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Siguiente);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"TurnoForm";
			this->Text = L"TurnoForm";
			this->Load += gcnew System::EventHandler(this, &TurnoForm::TurnoForm_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Siguiente_Click(System::Object^ sender, System::EventArgs^ e) {
		// Al generar turno, abrir la pantalla de Confirmación
		ConfirmacionForm^ f = gcnew ConfirmacionForm();
		this->Hide();
		f->ShowDialog();
		this->Show();
	}
	private: System::Void TurnoForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
