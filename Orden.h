#pragma once
template <typename T>
class Orden
{
<<<<<<< HEAD
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
    //Funciones para el ordenamiento de QuickSort
    int partition(int low, int high)
    {
        int i = (low - 1); 

        for (int j = low; j <= high - 1; j++)
        {
             
            if (((this->item->get(j)->obtenerNombre()).compare((this->item->get(high)->obtenerNombre()))) < 0) //(arr[j] < pivot)
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
            
            int pi = partition(low, high);

           
            quickSortNombre(low, pi - 1);
            quickSortNombre(pi + 1, high);
        }
    }

    //Funciones para el ordenamiento de Shell Sort

    int shellSort(int n)
    {
        
        for (int gap = n / 2; gap > 0; gap /= 2)
        {
           
            for (int i = gap; i < n; i += 1)
            {
                
                int j;
                for (j = i; j >= gap && (((this->item->get(i)->obtenerNombre()).compare((this->item->get(j - gap)->obtenerNombre()))) < 0); j -= gap)

                    this->item->swap(this->item->get(j), this->item->get(j - gap));


                
                this->item->swap(this->item->get(j), this->item->get(i));
            }
        }
        return 0;
    }
=======
public: virtual int compare(T a, T b) = 0;
>>>>>>> parent of 39b426a (Commit)
};

