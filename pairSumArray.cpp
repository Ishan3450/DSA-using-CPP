#include<iostream>

using namespace std;

// Done without the use of vector 

void pairSumArray(int arr[],int size,int num){

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if((arr[i] + arr[j]) == num){
                // To make it in sorted manner
                if(arr[i] < arr[j]){
                    cout << arr[i] << " " << arr[j] << endl;
                } else{
                    cout << arr[j] << " " << arr[i] << endl;
                }
            }
        }

    }
}

int main(){

    cout << "Testcase 1" << endl;
    int array1[5] = {1,2,3,4,5};
    int num = 5;
    pairSumArray(array1,5,num);

    cout << endl;
    cout << "Testcase 2" << endl;
    int array2[5] = {2,-3,3,3,-2};
    int num1 = 0;
    pairSumArray(array2,5,num1);


    return 0;
}