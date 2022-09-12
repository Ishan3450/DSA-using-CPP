#include <iostream>

using namespace std;

void selectionSort(int arr[], int size)
{

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (arr[j] < arr[i])
                swap(arr[i], arr[j]);
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int array1[5] = {64, 25, 12, 22, 11};
    selectionSort(array1, 5);
    
    cout << endl;
    
    int array2[5] = {6, 2, 8, 4, 10};
    selectionSort(array2, 5);
    return 0;
}