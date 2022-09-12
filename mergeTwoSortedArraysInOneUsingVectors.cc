#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print(vector<int> v)
{
    for (auto i : v)
        cout << i << " ";
}

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

    // to create the spaces with 0
    for(int i = 0;i < n; i++)
        nums1.push_back(0);

    int j = 0;

    for(int i = 0; i<(m+n); i++){
        if(nums1[i] == 0 || nums1[i] < 0){
            nums1[i] = nums2[j];
            j++;
        }
    }

    sort(nums1.begin(),nums1.end());

    print(nums1);
}

int main()
{

    vector<int> v1 = {1,2,3};
    vector<int> v2 = {2,5,6};


    // this code will not work with below test case
    // vector<int> v1 = {-1, 0, 0, 3, 3, 3};
    // vector<int> v2 = {1, 2, 2};

    merge(v1, v1.size(), v2, v2.size());

    return 0;
}

// [-1,0,0,3,3,3,0,0,0]
// 6
// [1,2,2]
// 3
