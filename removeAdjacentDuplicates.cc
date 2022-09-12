#include<iostream>

using namespace std;

string removeDuplicates(string s) {

    string temp = "";

    for(char ch : s){
        if(ch == temp.back()){
            temp.pop_back();
        } else{
            temp.push_back(ch);
        }
    }
    
    return temp;
}

int main(){
    string s = "abbaca";
    string s2 = "azxxzy";

    cout << removeDuplicates(s) << endl; 
    cout << removeDuplicates(s2);
    return 0;
}