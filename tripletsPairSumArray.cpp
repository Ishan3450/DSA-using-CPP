#include <iostream>

using namespace std;

void tripletsPairSum(int arr[], int size, int num)
{

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if ((arr[i] + arr[j] + arr[k]) == num)
                {
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                }
            }
        }
    }
}

int main()
{
    cout << "Testcase 1" << endl;
    int array1[5] = {1, 2, 3, 4, 5};
    int num = 12;
    tripletsPairSum(array1, 5, num);

    cout << "Testcase 2" << endl;
    int array2[6] = {1, 2, 3, 1, 2, 3};
    int num1 = 6;
    tripletsPairSum(array2, 6, num1);

    cout << "Testcase 3" << endl;
    int array3[4] = {1, 2, 3, 4};
    int num2 = 11;
    tripletsPairSum(array3, 4, num2);

    cout << "Testcase 4" << endl;
    int array4[6] = {1, 1, 2, 2, 1, 1};
    int num3 = 4;
    tripletsPairSum(array4, 6, num3);

    return 0;
}