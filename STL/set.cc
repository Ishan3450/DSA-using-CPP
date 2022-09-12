#include<iostream>
#include<set>

using namespace std;

int main(){

    // set will take repeated letter only single single time

    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(1);
    s.insert(0);
    s.insert(4);
    s.insert(6);
    s.insert(0);

    for(auto i:s)
        cout << i << " ";
    
    set<int>::iterator it = s.begin();

    cout << endl;

    s.erase(it);

    for(auto i:s)
        cout << i << " ";
    cout << endl;
    // count will tell you that the particular element is present or not in set
    cout << "isPresent(5) --> " << s.count(5) << endl;
    cout << "isPresent(7) --> " << s.count(7) << endl;
    cout << "isPresent(0) --> " << s.count(0) << endl;
    cout << "isPresent(1) --> " << s.count(1) << endl;

    // find will give the reference of the toFind number
    set<int>::iterator itr = s.find(5);

    cout << "isFound(5) --> " << *itr << endl;
    
    
    return 0;
}
