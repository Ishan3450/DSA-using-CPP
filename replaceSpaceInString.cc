#include<iostream>

using namespace std;

string replaceSpace(string s){
    string temp = "";

    for(int i = 0; i< s.length(); i++){
        if(s[i] == 32){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        } else{
            temp.push_back(s[i]);
        }
    }

    return temp;
}

int main(){

    string s = "My name is ishan";

    cout << replaceSpace(s) ;

    return 0;
}