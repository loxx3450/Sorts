#include <iostream>

void sort(int* array, int size)
{
    int tempVal{}, tempInd{};
    for (int i{}; i < size - 1; ++i)
    {
        tempVal = array[i];
        tempInd = i;
        for (int j{ i + 1 }; j < size; ++j)
        {
            if (array[j] < array[i])
            {
                tempVal = array[j];
                tempInd = j;
            }
        }

        array[tempInd] = array[i];
        array[i] = tempVal;
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