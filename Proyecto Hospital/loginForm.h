#pragma once
#include "menuCirujanoForm.h"
#include "menuMedicoGForm.h"
#include "menuPacienteForm.h"
#include "Usuario.h"
#include <msclr/marshal_cppstd.h>

namespace ProyectoHospital {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	/// <summary>
	/// Resumen de loginForm
	/// </summary>
	public ref class loginForm : public System::Windows::Forms::Form
	{
	public:
		loginForm(void)
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
		~loginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ Siguiente;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(loginForm::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Siguiente = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->Siguiente);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(146, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(353, 400);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::AliceBlue;
			this->button2->Location = System::Drawing::Point(9, 366);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(65, 28);
			this->button2->TabIndex = 37;
			this->button2->Text = L"Átras";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &loginForm::button2_Click);
			// 
			// Siguiente
			// 
			this->Siguiente->BackColor = System::Drawing::Color::SlateGray;
			this->Siguiente->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Siguiente->Location = System::Drawing::Point(248, 366);
			this->Siguiente->Name = L"Siguiente";
			this->Siguiente->Size = System::Drawing::Size(90, 28);
			this->Siguiente->TabIndex = 24;
			this->Siguiente->Text = L"Ingresar";
			this->Siguiente->UseVisualStyleBackColor = false;
			this->Siguiente->Click += gcnew System::EventHandler(this, &loginForm::Siguiente_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(45, 274);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(269, 22);
			this->textBox2->TabIndex = 12;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(45, 162);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(269, 22);
			this->textBox1->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(20, 243);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(104, 18);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Contraseña:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(20, 130);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(82, 18);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Usuario :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(-99, 336);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(548, 18);
			this->label4->TabIndex = 8;
			this->label4->Text = L"______________________________________________________";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(6, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(548, 18);
			this->label2->TabIndex = 7;
			this->label2->Text = L"______________________________________________________";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(6, 76);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(263, 18);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Ingrese su usuario y contraseña";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(50, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(247, 22);
			this->label1->TabIndex = 5;
			this->label1->Text = L"SISTEMA HOSPITALARIO";
			// 
			// loginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(673, 439);
			this->Controls->Add(this->groupBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"loginForm";
			this->Text = L"loginForm";
			this->Load += gcnew System::EventHandler(this, &loginForm::loginForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void loginForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void Siguiente_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string enteredEmail = marshal_as<std::string>(this->textBox1->Text);
		std::string enteredPass = marshal_as<std::string>(this->textBox2->Text);

		Usuario usuarios[3] = {
			Usuario("Carlos ", "Carlos", "1234", "MedicoG"),
			Usuario("Jair ", "Jair", "5678", "Cirujano"),
			Usuario("Pamela ", "Pamela", "9123", "Paciente")
		};

		// Buscar por email
		int idx = -1;
		for (int i = 0; i < 3; i++) {
			if (usuarios[i].getEmail() == enteredEmail) { idx = i; break; }
		}
		if (idx == -1) { MessageBox::Show("Usuario incorrecto.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error); return; }
		if (!usuarios[idx].verificarUsuario(enteredEmail, enteredPass)) { MessageBox::Show("Contraseña incorrecta.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error); return; }

		// Credenciales válidas
		System::String^ nombre = marshal_as<System::String^>(usuarios[idx].getNombre());
		MessageBox::Show("HOLA " + nombre, "Bienvenido", MessageBoxButtons::OK, MessageBoxIcon::Information);

		std::string perfil = usuarios[idx].getPerfil();
		this->Hide();
		if (perfil == "MedicoG") { menuMedicoGForm^ f = gcnew menuMedicoGForm(); f->ShowDialog(); }
		else if (perfil == "Cirujano") { menuCirujanoForm^ f = gcnew menuCirujanoForm(); f->ShowDialog(); }
		else if (perfil == "Paciente") { menuPacienteForm^ f = gcnew menuPacienteForm(); f->ShowDialog(); }
		this->Show();
	}
	};
}