#include<iostream>

using namespace std;

int main(){
    
    char c[20];
    string s;
    
    // this is for char

    /* 1st param is for the name of variable
        2nd param is for the size 
        3rd param is called custom delimeter which is used to stop the input at that 
        specified char or special symbol
    */

    cout << "Enter your name : ";
    cin.getline(c,20, '#');

    cout << c << " ";


    // for string

    // cout << "Enter your surname : " ;
    // getline(cin,s);

    // cout << s << endl;

    return 0;
}