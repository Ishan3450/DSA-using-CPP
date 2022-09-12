// One pointer approach is more optimized than 2 pointer optimized

#include <iostream>

using namespace std;

void printArray(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void sort01Array(int a[], int size)
{
    int start = 0;
    while (start < size - 1)
    {
        if ((a[start] == 1) && (a[start + 1] == 0))
        {
            swap(a[start], a[start + 1]);
            start++;
        }
        else if (a[start] == 0)
        {
            start++;
        }
        else if (a[start] ^ a[start + 1] == 0)
        { // Here XOR ^ operator is used to check the same numbers
            if (a[start] == 1 && a[start + 2] == 0)
            {
                swap(a[start], a[start + 2]);
            } 
            start++;
        }
    }
    printArray(a, size);
}

int main()
{
    int array1[6] = {0, 1, 1, 0, 0, 1};
    sort01Array(array1, 6);

    return 0;
}