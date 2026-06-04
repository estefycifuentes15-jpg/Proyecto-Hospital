#pragma once

namespace ProyectoHospital {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ConfirmacionForm
	/// </summary>
	public ref class ConfirmacionForm : public System::Windows::Forms::Form
	{
	public:
		ConfirmacionForm(void)
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
		~ConfirmacionForm()
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
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ConfirmacionForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Siguiente = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(241, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(162, 22);
			this->label1->TabIndex = 7;
			this->label1->Text = L"CONFIRMACIÓN";
			// 
			// Siguiente
			// 
			this->Siguiente->BackColor = System::Drawing::Color::SlateGray;
			this->Siguiente->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Siguiente->Location = System::Drawing::Point(516, 380);
			this->Siguiente->Name = L"Siguiente";
			this->Siguiente->Size = System::Drawing::Size(147, 28);
			this->Siguiente->TabIndex = 28;
			this->Siguiente->Text = L"Confirmar y Salir";
			this->Siguiente->UseVisualStyleBackColor = false;
			this->Siguiente->Click += gcnew System::EventHandler(this, &ConfirmacionForm::Siguiente_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(52, 52);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(299, 18);
			this->label3->TabIndex = 29;
			this->label3->Text = L"Corfirmar si los Datos son correctos";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(96, 120);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(365, 22);
			this->textBox4->TabIndex = 30;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(52, 99);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(77, 18);
			this->label5->TabIndex = 31;
			this->label5->Text = L"Nombre:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(52, 164);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 18);
			this->label4->TabIndex = 32;
			this->label4->Text = L"Cedula:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(96, 185);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(365, 22);
			this->textBox3->TabIndex = 33;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(60, 229);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 18);
			this->label2->TabIndex = 34;
			this->label2->Text = L"Área:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(96, 260);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(365, 22);
			this->textBox2->TabIndex = 35;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(52, 294);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(53, 18);
			this->label6->TabIndex = 36;
			this->label6->Text = L"Hora:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(96, 324);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(365, 22);
			this->textBox1->TabIndex = 37;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(60, 362);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(62, 18);
			this->label7->TabIndex = 38;
			this->label7->Text = L"Turno:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(141, 374);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(120, 31);
			this->label8->TabIndex = 39;
			this->label8->Text = L"320_LA";
			// 
			// ConfirmacionForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(675, 420);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Siguiente);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"ConfirmacionForm";
			this->Text = L"ConfirmacionForm";
			this->Load += gcnew System::EventHandler(this, &ConfirmacionForm::ConfirmacionForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Siguiente_Click(System::Object^ sender, System::EventArgs^ e) {
		// Mostrar el menuPaciente si está abierto y cerrar formularios intermedios
		for each (System::Windows::Forms::Form^ frm in System::Windows::Forms::Application::OpenForms) {
			if (frm != nullptr && frm->Name == L"menuPacienteForm") {
				frm->Show();
			}
		}
		// Cerrar posibles formularios intermedios (TurnoForm, RegistroForm)
		for each (System::Windows::Forms::Form^ frm in System::Windows::Forms::Application::OpenForms) {
			if (frm != nullptr) {
				if (frm->Name == L"TurnoForm" || frm->Name == L"RegistroForm") {
					frm->Close();
				}
			}
		}
		// Cerrar este formulario
		this->Close();
	}
	private: System::Void ConfirmacionForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
