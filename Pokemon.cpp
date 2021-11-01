#include "Pokemon.h"

Pokemon::Pokemon(string nombre,int generacion, int numero) {
	this->nombre = nombre;
	this->generacion = generacion;
	this->numero = numero;
}

string Pokemon::obtenerNombre() {
	return this->nombre;
}
int Pokemon::obtenerGeneracion() {
	return this->generacion;
}
int Pokemon::obtenerNumero() {
	return this-> numero;
}
