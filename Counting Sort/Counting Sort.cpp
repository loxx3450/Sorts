#include <iostream>

void sort(int* array, int size, int l, int r)
{
    int* temp = new int[r - l + 1]{};

    for (int i{ 0 }; i < size; ++i)
    {
        temp[array[i]]++;
    }

    for (int i{}, index{}; i <= r; ++i)
    {
        for (int j{}; j < temp[i]; ++j)
        {
            array[index++] = i;
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
    int* array = new int[18]{5, 6, 1, 8, 8, 7, 1, 0, 4, 8, 3, 2, 1, 3, 4, 6, 1, 1 };
    sort(array, 18, 0, 8);
    show(array, 18);
}