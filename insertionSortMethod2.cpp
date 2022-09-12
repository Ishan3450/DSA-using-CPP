/* This is the second method of insetion sort with using 
inbuilt swap function and without using extra temp variable */

#include<iostream>

using namespace std;

void insertionSort(int arr[],int size){
    int i=0;

    while(i<size){
        int j = i-1;

        while(j>=0){ 
            if(arr[j] > arr[i])
                swap(arr[j],arr[j-1]);
            else
                break;

            j--;
        }
        i++;
    }

    for(int i=0;i<size;i++)
        cout << arr[i] << " ";
}

int main(){

    int array[5] = {1,2,3,4,5};
    insertionSort(array,5);

    return 0;
}