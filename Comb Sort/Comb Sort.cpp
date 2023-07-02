#include <iostream>

void sort(int* array, int size)
{
    int diff = size / 1.247, temp{};

    while (diff != 0)
    {
        for (int i{}; i < size - diff; ++i)
        {
            if (array[i] > array[i + diff])
            {
                temp = array[i];
                array[i] = array[i + diff];
                array[i + diff] = temp;
            }
        }

        diff /= 1.247;
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