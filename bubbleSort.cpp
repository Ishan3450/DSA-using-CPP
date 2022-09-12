#include <iostream>

using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void bubbleSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        bool isSorted = false;
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSorted = true;
            }
        }
        if(isSorted == false)
            // this is used for checking the array is sorter or not
            break;
    }

    printArray(arr, size);
}

int main()
{

    int array1[5] = {6, 2, 8, 4, 10};
    bubbleSort(array1, 5);
    return 0;
}