#include<iostream>

using namespace std;

int findPivot(int a[],int size){
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

int doBinarySearch(int a[],int s,int e,int key){
    int start = s;
    int end = e;

    int midElement = start + (end - start) / 2;

    while(start <= end){
        if(key == a[midElement]){
            return midElement;
        } else if(key > a[midElement]){
            start = midElement + 1;
        } else{
            end = midElement - 1;
        }
        midElement = start + (end - start) / 2;
    }  

    return -1;
}

int findElementInRotatedAndSortedArray(int a[],int size,int target){
    int pivot = findPivot(a,size);

    if(target >= a[pivot] && target <= a[size-1]){
        return doBinarySearch(a,pivot,size-1,target);
    } else{
        return doBinarySearch(a,0,pivot-1,target);
    }
}

int main(){
    int array1[5] = {3,8,10,17,1};

    cout << findElementInRotatedAndSortedArray(array1,5,3);
    return 0;
}