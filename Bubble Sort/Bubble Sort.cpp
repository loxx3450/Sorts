#include <iostream>

void sort(int* array, int size)
{
    int temp{};
    bool isChanged{ false };

    for (int i{}; i < size; ++i)
    {
        for (int j{}; j < size - 1 - i; ++j)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;

                isChanged = true;
            }
        }
        if (!isChanged)
        {
            return;
        }
        isChanged = false;
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
    int* array = new int[5]{ 6, 2, 8, 4, 10 };
    sort(array, 5);
    show(array, 5);
}