#include<iostream>

using namespace std;

int firstOccr(int a[],int size,int key){
    int start = 0, end = size-1;
    int ans = -1;

    int midElement = start + (end-start) / 2;

    while(start <= end){
        if(a[midElement] == key){
            ans = midElement;
            end = midElement-1;
        } else if(key > a[midElement]){
            start = midElement + 1;
        } else{
            end = midElement - 1;
        }

        midElement = start + (end-start) / 2;
    }

    return ans;
}

int lastOccr(int a[],int size, int key){
    int start = 0, end = size-1;
    int ans = -1;

    int midElement = start + (end-start) / 2;

    while(start <= end){
        if(a[midElement] == key){
            ans = midElement;
            start = midElement + 1;
        } else if(key > a[midElement]){
            start = midElement + 1;
        } else{
            end = midElement - 1;
        }

        midElement = start + (end-start) / 2;
    }

    return ans;

}

int main(){

    int array1[6] = {1,2,3,3,3,4};
    int key = 3;

    int firstAns = firstOccr(array1,6,key);
    int lastAns = lastOccr(array1,6,key);
    
    cout << "No of Occurrence is " << (lastAns - firstAns) + 1;
    return 0;
}