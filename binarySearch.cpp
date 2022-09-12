#include <iostream>

using namespace std;

int binarySearch(int a[], int size, int key){
    int start = 0;
    int end = size-1;

    // Below midelement updation will help from integer value execeded
    int midElement = start + (end - start) / 2;

    while(start <= end){

        if(a[midElement] == key){
            return midElement;
        } else if(key > midElement){
            start = midElement + 1;
        } else{
            end = midElement - 1;
        }
        midElement = start + (end - start) / 2;
    }

    return -1;
}

int main()
{
    int array1[5] = {1, 2, 3, 4, 5};
    int key1 = 2;
    int ans1 = binarySearch(array1, 5, key1);

    cout << "TestCase 1" << endl;
    cout << "Index : " << ans1 << endl;
    cout << "Element : " << array1[ans1];
    return 0;
}