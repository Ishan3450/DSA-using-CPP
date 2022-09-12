#include<iostream>

using namespace std;


void swapAlternate(int arr[],int size){
    int start=0;

    while(start < (size-1)){
        swap(arr[start],arr[start+1]);
        start += 2;
    }

    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    
}


int main(){

    int array1[6] = {1,2,3,4,5,6};
    swapAlternate(array1,6);

    cout << endl << endl;

    int array2[7] = {1,2,3,4,5,6,7};
    swapAlternate(array2,7);


    return 0;
}