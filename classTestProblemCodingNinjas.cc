#include<iostream>
#include<vector>

using namespace std;

// to sort the given marks array
vector<int> sortArray(vector<int> a,int numOfStu){
    for(int i = 0; i<numOfStu; i++){

        for(int j = numOfStu - 1; j>=i; j--){
            if(a[i] < a[j]){
                swap(a[i],a[j]);
            }
        }
    }

    return a;
}

int classTest(int n, vector<int> &a, int k) {
    vector<int> ans = sortArray(a,n);
    
    return ans[k-1];
}


int main(){

    vector<int> v1 = {3,4,4};
    vector<int> v2= {1,1,2,2};

    int marksOfV1 = classTest(v1.size(),v1,1);

    cout << marksOfV1 << endl;
    
    return 0;
}
