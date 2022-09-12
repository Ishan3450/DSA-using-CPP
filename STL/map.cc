#include<iostream>
#include<map>

using namespace std;

int main(){

    // declaration
    map<int,string> info;

    // Two type to assing values and keys
        // Type 1
    info[1] = "Ishan";
    info[2] = "Jagani";
    info[45] = "Suryaa";
    info[0] = "Firozz";

        // Type 2
    info.insert( {3,"Meri Power ko mat bhul"} );

    // printing
    for(auto m:info)
        cout << m.first << " " << m.second << endl;
    
    cout << endl;

    // finding
    cout << "isFound(2) --> " << info.count(2) << endl;
    cout << "isFound(-1) --> " << info.count(-1) << endl;

    cout << endl;

    // to delete particular element
    info.erase(0);

    for(auto m: info)
        cout << m.first << " " << m.second << endl;

    cout << endl;
    // to get the iterator and run the loop from the found iterator to the end
    auto itr = info.find(3);

    for(auto i = itr;i!= info.end();i++)
        cout << (*i).first << " " << (*i).second << endl;

    

    return 0;
}