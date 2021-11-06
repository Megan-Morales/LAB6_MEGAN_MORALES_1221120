
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

        // One by one move boundary of unsorted subarray
        for (i = 0; i < n; i++)
        {
            // Find the minimum element in unsorted array
            min_idx = i;
            for (j = i + 1; j < (n + 1); j++)
                if (((this->item->get(j)->obtenerNombre()).compare((this->item->get(min_idx)->obtenerNombre()))) < 0){
                    min_idx = j;
                }
            // Swap the found minimum element with the first element
            this->item->swap(this->item->get(min_idx), this->item->get(i));
        }
    }
    
    //Funciones para el ordenamiento de QuickSort
    int partition(int low, int high)
    {
        int i = (low - 1); // Index of smaller element and indicates the right position of pivot found so far

        for (int j = low; j <= high - 1; j++)
        {
            // If current element is smaller than the pivot 
            if (((this->item->get(j)->obtenerNombre()).compare((this->item->get(high)->obtenerNombre()))) < 0) //(arr[j] < pivot)
            {
                i++; // increment index of smaller element 
                this->item->swap(this->item->get(i), this->item->get(j));
            }
        }
        this->item->swap(this->item->get(i+1), this->item->get(high));
        return (i + 1);
    }

    void quickSortNombre(int low, int high) {
        if (low < high)
        {
            /* pi is partitioning index, arr[p] is now
            at right place */
            int pi = partition(low, high);

            // Separately sort elements before 
            // partition and after partition 
            quickSortNombre(low, pi - 1);
            quickSortNombre(pi + 1, high);
        }
    }

    //Funciones para el ordenamiento de Shell Sort

    int shellSort(int n)
    {
        // Start with a big gap, then reduce the gap
        for (int gap = n / 2; gap > 0; gap /= 2)
        {
            // Do a gapped insertion sort for this gap size.
            // The first gap elements a[0..gap-1] are already in gapped order
            // keep adding one more element until the entire array is
            // gap sorted
            for (int i = gap; i < n; i += 1)
            {
                // add a[i] to the elements that have been gap sorted
                // save a[i] in temp and make a hole at position i

                // shift earlier gap-sorted elements up until the correct
                // location for a[i] is found
                int j;
                for (j = i; j >= gap && (((this->item->get(i)->obtenerNombre()).compare((this->item->get(j-gap)->obtenerNombre()))) < 0); j -= gap)
                    
                    this->item->swap(this->item->get(j), this->item->get(j-gap));
                    

                //  put temp (the original a[i]) in its correct location
                this->item->swap(this->item->get(j), this->item->get(i));
            }
        }
        return 0;
    }
};

