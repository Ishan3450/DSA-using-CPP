#include<iostream>

using namespace std;

int findUniqueElement(int arr[],int size){
    int ans=0;

    for(int i=0; i<size; i++){
        ans = ans ^ arr[i];   
    }

    return ans;
}

int main(){
    int array1[6] = {1,2,3,2,1};
    int ans = findUniqueElement(array1,6);
    cout << ans ;

    return 0;
}