#include<iostream>

using namespace std;

int peakElement(int a[],int size){
    int start = 0;
    int end = size-1;

    int midElement = start + (end - start) / 2;

    while(start < end){
        if(a[midElement] < a[midElement + 1]){
            start = midElement + 1;

        } else { 
            end = midElement;
        }

        midElement = start + (end - start) / 2;
    }
    return start;
}

int main(){

    int array1[4] = {5,10,20,15};
    cout << "Peak element of Array 1 is " << array1[peakElement(array1,4)];
    return 0;
}