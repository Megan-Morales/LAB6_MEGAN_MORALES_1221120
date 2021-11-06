
#include "Pokemon.h"

#pragma once
template <typename T>
class Orden
{
    T* item = nullptr;

public:
    Orden(T* item) {
        this->item = item;
    }

    void prueba() {
        bool prueba = this->item->isEmpty();
        int a = (this->item->get(0)->obtenerNombre()).compare(this->item->get(1)->obtenerNombre()); //comparar dos posiciones
    }

    //Funciones para el ordenamiento de SelectionSort
    void selectionSortNombre()
    {
        int n = (this->item->getSize()) - 1;
        int i, j, min_idx;

        
        for (i = 0; i < n; i++)
        {
            
            min_idx = i;
            for (j = i + 1; j < (n + 1); j++)
                if (((this->item->get(j)->obtenerNombre()).compare((this->item->get(min_idx)->obtenerNombre()))) < 0) {
                    min_idx = j;
                }
          
            this->item->swap(this->item->get(min_idx), this->item->get(i));
        }
    }

    void selectionSortGeneracion() {
        int n = (this->item->getSize()) - 1;
        int i, j, min_idx;

   
        for (i = 0; i < n; i++)
        {
            
            min_idx = i;
            for (j = i + 1; j < (n + 1); j++)
                if (((this->item->get(j)->obtenerGeneracion()) < (this->item->get(min_idx)->obtenerGeneracion()))) {
                    min_idx = j;
                }
                else if (((this->item->get(j)->obtenerGeneracion()) == (this->item->get(min_idx)->obtenerGeneracion()))) {
                    if (((this->item->get(j)->obtenerNombre()).compare((this->item->get(min_idx)->obtenerNombre()))) < 0) {
                        min_idx = j;
                    }
                }
            
            this->item->swap(this->item->get(min_idx), this->item->get(i));
        }
    }

    void selectionSortNationalNumber() {
        int n = (this->item->getSize()) - 1;
        int i, j, min_idx;

        
        for (i = 0; i < n; i++)
        {
            
            min_idx = i;
            for (j = i + 1; j < (n + 1); j++)
                if (((this->item->get(j)->obtenerNumero()) < (this->item->get(min_idx)->obtenerNumero()))) {
                    min_idx = j;
                }
            
            this->item->swap(this->item->get(min_idx), this->item->get(i));
        }
    }

    //Funciones para el ordenamiento de QuickSort
    int partitionNombre(int low, int high)
    {
        int i = (low - 1); 

        for (int j = low; j <= high - 1; j++)
        {
            
            if (((this->item->get(j)->obtenerNombre()).compare((this->item->get(high)->obtenerNombre()))) < 0) 
            {
                i++; 
                this->item->swap(this->item->get(i), this->item->get(j));
            }
        }
        this->item->swap(this->item->get(i + 1), this->item->get(high));
        return (i + 1);
    }

    void quickSortNombre(int low, int high) {
        if (low < high)
        {
           
            int pi = partitionNombre(low, high);

           
            quickSortNombre(low, pi - 1);
            quickSortNombre(pi + 1, high);
        }
    }

    int partitionNationalNumber(int low, int high)
    {
        int i = (low - 1); 

        
            for (int j = low; j <= high - 1; j++)
            {
                
                if (((this->item->get(j)->obtenerNumero()) < (this->item->get(high)->obtenerNumero()))) 
                {
                    i++; 
                    this->item->swap(this->item->get(i), this->item->get(j));
                }
            }
        this->item->swap(this->item->get(i + 1), this->item->get(high));
        return (i + 1);
    }

    void quickSortNationalNumber(int low, int high) {
        if (low < high)
        {
            
            int pi = partitionNationalNumber(low, high);

            
            quickSortNationalNumber(low, pi - 1);
            quickSortNationalNumber(pi + 1, high);
        }
    }

    int partitionGeneracion(int low, int high) {
        int i = (low - 1); 

        for (int j = low; j <= high - 1; j++)
        {
            
            if (((this->item->get(j)->obtenerGeneracion()) < (this->item->get(high)->obtenerGeneracion()))) 
            {
                i++; 
                this->item->swap(this->item->get(i), this->item->get(j));
            }
            else if (((this->item->get(j)->obtenerGeneracion()) == (this->item->get(high)->obtenerGeneracion()))) {
                if (((this->item->get(j)->obtenerNombre()).compare((this->item->get(high)->obtenerNombre()))) < 0) {
                    i++; 
                    this->item->swap(this->item->get(i), this->item->get(j));
                }
            }
        }
        this->item->swap(this->item->get(i + 1), this->item->get(high));
        return (i + 1);
    }

    void quickSortGeneracion(int low, int high) {
        if (low < high)
        {
           
            int pi = partitionGeneracion(low, high);

           
            quickSortGeneracion(low, pi - 1);
            quickSortGeneracion(pi + 1, high);
        }
    }



    //Funciones para el ordenamiento de Shell Sort
    int shellSort(int n)
    {
        
        for (int gap = n / 2; gap > 0; gap /= 2)
        {
            
            for (int i = gap; i < n; i += 1)
            {
                

                Pokemon* temp = this->item->get(i);
                
                int j;
                for (j = i; j >= gap && (((this->item->get(i)->obtenerNombre()).compare((this->item->get(j - gap)->obtenerNombre()))) < 0); j -= gap) {

                    Pokemon* pokemonGap = this->item->get(j - gap);
                    this->item->setItem(j, pokemonGap);
                }

                
                this->item->setItem(j, temp);
            }
        }
        return 0;
    }

   
        int shellSortNationalNumber(int n) {
        
        for (int gap = n / 2; gap > 0; gap /= 2)
        {
           
            for (int i = gap; i < n; i += 1)
            {
               

                Pokemon* temp = this->item->get(i);
                
                int j;
                for (j = i; j >= gap && ((this->item->get(i)->obtenerNumero()) <= (this->item->get(j - gap)->obtenerNumero())); j -= gap) {

                    Pokemon* pokemonGap = this->item->get(j - gap);
                    this->item->setItem(j, pokemonGap);
                }

               
                this->item->setItem(j, temp);
            }
        }
        return 0;
    }

    int shellSortGeneracion(int n) {
        
        for (int gap = n / 2; gap > 0; gap /= 2)
        {
           
            for (int i = gap; i < n; i += 1)
            {
                

                Pokemon* temp = this->item->get(i);
               
                int j;
                for (j = i; j >= gap && ((this->item->get(i)->obtenerGeneracion()) <= (this->item->get(j - gap)->obtenerGeneracion())); j -= gap) {
                    Pokemon* pokemonGap = this->item->get(j - gap);
                    this->item->setItem(j, pokemonGap);
                }

                /*for (j = i; j >= gap && ((this->item->get(i)->obtenerGeneracion()) == (this->item->get(j - gap)->obtenerGeneracion())) && (((this->item->get(i)->obtenerNombre()).compare((this->item->get(j - gap)->obtenerNombre()))) > 0); j -= gap) {
                    Pokemon* pokemonGap = this->item->get(j - gap);
                    this->item->setItem(j, pokemonGap);
                }*/

                
                this->item->setItem(j, temp);
            }
        }
        return 0;
    }
};

