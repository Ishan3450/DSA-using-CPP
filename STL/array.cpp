#include<iostream>
#include<array>

using namespace std;

int main(){

    // how to declare
    array<int,5> arr = {1,2,3,4,5};

    // to get the size of array
    cout << "Size of array arr -> " << arr.size() << endl;

    // to print
    for(int i=0;i<arr.size(); i++)
        cout << arr[i] << " ";
    
    cout << endl;

    // to get particular element from a particular index
    cout << "Element at 1st Position -> " << arr.at(arr.size() - 1) << endl;

    // to get the first and last element of the array
    cout << "First Element -> " << arr.front() << endl;
    cout << "Last Element -> " << arr.back() << endl;

    // to check weather the array is empty to not
    cout << "Is Empty -> " << arr.empty();
    


    return 0;
}