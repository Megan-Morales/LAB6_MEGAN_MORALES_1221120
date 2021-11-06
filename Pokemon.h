#pragma once
#include <string>
using std::string;

class Pokemon
{
	string nombre;
	int generacion;
	int numero;

public:
	Pokemon(string nombre, int generacion, int numero);
	string obtenerNombre();
	int obtenerGeneracion();
	int obtenerNumero();



};

