#include<iostream>
#include<bitset>
#include<string>

using namespace std;

int binaryShopping(string s,int p ){

    bitset<5> ans(s);

    cout << (ans << p) << endl; 
}

int main(){
    string s = "00011";
    string s2 = "01101";

    binaryShopping(s,5);
    binaryShopping(s2,3);
    return 0;

}