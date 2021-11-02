#pragma once
#include "List.h"
#include "Pokemon.h"
#include "Orden.h"

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

		List<Pokemon>* Pokedex;
		Orden<List<Pokemon>>* ordenar;

		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			Pokedex = new List<Pokemon>();
			ordenar = new Orden <List<Pokemon>>(Pokedex);
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
	private: System::Windows::Forms::ListBox^ listPokemon;
	protected:

	private: System::Windows::Forms::Button^ btngeneracion;
	private: System::Windows::Forms::Button^ btnNombre;
	private: System::Windows::Forms::OpenFileDialog^ ofdImportar;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

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
			this->listPokemon = (gcnew System::Windows::Forms::ListBox());
			this->btngeneracion = (gcnew System::Windows::Forms::Button());
			this->btnNombre = (gcnew System::Windows::Forms::Button());
			this->ofdImportar = (gcnew System::Windows::Forms::OpenFileDialog());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnImportar
			// 
			this->btnImportar->Location = System::Drawing::Point(22, 12);
			this->btnImportar->Name = L"btnImportar";
			this->btnImportar->Size = System::Drawing::Size(75, 48);
			this->btnImportar->TabIndex = 0;
			this->btnImportar->Text = L"Importar";
			this->btnImportar->UseVisualStyleBackColor = true;
			this->btnImportar->Click += gcnew System::EventHandler(this, &MyForm::btnImportar_Click);
			// 
			// listPokemon
			// 
			this->listPokemon->FormattingEnabled = true;
			this->listPokemon->ItemHeight = 16;
			this->listPokemon->Location = System::Drawing::Point(22, 76);
			this->listPokemon->Name = L"listPokemon";
			this->listPokemon->Size = System::Drawing::Size(184, 516);
			this->listPokemon->TabIndex = 2;
			// 
			// btngeneracion
			// 
			this->btngeneracion->Location = System::Drawing::Point(212, 238);
			this->btngeneracion->Name = L"btngeneracion";
			this->btngeneracion->Size = System::Drawing::Size(110, 48);
			this->btngeneracion->TabIndex = 3;
			this->btngeneracion->Text = L"Ordenar por generación";
			this->btngeneracion->UseVisualStyleBackColor = true;
			// 
			// btnNombre
			// 
			this->btnNombre->Location = System::Drawing::Point(212, 302);
			this->btnNombre->Name = L"btnNombre";
			this->btnNombre->Size = System::Drawing::Size(110, 45);
			this->btnNombre->TabIndex = 4;
			this->btnNombre->Text = L"Ordenar por nombre";
			this->btnNombre->UseVisualStyleBackColor = true;
			this->btnNombre->Click += gcnew System::EventHandler(this, &MyForm::btnNombre_Click);
			// 
			// ofdImportar
			// 
			this->ofdImportar->FileName = L"openFileDialog1";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(341, 76);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(184, 516);
			this->listBox1->TabIndex = 5;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 16;
			this->listBox2->Location = System::Drawing::Point(547, 76);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(172, 516);
			this->listBox2->TabIndex = 6;
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 16;
			this->listBox3->Location = System::Drawing::Point(753, 76);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(172, 516);
			this->listBox3->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(391, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(67, 17);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Shell sort";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(586, 43);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 17);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Selection sort";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(806, 43);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 17);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Quick sort";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(938, 628);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox3);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->btnNombre);
			this->Controls->Add(this->btngeneracion);
			this->Controls->Add(this->listPokemon);
			this->Controls->Add(this->btnImportar);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void restablecer() { 
			Pokedex->clear();
			listPokemon->Items->Clear();
		}
		void llenarListBox() {  
			int contador = 0;
			while (Pokedex->get(contador) != nullptr) {
				string Nombre;
				int Numero;
				int Generacion;
				Nombre = Pokedex->get(contador)->obtenerNombre();
				Numero = Pokedex->get(contador)->obtenerNumero();
				Generacion = Pokedex->get(contador)->obtenerGeneracion();
				String^ nombre = gcnew String(Nombre.c_str());
				listPokemon->Items->Add(contador +".  "  + Numero + " , " + nombre + " , "+Generacion);
				contador++; 
			}
		}
		void MarshalString(String^ s, string& os) { 
			using namespace Runtime::InteropServices;
			const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
		}
	private: System::Void btnImportar_Click(System::Object^ sender, System::EventArgs^ e) {
		ofdImportar->Filter = "Archivos separados por coma (csv) | *.csv";
		ofdImportar->FileName = "";

		if (ofdImportar->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			restablecer();
			array<String^>^ archivoLineas = File::ReadAllLines(ofdImportar->FileName);
			if (archivoLineas->Length > 0) {
				//LLenar list playlist
				for (int i = 0; i < archivoLineas->Length-1; i++) {
					array<String^>^ columnaArchivo = archivoLineas[i]->Split(',');
					string namePokemon;
					int generacion = Convert::ToInt64(columnaArchivo[2]);
					int numero = Convert::ToInt64(columnaArchivo[0]);
					MarshalString(columnaArchivo[1], namePokemon);	
					Pokemon* pokemon = new Pokemon(namePokemon, generacion,numero);
					Pokedex->add(pokemon);		
				}
				llenarListBox();
			}
		}
		else {
			MessageBox::Show("No se seleccionó ningún archivo", "Archivo no seleccionado", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}
	private: System::Void btnNombre_Click(System::Object^ sender, System::EventArgs^ e) {

	}
};
}
