#include <iostream>
#include "Heap.h"

void sort(int* array, int size)
{
    Heap a(array, size);

    for (int i{ size - 1 }; i >= 0; --i)
    {
        array[i] = a.removeMax();
    }
}

void show(int* array, int size)
{
    for (int i{}; i < size; ++i)
    {
        std::cout << array[i] << " ";
    }
    std::cout << "\n";
}

int main()
{
    int* array = new int[15]{ 3,44,38,5,47,15,36,26,27,2,46,4,19,50,48 };
    sort(array, 15);
    show(array, 15);
}