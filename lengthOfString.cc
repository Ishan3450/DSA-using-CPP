#include<iostream>

using namespace std;

int main(){
    char name[20] = {'i','s','h','a','n','n','n','n','n','n','n'};
    int count = 0;

    while (name[count] != '\0')
    {
        count ++;    
    }

    cout << "Length of string is " << count ;
    
    return 0;
}