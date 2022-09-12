#include<iostream>

using namespace std;

bool isPossible(int arr[],int numOfBoards, int numOfPainters, int mid){
    int paintersCount = 1;
    int boardUnits = 0;

    for(int i=0;i<numOfBoards;i++){
        if(boardUnits + arr[i] <= mid){
            boardUnits += arr[i];
        }else{
            paintersCount ++;
            if(paintersCount > numOfPainters){
                return false;
            }
            boardUnits = arr[i];
        }
    }
    return true;
}

int paintersPartition(int arr[],int numOfBoards, int numOfPainters){
    int start = 0;

    int sum = -1;
    // for sum
    for(int i=0;i<numOfBoards;i++){
        sum += arr[i];
    }
    int end = sum;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while(start <= end){
        if(isPossible(arr,numOfBoards,numOfPainters,mid)){
            ans = mid;
            end = mid - 1;
        }else{
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
}

int main(){

    int array1[4] ={5,5,5,5};

    cout << paintersPartition(array1,4,2);
    return 0;
}