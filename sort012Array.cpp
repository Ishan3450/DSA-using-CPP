#include<iostream>

using namespace std;

void printArray(int a[],int size){
    for(int i=0; i<size; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

void sort012Array(int a[],int size){
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(a[i] > a[j]){
                swap(a[i],a[j]);
            }
        }
    }
    printArray(a,size);
}


int main(){
    cout << "Testcase 1" << endl;
    int array1[9] = {0,2,2,1,0,1,1,0,2};
    sort012Array(array1,9);

    cout << "Testcase 2" << endl;
    int array2[17] = {0,2,2,1,0,1,1,0,2,0,1,2,0,1,1,2,2};
    sort012Array(array2,17);

    return 0;
}