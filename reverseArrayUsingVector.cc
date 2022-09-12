#include<iostream>
#include<vector>

using namespace std;

void printVector(vector<int> v){
    for(auto i: v)
        cout << i << " ";

}

vector<int> reverse(vector<int> v){
    int start = 0;
    int end = v.size() - 1;

    while (start<end)
    {
        swap(v[start],v[end]);
        start ++;
        end --;
    }
     
    return v;
}

int main(){

    vector<int> v = {11,7,3,12,4};

    vector <int> ans = reverse(v);

    printVector(ans);
    return 0;
}