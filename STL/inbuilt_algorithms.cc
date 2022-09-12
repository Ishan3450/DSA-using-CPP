#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){

    vector<int> v ;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    // to do binary search operation
    cout << "Finding 5 --> " << binary_search(v.begin(),v.end(),5) << endl;

    // to get the max of two
    int a = 10,b = 1;

    cout << "Max --> " << max(a,b) << endl;

    // to swap 
    swap(a,b);

    cout << "A --> " << a << " B --> " << b << endl;

    // to reverse
    string name = "Ishan";
    reverse(name.begin(),name.end());
    cout << "Reversed name --> " << name << endl;

    // to rotate the vector

    rotate(v.begin(),v.begin() + 1, v.end());
    cout << "After rotating vector --> " << endl;
    for(auto i : v)
        cout << i << " ";

    cout << endl;

    cout << "After Sorting --> " << endl;
    // to sort
    sort(v.begin(),v.end());
    for(auto i : v)
        cout << i << " ";



    return 0;
}