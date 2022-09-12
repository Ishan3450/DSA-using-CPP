#include<iostream>
#include <cctype>
using namespace std;

int getLength(string s){
    int count = 0;
    
    while(s[count] != '\0'){
        count ++;
    }
    
    return count;
}

char toLowerCase(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    } else{
        return ch - 'A' + 'a';
    }
}

bool checkPalindrome(string s){

    int start = 0;
    int end= getLength(s) - 1;

    while(start < end){
        if(isalnum(s[start]) == 0){
            start ++ ;
        } else if(isalnum(s[end]) == 0){
            end -- ;
        } else if(toLowerCase(s[start]) != toLowerCase(s[end])){
            return false;
        }else{
            start ++ ;
            end -- ;
        }
    }

    return true;

}
 
int main(){

    string msg = "Ishan";
    string msg2 = "Nayan";
    string msg3 = "ISHAN";
    string msg4 = "codingninjassajNiNgNidoc";

    string s1 = "N2 i&nJA?a& jnI2n";
    string s2 = "A1b22Ba";

    // testcase of VALID PALINDROM problem
    string s = "A man, a plan, a canal: Panama";

    cout << "checkPalindrome(ishan) --> " << checkPalindrome(msg) << endl;
    cout << "checkPalindrome(Nayan) --> " << checkPalindrome(msg2) << endl;
    cout << "checkPalindrome(ISHAN) --> " << checkPalindrome(msg3) << endl;
    cout << "checkPalindrome(codingninjassajNiNgNidoc) --> " << checkPalindrome(msg4) << endl;

    cout << checkPalindrome(s1) << endl;
    cout << checkPalindrome(s2) << endl;

    cout << endl;

    cout << "Special Case : " << checkPalindrome(s) << endl;
     
    return 0;
}

