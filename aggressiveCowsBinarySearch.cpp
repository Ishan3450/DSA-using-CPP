#include<iostream>
#include <bits/stdc++.h>

using namespace std;

// int sort(int arr[],int size){
//     int start = 0;
//     int end = size-1;

//     int mid = start + (end - start) / 2;

//     while(start <= end){
//         if(arr[start] > arr[end]){
//             swap(arr[start],arr[end]);
//             start++;
//             end--;
//         } else if(arr[start] < arr[end]){
//             start++;
//         } else if(arr[end] > arr[start]){
//             end--;
//         }
//             mid = start + (end - start) / 2;
//     }

// }


// for finding max  from array
int max(int arr[],int size){
    int max = 0;

    for(int i=0;i<size;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    return max;
}

bool isPossible(int arr[],int size,int numOfCows,int mid){
    int cowsCount = 1;
    int lastPosition = arr[0];

    for(int i=0;i<size;i++){
        if(arr[i] - lastPosition >= mid){
            // here cowscount is increased for placement of cows
            cowsCount ++;
            if(cowsCount == numOfCows){
                return true;
            }
            lastPosition = arr[i];
        }
    }
    return false;
}

int aggressiveCows(int arr[],int size,int numOfCows){
    int start = 0;
    int maxNum = max(arr,size);
    int end = maxNum;
    int ans = -1;
    int mid = start + (end - start) / 2;

    // sort(arr,size);

    while(start <= end){
        if(isPossible(arr,size,numOfCows,mid)){
            ans = mid;
            start = mid + 1;
        }else{
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }

    return ans;

}

int main(){

    int array1[5] = {1,2,3,4,6};
    // int array2[5] = {1,4,2,3,6};

    cout << aggressiveCows(array1,5,2); 
    return 0;
}