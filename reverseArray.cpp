#include <iostream>

using namespace std;

void reverseArray(int a[], int size)
{
    int temp = 0;
    int start = 0;
    int end = (size - 1);

    while (start <= end)
    {
        // Swapping Values  Method 2
        swap(a[start], a[end]);

        //Swapping Values  Method 1
        // temp = a[start];
        // a[start] = a[end];
        // a[end] = temp;

        start++;
        end--;
    }

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int array1[5] = {1, 2, 3, 4, 5};
    reverseArray(array1, 5);

    cout << endl
         << endl;

    int array2[6] = {10, 9, 8, 7, 6, 5};
    reverseArray(array2, 5);

    return 0;
}