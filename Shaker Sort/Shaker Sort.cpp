#include <iostream>

void sort(int* array, int size)
{
    int left{}, right{ size - 1 };
    int temp{};

    bool LtoR{ true }, isChanged{false};

    while (left != right)
    {
        if (LtoR)
        {
            for (int i{ left }; i < right; ++i)
            {
                if (array[i] > array[i + 1])
                {
                    temp = array[i];
                    array[i] = array[i + 1];
                    array[i + 1] = temp;

                    isChanged = true;
                }
            }
            --right;
        }
        else
        {
            for (int i{ right }; i > left; --i)
            {
                if (array[i] < array[i - 1])
                {
                    temp = array[i];
                    array[i] = array[i - 1];
                    array[i - 1] = temp;

                    isChanged = true;
                }
            }
            ++left;
        }

        LtoR = !LtoR;

        if (!isChanged) { return; }

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
    int* array = new int[8]{ 44,55,12,42,94,18,6,67 };
    sort(array, 8);
    show(array, 8);
}