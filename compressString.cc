#include<iostream>
#include<vector>

using namespace std;

int compress(vector<char>& chars) {
    int i = 0;
    int ansIndex = 0;
    int n = chars.size();

    while(i < n){
        int j = i + 1;

        while (j < n && chars[i] == chars[j])
        {
            j ++ ;
        }
        chars[ansIndex++] = chars[i];

        int count = j - i;
        
        if(count > 1){
            string c = to_string(count);

            for(auto i : c){
                chars[ansIndex++] = i;
            }
        }
        i = j;
    }
    return ansIndex;
}

int main(){

    vector<char> chars = {'a','a','b','c','c','c','d','d'};
    // test case will only run in the website
    // link : https://leetcode.com/problems/string-compression/

    return 0;
}