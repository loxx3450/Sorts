#include <iostream>

void sort(int* array, int size)
{
    int index{1}, temp{};
    while (index != size)
    {
        if (array[index] < array[index - 1])
        {
            temp = array[index];
            array[index] = array[index - 1];
            array[index - 1] = temp;
            --index;
        }
        else
        {
            ++index;
        }

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