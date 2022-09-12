#include<iostream>
#include<vector>

using namespace std;

void printVector(vector<int> v){
    for(auto i : v)
        cout << i << " ";
}

vector<int> reverseVector(vector<int> v,int positionToReverse){
    int start = positionToReverse  + 1;
    int end = v.size() - 1;

    while (start <= end)
    {
        swap(v[start],v[end]);
        start ++ ; 
        end -- ;
    }

    return v;
}

int main(){

    vector<int> v = {1,2,3,4,5,6};

    vector<int> ans = reverseVector(v,3);

    printVector(ans);

    return 0;
}