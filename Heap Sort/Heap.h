#pragma once
#include <iostream>
#include <vector>

class Heap
{
private:
    std::vector<int> array;

public:
    Heap(int* arr, int size)
    {
        for (int i{}; i < size; ++i)
        {
            array.push_back(arr[i]);
        }

        for (int i{ static_cast<int>(array.size() / 2) }; i >= 0; --i)
        {
            this->heapify(i);
        }

    }

    Heap()
    {

    }

    void add(int value)
    {
        int temp{}, index = { static_cast<int>((array.size() - 1) / 2) }, curr{ static_cast<int>(array.size()) };

        array.push_back(value);

        while (index >= 0 && array[index] < value)
        {
            temp = array[index];
            array[index] = array[curr];
            array[curr] = temp;

            curr = index;

            index--;
            index /= 2;
        }
    }

    int removeMax()
    {
        int result = array[0];
        if (array.size() > 1)
        {
            array[0] = array[array.size() - 1];
            array.pop_back();
            this->heapify(0);
        }
        else
        {
            array.pop_back();
        }
        

        return result;
    }

    void heapify(int i)
    {
        int temp{}, curr{ i }, index{}, left{}, right{};

        while (true)
        {
            temp = array[curr];
            left = curr * 2 + 1;
            right = curr * 2 + 2;

            if (left < array.size() && array[left] > temp)
            {
                index = left;
                temp = array[left];
            }
            if (right < array.size() && array[right] > temp)
            {
                index = right;
                temp = array[right];
            }

            if (temp == array[curr])
            {
                return;
            }

            temp = array[index];
            array[index] = array[curr];
            array[curr] = temp;

            curr = index;
        }
    }

    void show()
    {
        int levels{ 1 };
        for (int i{}; i < array.size(); ++i)
        {
            if (i == levels)
            {
                std::cout << "\n";
                levels += ((levels + 1) / 2) * 2;
            }
            std::cout << array[i] << " ";
        }
        std::cout << "\n\n";
    }
};