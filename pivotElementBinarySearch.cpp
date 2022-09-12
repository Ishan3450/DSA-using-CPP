// Pivot Element is the minimum element in an array.w

#include<iostream>

using namespace std;

int pivotElement(int a[],int size){
    int start = 0;
    int end = size - 1;

    int midElement = start + (end - start) / 2;

    while(start < end){
        if(a[midElement] > a[0]){
            start = midElement + 1;
        } else{
            end = midElement;
        }

        midElement = start + (end - start) / 2;
    }
    return start;
}

int main(){

    int array1[5] = {8,10,17,1,3};
    cout << "Pivot Element is " << pivotElement(array1,5) << endl;
    cout << "Pivot Element is " << array1[pivotElement(array1,5)] << endl;

    int array2[5] = {3,8,10,17,1};
    cout << "Pivot Element is " << pivotElement(array2,5) << endl;
    cout << "Pivot Element is " << array2[pivotElement(array2,5)] << endl;

    return 0;
}
