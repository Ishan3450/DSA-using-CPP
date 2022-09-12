#include<iostream>

using namespace std;

char getMaximumOccurrence(string s){

    // alphabet array 0 stands for a ..... 25 stands for z
    int arr[26] = {0};

    for(int i=0; i<s.length(); i++){
        // to get the single char of string
        char ch = s[i];

        int number = 0;

        // for lowercase
        if(ch >= 'a' && ch <= 'z'){
            number = ch - 'a';
        } else{ // for uppercase
            number = ch - 'A';
        }

        // to get the count of the char
        arr[number]++;
    }

    int max = -1,ans = 0;
    for(int i=0; i<26; i++){
        if(max < arr[i]){
            ans = i;
            max = arr[i];
        }
    }

    return 'a' + ans;
}

int main(){

    string s = "testsample";

    cout << getMaximumOccurrence(s);

    

    return 0;
}