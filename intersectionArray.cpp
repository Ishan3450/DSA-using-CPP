#include<iostream>
#include <bits/stdc++.h>

using namespace std;

void intersectionElements(int a[],int b[],int sizeOfA,int sizeOfB){

    for(int i=0; i<sizeOfA; i++){
        for(int j=0; j<sizeOfB; j++){
            if(a[i] == b[j]){
                cout << a[i] << " ";
                b[j] = INT_MIN;
                break;
            } 
        }

    }
}

int main(){
    
    int array1[7] = {1,2,2,2,2,3,4};
    int array2[4] = {2,2,3,3};

    intersectionElements(array1,array2,7,4);

    return 0;
}