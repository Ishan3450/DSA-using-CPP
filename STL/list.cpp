// list is made up of DOUBLY LINKED LIST which has two pointers one is front and second is next

#include<iostream>
#include<list>

using namespace std;

int main(){

    // declaring
    list<int> l = {0};

    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);

    for(int i:l)
        cout << i << " ";

    cout << endl;

    cout << "After Deleting :" ;

    // this will only delete the first iterator of the list
    l.erase(l.begin());

    for(int i:l)
        cout << i << " ";

     
    return 0;
}