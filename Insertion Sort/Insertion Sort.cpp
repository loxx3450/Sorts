#include <iostream>

void sort(int* array, int size)
{
    int temp{};
    for (int i{}; i < size; ++i)
    {
        for (int j{i}; j > 0; --j)
        {
            if (array[j - 1] > array[j])
            {
                temp = array[j - 1];
                array[j - 1] = array[j];
                array[j] = temp;
            }
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