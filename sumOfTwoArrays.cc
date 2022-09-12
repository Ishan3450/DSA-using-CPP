// own logic (Different from the tutorial of LB)

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void printArray(vector<int> v){
    for(auto i : v)
        cout << i << " ";
}

vector<int> getArray(int num){
    
    int n = num;
    vector<int> ans ;

    while (n > 0)
    {
        int lastDigit = n % 10;
        n = n / 10;

        ans.push_back(lastDigit);
    }

    return ans;
}


int convertArray(vector<int> arr){
    int num = 0;

    for(auto i : arr){
        num = num + i ;
        num *= 10;
    }

    num = num / 10;

    return num;
}



int main(){

    vector<int> array1 = {1,2,3,4};
    vector<int> array2 = {6};

    int numOfA1 = convertArray(array1);
    int numOfA2 = convertArray(array2);

    int sum = numOfA1 + numOfA2;

    vector<int> v = getArray(sum);
    
    reverse(v.begin(),v.end());

    printArray(v);

    return 0;
}