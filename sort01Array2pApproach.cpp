#include<iostream>

using namespace std;

// Two Pointer Approach
void printArray(int a[],int size){
    for(int i=0;i<size;i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

void sort01Array(int a[],int size){
    int i=0;
    int j=size-1;

    while(i<=j){
        if((a[i] == 1) && (a[j] == 0)){
            swap(a[i],a[j]);
            i++;
            j--;
        } else if(a[i] == 0){
            i++;
        } else if(a[j] == 1){
            j--;
        }
    }

    printArray(a,size);
}

int main(){
    int array1[10] = {0,0,0,0,0,1,1,1,1,1};
    sort01Array(array1,10);
    return 0;
}