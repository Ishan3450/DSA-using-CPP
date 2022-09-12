#include<iostream>

using namespace std;

string removeAllOccurrencesOfSubstring(string s,string part){
    // s is string and part is substring

    while (s.length() != 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part),part.length());
    }

    return s;
    
}

int main(){
    string s = "daabcbaabcbc";
    string part = "abc";

    cout << removeAllOccurrencesOfSubstring(s,part);

    return 0;
}