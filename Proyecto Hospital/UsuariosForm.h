#pragma once

namespace ProyectoHospital {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de UsuariosForm
	/// </summary>
	public ref class UsuariosForm : public System::Windows::Forms::Form
	{
	public:
		UsuariosForm(void)
		{
			InitializeComponent();
			LoadSampleData();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~UsuariosForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:

		System::Windows::Forms::TextBox^ txtCL;
		System::Windows::Forms::Button^ btnBuscar;
		System::Windows::Forms::DataGridView^ dgvUsuarios;
		System::Windows::Forms::ComboBox^ cmbRol;
		System::Windows::Forms::Button^ btnRegistrar;
		System::Windows::Forms::Button^ btnCancelar;
		System::Windows::Forms::Button^ btnAceptar;
		System::Windows::Forms::TextBox^ txtAuthPass;
		System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
		   System::Data::DataTable^ usuariosTable;
		   bool actionFormattingAttached;

		void LoadSampleData()
		{
			usuariosTable = gcnew System::Data::DataTable();
			usuariosTable->Columns->Add("CL", System::String::typeid);
			usuariosTable->Columns->Add("Nombre", System::String::typeid);
			usuariosTable->Columns->Add("Rol", System::String::typeid);
			usuariosTable->Columns->Add("Bloqueado", System::Boolean::typeid);

			// Inicio sin datos: se mostrarán sólo los usuarios registrados mediante el formulario
			BindData();
		}

		void BindData()
		{
			// Asegurar que las columnas se generan a partir del DataTable
			dgvUsuarios->AutoGenerateColumns = true;
			dgvUsuarios->DataSource = usuariosTable->DefaultView;
			// Añadir columna de acción si no está presente
			AddActionColumn();
			// Si la columna 'Bloqueado' se creó como CheckBox (tipo Boolean), reemplazarla por una columna de texto
			if (this->dgvUsuarios->Columns->Contains("Bloqueado")) {
				System::Windows::Forms::DataGridViewColumn^ oldCol = this->dgvUsuarios->Columns["Bloqueado"];
				// Si la columna subyacente no acepta texto directamente, reemplazarla
				if (oldCol->GetType() != System::Windows::Forms::DataGridViewTextBoxColumn::typeid) {
					int idx = oldCol->Index;
					this->dgvUsuarios->Columns->Remove(oldCol);
					System::Windows::Forms::DataGridViewTextBoxColumn^ txtCol = gcnew System::Windows::Forms::DataGridViewTextBoxColumn();
					txtCol->Name = "Bloqueado";
					txtCol->HeaderText = "Bloqueado";
					txtCol->DataPropertyName = "Bloqueado";
					txtCol->ValueType = System::String::typeid;
					this->dgvUsuarios->Columns->Insert(idx, txtCol);
				}
			}

			// Configurar lectura: todas las columnas de datos solo lectura, la columna Accion editable
			for each (System::Windows::Forms::DataGridViewColumn^ col in this->dgvUsuarios->Columns)
			{
				if (col->Name == "Accion") { col->ReadOnly = false; }
				else { col->ReadOnly = true; }
			}
		}

		void SearchByCL(System::String^ cl)
		{
			if (String::IsNullOrWhiteSpace(cl)) {
				usuariosTable->DefaultView->RowFilter = String::Empty;
				return;
			}
			// Filtrar por CL que contenga el texto
			System::String^ filter = "CL LIKE '%" + cl->Replace("'", "''") + "%'";
			usuariosTable->DefaultView->RowFilter = filter;
		}

		void ToggleBloqueoAtRow(int rowIndex)
		{
			if (rowIndex < 0 || rowIndex >= usuariosTable->Rows->Count) return;
			System::Data::DataRow^ row = usuariosTable->Rows[rowIndex];
			bool bloqueado = safe_cast<bool>(row["Bloqueado"]);
			row["Bloqueado"] = !bloqueado;
			// refrescar vista
			usuariosTable->AcceptChanges();
			BindData();
		}

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
			this->txtCL = (gcnew System::Windows::Forms::TextBox());
			this->btnBuscar = (gcnew System::Windows::Forms::Button());
			this->dgvUsuarios = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->cmbRol = (gcnew System::Windows::Forms::ComboBox());
			this->btnCancelar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvUsuarios))->BeginInit();
			this->SuspendLayout();
			// 
			// txtCL
			// 
			this->txtCL->Location = System::Drawing::Point(126, 337);
			this->txtCL->Name = L"txtCL";
			this->txtCL->Size = System::Drawing::Size(200, 22);
			this->txtCL->TabIndex = 1;
			this->txtCL->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &UsuariosForm::txtCL_KeyDown);
			// 
			// btnBuscar
			// 
			this->btnBuscar->Location = System::Drawing::Point(339, 337);
			this->btnBuscar->Name = L"btnBuscar";
			this->btnBuscar->Size = System::Drawing::Size(75, 22);
			this->btnBuscar->TabIndex = 2;
			this->btnBuscar->Text = L"Buscar";
			this->btnBuscar->UseVisualStyleBackColor = true;
			this->btnBuscar->Click += gcnew System::EventHandler(this, &UsuariosForm::btnBuscar_Click);
			// 
			// dgvUsuarios
			// 
			this->dgvUsuarios->AllowUserToAddRows = false;
			this->dgvUsuarios->AllowUserToDeleteRows = false;
			this->dgvUsuarios->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvUsuarios->ColumnHeadersHeight = 29;
			this->dgvUsuarios->Location = System::Drawing::Point(12, 365);
			this->dgvUsuarios->Name = L"dgvUsuarios";
			// Permitir que la columna de acción reciba clics; las columnas de datos se marcarán como ReadOnly en BindData
			this->dgvUsuarios->ReadOnly = false;
			this->dgvUsuarios->RowHeadersVisible = false;
			this->dgvUsuarios->RowHeadersWidth = 51;
			this->dgvUsuarios->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvUsuarios->Size = System::Drawing::Size(630, 144);
			this->dgvUsuarios->TabIndex = 3;
			this->dgvUsuarios->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &UsuariosForm::dgvUsuarios_CellContentClick);
			this->dgvUsuarios->CellFormatting += gcnew System::Windows::Forms::DataGridViewCellFormattingEventHandler(this, &UsuariosForm::dgvUsuarios_CellFormatting);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(207, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(207, 22);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Registro de Usuarios";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(23, 54);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(147, 18);
			this->label5->TabIndex = 32;
			this->label5->Text = L"Ingrese_Usuario:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(23, 88);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 18);
			this->label3->TabIndex = 33;
			this->label3->Text = L"CL:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(23, 121);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(77, 18);
			this->label4->TabIndex = 34;
			this->label4->Text = L"Nombre:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(23, 208);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(104, 18);
			this->label6->TabIndex = 35;
			this->label6->Text = L"Contraseña:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(207, 301);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(221, 22);
			this->label7->TabIndex = 36;
			this->label7->Text = L"Busqueda de Usuarios";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(23, 341);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(97, 18);
			this->label8->TabIndex = 37;
			this->label8->Text = L"Buscar CL:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(176, 88);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(310, 22);
			this->textBox1->TabIndex = 38;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(176, 121);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(310, 22);
			this->textBox2->TabIndex = 39;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(176, 50);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(310, 22);
			this->textBox3->TabIndex = 40;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(176, 200);
			this->textBox4->Name = L"textBox4";
			this->textBox4->PasswordChar = '*';
			this->textBox4->Size = System::Drawing::Size(310, 22);
			this->textBox4->TabIndex = 42;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(23, 162);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 18);
			this->label1->TabIndex = 42;
			this->label1->Text = L"Rol:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(229, 245);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 28);
			this->button1->TabIndex = 44;
			this->button1->Text = L"Registrar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &UsuariosForm::btnRegistrar_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(567, 518);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 22);
			this->button2->TabIndex = 46;
			this->button2->Text = L"Aceptar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &UsuariosForm::btnAceptar_Click);
			// 
			// cmbRol
			// 
			this->cmbRol->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbRol->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"MedicoG", L"Cirujano", L"Paciente", L"Admin" });
			this->cmbRol->Location = System::Drawing::Point(176, 158);
			this->cmbRol->Name = L"cmbRol";
			this->cmbRol->Size = System::Drawing::Size(310, 24);
			this->cmbRol->TabIndex = 41;
			// 
			// btnCancelar
			// 
			this->btnCancelar->Location = System::Drawing::Point(310, 245);
			this->btnCancelar->Name = L"btnCancelar";
			this->btnCancelar->Size = System::Drawing::Size(75, 28);
			this->btnCancelar->TabIndex = 45;
			this->btnCancelar->Text = L"Cancelar";
			this->btnCancelar->UseVisualStyleBackColor = true;
			this->btnCancelar->Click += gcnew System::EventHandler(this, &UsuariosForm::btnCancelar_Click);
			// 
			// UsuariosForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(664, 552);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->btnCancelar);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->cmbRol);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtCL);
			this->Controls->Add(this->btnBuscar);
			this->Controls->Add(this->dgvUsuarios);
			this->Name = L"UsuariosForm";
			this->Text = L"Usuarios";
			this->Load += gcnew System::EventHandler(this, &UsuariosForm::UsuariosForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvUsuarios))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

		// Eventos
		void btnBuscar_Click(System::Object^ sender, System::EventArgs^ e)
		{
			SearchByCL(this->txtCL->Text->Trim());
		}

		void txtCL_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
		{
			if (e->KeyCode == System::Windows::Forms::Keys::Enter)
			{
				SearchByCL(this->txtCL->Text->Trim());
				e->SuppressKeyPress = true;
			}
		}

		void dgvUsuarios_CellFormatting(System::Object^ sender, System::Windows::Forms::DataGridViewCellFormattingEventArgs^ e)
		{
			if (e->RowIndex < 0) return;
			System::String^ colName = this->dgvUsuarios->Columns[e->ColumnIndex]->Name;
			if (colName == "Bloqueado")
			{
				// Manejo seguro: aceptar Boolean, String o DBNull
				bool val = false;
				if (e->Value == nullptr || e->Value == DBNull::Value) {
					val = false;
				}
				else {
					System::Type^ t = e->Value->GetType();
					if (t == Boolean::typeid) val = safe_cast<bool>(e->Value);
					else if (t == String::typeid) {
						System::String^ s = safe_cast<System::String^>(e->Value);
						if (s->Equals("True", StringComparison::InvariantCultureIgnoreCase) || s->Equals("Si", StringComparison::InvariantCultureIgnoreCase) || s->Equals("Sí", StringComparison::InvariantCultureIgnoreCase) || s->Equals("S?", StringComparison::InvariantCultureIgnoreCase)) val = true;
						else val = false;
					}
					else {
						try { val = Convert::ToBoolean(e->Value); } catch (...) { val = false; }
					}
				}
				e->Value = val ? "Sí" : "No";
				e->FormattingApplied = true;
			}
		}

		void dgvUsuarios_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
		{
			if (e->RowIndex < 0) return;
			if (e->ColumnIndex < 0) return;
			if (this->dgvUsuarios->Columns[e->ColumnIndex]->Name != "Accion") return;
			System::Data::DataRowView^ drv = safe_cast<System::Data::DataRowView^>(this->dgvUsuarios->Rows[e->RowIndex]->DataBoundItem);
			if (drv != nullptr)
			{
				bool nuevo = !safe_cast<bool>(drv["Bloqueado"]);
				drv["Bloqueado"] = nuevo;
				usuariosTable->AcceptChanges();
				BindData();
				if (nuevo) MessageBox::Show("Usted ha bloqueado a un usuario.", "Información", MessageBoxButtons::OK, MessageBoxIcon::Information);
				else MessageBox::Show("Usted ha desbloqueado a un usuario.", "Información", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}

		void btnRegistrar_Click(System::Object^ sender, System::EventArgs^ e)
		{
			System::String^ auth = this->textBox4->Text->Trim();
			if (auth != "1234") { MessageBox::Show("Contraseña de autorización incorrecta.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error); return; }

			System::String^ cl = this->textBox1->Text->Trim();
			System::String^ nombre = this->textBox2->Text->Trim();
			System::String^ rol = this->cmbRol->SelectedItem != nullptr ? safe_cast<System::String^>(this->cmbRol->SelectedItem) : String::Empty;
			if (String::IsNullOrWhiteSpace(cl) || String::IsNullOrWhiteSpace(nombre) || String::IsNullOrWhiteSpace(rol)) { MessageBox::Show("Complete CL, Nombre y Rol.", "Validación", MessageBoxButtons::OK, MessageBoxIcon::Warning); return; }

			for each (System::Data::DataRow^ r in usuariosTable->Rows) { if (safe_cast<System::String^>(r["CL"]) == cl) { MessageBox::Show("CL ya registrado.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error); return; } }

			usuariosTable->Rows->Add(cl, nombre, rol, false);
			usuariosTable->AcceptChanges();
			BindData();
			// Limpiar filtro de búsqueda y campo de búsqueda para que se muestren todos los usuarios añadidos
			usuariosTable->DefaultView->RowFilter = String::Empty;
			this->txtCL->Text = String::Empty;
			this->textBox1->Text = String::Empty; this->textBox2->Text = String::Empty; this->cmbRol->SelectedIndex = -1; this->textBox4->Text = String::Empty;
			MessageBox::Show("Usted registró un usuario.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

		void btnCancelar_Click(System::Object^ sender, System::EventArgs^ e)
		{
			this->Close();
		}

		void btnAceptar_Click(System::Object^ sender, System::EventArgs^ e)
		{
			if (this->dgvUsuarios->SelectedRows->Count > 0)
			{
				int idx = this->dgvUsuarios->SelectedRows[0]->Index;
				System::Data::DataRowView^ drv = safe_cast<System::Data::DataRowView^>(this->dgvUsuarios->Rows[idx]->DataBoundItem);
				if (drv != nullptr)
				{
					// Manejo seguro de valor Bloqueado
					bool bloqueado = false;
					System::Object^ val = drv["Bloqueado"];
					if (val != nullptr && val != DBNull::Value) {
						try { bloqueado = Convert::ToBoolean(val); } catch (...) { bloqueado = false; }
					}
					if (bloqueado) MessageBox::Show("Usted ha bloqueado a un usuario.", "Información", MessageBoxButtons::OK, MessageBoxIcon::Information);
					else MessageBox::Show("Usted registró un usuario.", "Información", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
			}
			else MessageBox::Show("No hay usuario seleccionado.", "Información", MessageBoxButtons::OK, MessageBoxIcon::Information);

			// Cerrar el formulario para volver al login
			this->Close();
		}

		void AddActionColumn()
		{
			for each (System::Windows::Forms::DataGridViewColumn^ col in this->dgvUsuarios->Columns)
			{
				if (col->Name == "Accion") return;
			}

			System::Windows::Forms::DataGridViewButtonColumn^ btnCol = gcnew System::Windows::Forms::DataGridViewButtonColumn();
			btnCol->Name = "Accion";
			btnCol->HeaderText = "Acción";
			btnCol->Text = "";
			btnCol->UseColumnTextForButtonValue = false;
			this->dgvUsuarios->Columns->Add(btnCol);
			this->dgvUsuarios->CellFormatting += gcnew System::Windows::Forms::DataGridViewCellFormattingEventHandler(this, &UsuariosForm::dgvUsuarios_ActionCellFormatting);
		}

		void dgvUsuarios_ActionCellFormatting(System::Object^ sender, System::Windows::Forms::DataGridViewCellFormattingEventArgs^ e)
		{
			if (e->RowIndex < 0) return;
			if (this->dgvUsuarios->Columns[e->ColumnIndex]->Name != "Accion") return;
			System::Data::DataRowView^ drv = safe_cast<System::Data::DataRowView^>(this->dgvUsuarios->Rows[e->RowIndex]->DataBoundItem);
			if (drv != nullptr)
			{
				bool bloqueado = false;
				System::Object^ valObj = drv["Bloqueado"];
				if (valObj == nullptr || valObj == DBNull::Value) {
					bloqueado = false;
				}
				else {
					System::Type^ t = valObj->GetType();
					if (t == Boolean::typeid) {
						bloqueado = safe_cast<bool>(valObj);
					}
					else if (t == String::typeid) {
						System::String^ s = safe_cast<System::String^>(valObj);
						if (s->Equals("True", StringComparison::InvariantCultureIgnoreCase) || s->Equals("Si", StringComparison::InvariantCultureIgnoreCase) || s->Equals("Sí", StringComparison::InvariantCultureIgnoreCase) || s->Equals("S?", StringComparison::InvariantCultureIgnoreCase)) bloqueado = true;
						else bloqueado = false;
					}
					else {
						try { bloqueado = Convert::ToBoolean(valObj); } catch (Exception^) { bloqueado = false; }
					}
				}
				e->Value = bloqueado ? "Desbloquear" : "Bloquear";
				e->FormattingApplied = true;
			}
		}
#pragma endregion
	private: System::Void UsuariosForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
