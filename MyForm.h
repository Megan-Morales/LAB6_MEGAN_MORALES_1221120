#pragma once

namespace LAB6MEGANMORALES1221120 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnImportar;
	protected:
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ btngeneracion;
	private: System::Windows::Forms::Button^ btnNombre;

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
			this->btnImportar = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->btngeneracion = (gcnew System::Windows::Forms::Button());
			this->btnNombre = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnImportar
			// 
			this->btnImportar->Location = System::Drawing::Point(12, 12);
			this->btnImportar->Name = L"btnImportar";
			this->btnImportar->Size = System::Drawing::Size(75, 39);
			this->btnImportar->TabIndex = 0;
			this->btnImportar->Text = L"Importar";
			this->btnImportar->UseVisualStyleBackColor = true;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(95, 85);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(253, 516);
			this->listBox1->TabIndex = 2;
			// 
			// btngeneracion
			// 
			this->btngeneracion->Location = System::Drawing::Point(401, 251);
			this->btngeneracion->Name = L"btngeneracion";
			this->btngeneracion->Size = System::Drawing::Size(110, 48);
			this->btngeneracion->TabIndex = 3;
			this->btngeneracion->Text = L"Ordenar por generación";
			this->btngeneracion->UseVisualStyleBackColor = true;
			// 
			// btnNombre
			// 
			this->btnNombre->Location = System::Drawing::Point(401, 338);
			this->btnNombre->Name = L"btnNombre";
			this->btnNombre->Size = System::Drawing::Size(110, 45);
			this->btnNombre->TabIndex = 4;
			this->btnNombre->Text = L"Ordenar por nombre";
			this->btnNombre->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(580, 628);
			this->Controls->Add(this->btnNombre);
			this->Controls->Add(this->btngeneracion);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->btnImportar);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
