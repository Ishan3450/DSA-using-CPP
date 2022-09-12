#include<iostream>

using namespace std;

void printArray(int arr[],int size){
    for(int i=0;i<size;i++)
        cout << arr[i] << " ";
}

void insertionSort(int arr[],int size){
    int i=0;
    
    while(i<size){
        int j=i-1;
        int temp = arr[i];
        while(j>=0){

            if(arr[j] > temp)
                arr[j+1] = arr[j];
            else
                break;
            j--;
        }
        arr[j+1] = temp;
        i++;
    }

    printArray(arr,size);
}

int main(){

    int array[5] = {43,53,65,32,5};

    insertionSort(array,5);

    return 0;
}