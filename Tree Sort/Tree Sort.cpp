#include <iostream>
#include "Binary Tree.h"

void sort(int* array, int size)
{
    BinaryTree<int> a{ array[0]};
    for (int i{ 1 }; i < size; ++i)
    {
        a.insert(array[i]);
    }

    for (int i{}; i < size; ++i)
    {
        array[i] = a.min();
        a.remove(array[i]);
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