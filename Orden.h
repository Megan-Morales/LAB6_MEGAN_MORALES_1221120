#pragma once
#include "Pokemon.h"
#include <string>
using std::string;

template <typename T>
class Orden
{
	T* item;
public: 
	Orden(T* item) {
		this->item = item;
	}
	void prueba() {
		bool prueba = this->item->isEmpty();
		int a = this->item->get(0)->obtenerNombre().compare this->item->get(1)->obtenerNombre();
	}
    void selectionSort()
    {
        node* temp = this->item->get(0);
        while (temp) {
            node* min = temp;
            node* r = temp->next;
            while (r) {
                if (min->obtenerNombre().compare (r->obtenerNombre())>0) {
                    min = r;
                }
                r = r->next;
            }
            int x = temp->obtenerNombre();
            temp->obtenerNombre() = min->obtenerNombre();
            min->obtenerNombre() = x;
            temp = temp->next;
        }
    }


};

