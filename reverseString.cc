#include<iostream>

using namespace std;

int getStringLength(char a[]){
    int count = 0;

    while (a[count] != '\0')
    {
        count ++;    
    }

    return count;
}

int main(){
    char name[20] = {'i','s','h','a','n'};

    int start = 0;
    int end = getStringLength(name) - 1;


    while(start <  end){
        swap(name[start],name[end]);
        start ++ ;
        end -- ;
    }
    cout << "Reversed String --> " << endl;
    cout << name;
    
    
    return 0;
}