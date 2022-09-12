#include<iostream>
#include<vector>

using namespace std;

int main(){

    // to create Vector when we did not know the size of vector
    vector<int> v;

    // declaring vector of a particular size
        // here first parameter is of the size of vector and 
        // and second parameter is the default elements of the vector
        // so vector will look like {1,1,1,1,1}
    vector<int> temp(5,1);

    // to copy a vector to another vector
    vector<int> combine(temp);

    cout << "Vector temp : " ;
    for(int i:temp)
        cout << i << " ";
    
    cout << endl;

    cout << "Vector combine : " ;
    for(int i:combine)
        cout << i << " ";

    cout << endl;

    // to insert Elements in Vector
    v.push_back(2);
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);    

    // to get the size and capacity of the Vector

        // capacity will return the size of the Vector
    cout << "Capacity -> " << v.capacity() << endl;

        // size will return the num of elements in the Vector
    cout << "Size or NumOfElements -> " << v.size() << endl;

    // to print Vector
    for(int i:v)
        cout << i << " ";

    // to get particular element from a particular index
    cout << "Element at 1st Position -> " << v.at(v.size() - 1) << endl;

    // to get the first and last element of the vector
    cout << "First Element -> " << v.front() << endl;
    cout << "Last Element -> " << v.back() << endl;

    // to check weather the vector is empty to not
    cout << "Is Empty -> " << v.empty() << endl;

    // to delete Elements in Vector
    
    cout << "Before Pop ->" ;
    for(int i:v){
        cout << i << " ";
    }

    cout << endl;

    v.pop_back();
    cout << "After Pop ->";
    for(int i:v){
        cout << i << " ";
    }

    cout << endl;

    /* delete operation will clear only the elements of the vector as
     ONLY SIZE WILL BE CLEARED NOT CAPACITY , CAPACITY WILL REMAIN THE SAME */

    cout << "Before Clear Size --> " << v.size() << endl;
    cout << "Before Clear Capacity --> " << v.capacity() << endl;
    v.clear();
    cout << "After Clear Size --> " << v.size() << endl;
    cout << "After Clear Capacity --> " << v.capacity() << endl;


    return 0;
}