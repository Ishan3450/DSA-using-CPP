#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void print(vector<int> v){
    for(auto i : v)
        cout << i << " ";
}

void moveZeroes(vector<int> v){

    for(int i = v.size()-1; i >= 0;i--){
            
        if(v[i] == 0){
            v.erase(v.begin() + i);
            v.push_back(0);
        }

    }

    print(v);
}

int main(){

    vector<int> v1 = {2,0,1,3,0,0,0};

    vector<int> v2 = {0,0,1};

    moveZeroes(v1);

    cout << endl;    

    moveZeroes(v2);

    return 0;
}
