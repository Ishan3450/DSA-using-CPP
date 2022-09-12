#include<iostream>
#include<vector>

using namespace std;

void printVector(vector<int> v){
    for(auto i : v)
        cout << i << " ";
}

vector<int> merge(vector<int> v1,vector<int> v2){
    int i = 0; // i corresponds for v1
    int j = 0; // j corresponds for v2

    vector<int> mergedVector;

    while(i < v1.size() && j < v2.size()){
        if(v1[i] < v2[j]){
            mergedVector.push_back(v1[i]);
            i++;
        }else{
            mergedVector.push_back(v2[j]);
            j++;
        }
    }

    // below two loops are used to get the remaining elements of vectors having different sizes

    while (i< v1.size())
    {
        mergedVector.push_back(v1[i]);
        i++;
    }

    while (j < v2.size())
    {
        mergedVector.push_back(v2[j]);
        j++;
    }

    return mergedVector;
    
    
}

int main(){
    vector<int> v1 = {1,3,5,7,9};
    vector<int> v2 = {2,4,6,8,10};

    vector<int> ans = merge(v1,v2);

    printVector(ans);

    return 0;
}