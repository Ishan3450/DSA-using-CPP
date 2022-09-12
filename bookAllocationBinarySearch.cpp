#include<iostream>

using namespace std;

bool isPossible(int arr[],int numOfBooks,int numOfStudents,int mid){
    int studentCount = 1;
    int pagesSum = 0;

    for(int i=0;i<numOfBooks;i++){
        if(pagesSum + arr[i] <= mid){
            pagesSum += arr[i];
        } else{
            studentCount += 1;
            if(studentCount > numOfStudents){
                return false;
            }
            pagesSum = arr[i];
        }
    }

    return true;
}

int bookAllocation(int arr[], int numOfBooks, int numOfStudents){
    int start = 0;

    int sum = 0;
    // for sum
    for(int i=0; i<numOfBooks; i++){
        sum += arr[i];
    }
    int end = sum;
    int ans = -1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if(isPossible(arr,numOfBooks,numOfStudents,mid)){
            ans = mid;
            end = mid - 1;
        } else{
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }

    return ans;
    
}

int main(){

    int array1[4] = {10,20,30,40};
    int array2[4] = {12,34,67,90};

    cout << bookAllocation(array1,4,2) << endl; // for this ans will be 60
    cout << bookAllocation(array2,4,2) << endl; // for this ans will be 113

    return 0;
}