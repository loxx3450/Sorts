#include <iostream>

void mergeSort(int* array, int left, int right)
{
    if (right - left > 1)
    {
        int middle = left + (right - left) / 2;

        mergeSort(array, left, middle);
        mergeSort(array, middle + 1, right);

        int size = right - left;

        int lIndex = left;
        int rIndex = middle + 1;

        int* new_array = new int[size];

        for (int i{}; i <= size; ++i)
        {
            if (lIndex <= middle)
            {
                if (rIndex <= right)
                {
                    if (array[lIndex] <= array[rIndex])
                    {
                        new_array[i] = array[lIndex++];
                    }
                    else
                    {
                        new_array[i] = array[rIndex++];
                    }
                }
                else
                {
                    new_array[i] = array[lIndex++];
                }
            }
            else 
            {
                new_array[i] = array[rIndex++];
            }
        }

        for (int i{left}, j{0}; i <= right; ++i, ++j)
        {
            array[i] = new_array[j];
        }
    }
    else
    {
        int temp{};

        if (array[left] > array[right])
        {
            temp = array[left];
            array[left] = array[right];
            array[right] = temp;
        }
    }
}

void sort(int* array, int size)
{
    mergeSort(array, 0, size - 1);
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
    show(array, 15);
    sort(array, 15);
    show(array, 15);
}