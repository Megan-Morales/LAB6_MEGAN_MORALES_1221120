#pragma once
#include "List.h"
#include "Pokemon.h"

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
	private: System::Windows::Forms::ListBox^ listPokemon;
	protected:

	private: System::Windows::Forms::Button^ btngeneracion;
	private: System::Windows::Forms::Button^ btnNombre;
	private: System::Windows::Forms::OpenFileDialog^ ofdImportar;

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
			this->btnImportar->Click += gcnew System::EventHandler(this, &MyForm::btnImportar_Click);
			// 
			// listPokemon
			// 
			this->listPokemon->FormattingEnabled = true;
			this->listPokemon->ItemHeight = 16;
			this->listPokemon->Location = System::Drawing::Point(95, 85);
			this->listPokemon->Name = L"listPokemon";
			this->listPokemon->Size = System::Drawing::Size(253, 516);
			this->listPokemon->TabIndex = 2;
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
			// ofdImportar
			// 
			this->ofdImportar->FileName = L"openFileDialog1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(580, 628);
			this->Controls->Add(this->btnNombre);
			this->Controls->Add(this->btngeneracion);
			this->Controls->Add(this->listPokemon);
			this->Controls->Add(this->btnImportar);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);

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
				for (int i = 0; i < archivoLineas->Length; i++) {
					array<String^>^ columnaArchivo = archivoLineas[i]->Split(',');
					int j = 0;
					while (j < columnaArchivo->Length) {
						string namePokemon;
						int generacion = Convert::ToInt64(columnaArchivo[2]);
						int numero = Convert::ToInt64(columnaArchivo[0]);
						MarshalString(columnaArchivo[1], namePokemon);	
						Pokemon* pokemon = new Pokemon(namePokemon, generacion,numero);
						Pokedex->add(pokemon);	
						j++;
					}
				}
				llenarListBox();
			}
		}
		else {
			MessageBox::Show("No se seleccionó ningún archivo", "Archivo no seleccionado", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}
	};
}
