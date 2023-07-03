#include <iostream>

void quickSort(int* array, int l, int r, int mid)
{
    int left{ l }, right{ r }, middle{ mid };

    if (l == r || l == mid || r == mid)
    {
        return;
    }

    int temp{};

    while (r >= l)
    {
        while (l < right && array[l] < array[mid])
        {
            l++;
        }
        while (r > left && array[r] > array[mid])
        {
            r--;
        }

        if (l < right && r > left)
        {
            temp = array[l];
            array[l] = array[r];
            array[r] = temp;
            l++;
            r--;
        }
    }

    quickSort(array, left, middle + 1, (left + middle) / 2);
    quickSort(array, middle, right, (right + middle) / 2);
}

void sort(int* array, int size)
{
    quickSort(array, 0, size - 1, size / 2);
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