#include<iostream>
#include<string>

using namespace std;

string reverseWord(string s,int startIndex, int endIndex){
    
    string str ;

    // to get the particular word
    for(int i = startIndex; i<endIndex; i++){
        str.push_back(s[i]);
    }

    int start = 0;
    int end = str.length() - 1;

    while(start <= end){
        swap(str[start],str[end]);
        start ++ ;
        end -- ;
    }
    
    // cout << str << endl;
    str.push_back(' ');

    
    
    // cout << "start : " << startIndex << " End : " << endIndex << endl;
    // for(int i = startIndex; i <= endIndex; i++){
    //     cout << s[i] ;
    // }
    // cout << endl;

    return str;
}

string reverse(string s){
    string str;
    int temp = 0;
    for(int i=0;i<s.length();i++){
        if(s[i] == 32){
            str.append(reverseWord(s,temp,i));
            temp = i + 1;
        } else if( i == s.length() - 1){
           
            str.append(reverseWord(s,temp,i + 1));
            temp = i + 1;

        }
    }

    return str;
}

int main(){
    string s = "My name is ishan";
    string s2 = "Hello how are you i am nayan and my name is a Palindrome Word !?";

    cout << reverse(s) << endl;
    cout << reverse(s2) << endl;
    return 0;
}