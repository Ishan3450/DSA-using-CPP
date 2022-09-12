#include<iostream>

using namespace std;

int leftOccurr(int a[],int size,int key){
    int start = 0;
    int end = size-1;

    int midElement = start + (end - start) / 2 ;
    int ans = -1;
    while(start <= end){
        if(a[midElement] == key){
            ans = midElement;
            end = midElement - 1;
        } else if(key > a[midElement]){
            start = midElement + 1;
        } else{
            end = midElement - 1;
        }

        midElement = start + (end - start) / 2;
    }

    return ans;
}   

int rightOccurr(int a[],int size,int key){
    int start = 0;
    int end = size - 1;
    int ans = -1;

    int midElement = start + (end - start) / 2;

    while(start <= end){
        if(a[midElement] == key){
            ans = midElement;
            start = midElement + 1;
        } else if(key > a[midElement]){
            start = midElement + 1;
        } else{
            end = midElement - 1;
        }

        midElement = start + (end - start) / 2;
    }

    return ans;
}

int main(){
    int array1[11] = {1,2,3,3,3,3,3,4,5,6,7};
    int key = 3;

    cout << "Left most occr of 3 is : " << leftOccurr(array1,11,key) << endl;
    cout << "Right most occr of 3 is : " << rightOccurr(array1,11,key);


    return 0;
}