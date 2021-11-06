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
<<<<<<< HEAD
=======
<<<<<<< HEAD
	private: System::Windows::Forms::Button^ button1;
	public:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
		   Orden<List<Pokemon>>* ordenar;

=======
>>>>>>> parent of 39b426a (Commit)
>>>>>>> 9984f4c7992def780f07758b79e06df7276f4710
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			Pokedex = new List<Pokemon>();
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
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
			this->btngeneracion->Location = System::Drawing::Point(389, 12);
			this->btngeneracion->Name = L"btngeneracion";
			this->btngeneracion->Size = System::Drawing::Size(165, 74);
			this->btngeneracion->TabIndex = 3;
			this->btngeneracion->Text = L"Ordenar por generación (Shell sort)";
			this->btngeneracion->UseVisualStyleBackColor = true;
			// 
			// btnNombre
			// 
			this->btnNombre->Location = System::Drawing::Point(805, 101);
			this->btnNombre->Name = L"btnNombre";
			this->btnNombre->Size = System::Drawing::Size(154, 45);
			this->btnNombre->TabIndex = 4;
			this->btnNombre->Text = L"Ordenar por nombre (Quick Sort)";
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
			this->listBox1->Location = System::Drawing::Point(370, 152);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(184, 516);
			this->listBox1->TabIndex = 5;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 16;
			this->listBox2->Location = System::Drawing::Point(581, 152);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(172, 516);
			this->listBox2->TabIndex = 6;
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 16;
			this->listBox3->Location = System::Drawing::Point(787, 152);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(172, 516);
			this->listBox3->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(434, 116);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(67, 17);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Shell sort";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(629, 116);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 17);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Selection sort";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(849, 116);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 17);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Quick sort";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(389, 102);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(154, 45);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Ordenar por nombre (Shell sort)";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(590, 102);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(154, 45);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Ordenar por nombre (Selection sort)";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(590, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(154, 74);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Ordenar por generación (Selection sort)";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(805, 12);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(154, 74);
			this->button4->TabIndex = 14;
			this->button4->Text = L"Ordenar por generación (Quick sort)";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1127, 739);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->btnNombre);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox3);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
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
		void llenarListBox(System::Windows::Forms::ListBox^ ListBox) {
			int contador = 0;
			while (Pokedex->get(contador) != nullptr) {
				string Nombre;
				int Numero;
				int Generacion;
				Nombre = Pokedex->get(contador)->obtenerNombre();
				Numero = Pokedex->get(contador)->obtenerNumero();
				Generacion = Pokedex->get(contador)->obtenerGeneracion();
				String^ nombre = gcnew String(Nombre.c_str());
				ListBox->Items->Add(contador + ".  " + Numero + " , " + nombre + " , " + Generacion);
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
					string namePokemon;
					int generacion = Convert::ToInt64(columnaArchivo[2]);
					int numero = Convert::ToInt64(columnaArchivo[0]);
					MarshalString(columnaArchivo[1], namePokemon);	
					Pokemon* pokemon = new Pokemon(namePokemon, generacion,numero);
					Pokedex->add(pokemon);		
				}
				llenarListBox(listPokemon);
			}
		}
		else {
			MessageBox::Show("No se seleccionó ningún archivo", "Archivo no seleccionado", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}
	private: System::Void btnNombre_Click(System::Object^ sender, System::EventArgs^ e) {
		
		/*ordenar->selectionSortNombre();
		llenarListBox(listBox2);*/
		/*int high = (Pokedex->getSize()) - 1;
		ordenar->quickSortNombre(0, high);
		llenarListBox(listBox3);*/
		/*ordenar->shellSort((Pokedex->getSize()) - 1);
		llenarListBox(listBox1);*/

	}
};
}
