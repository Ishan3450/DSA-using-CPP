#include<iostream>

using namespace std;

int sqrtInt(int x){
    int start = 1;
    int end = x - 1;

    long long int midElement = start + (end - start) / 2;

    int ans = -1;

    while(start <= end){
        long long int sqr = midElement * midElement;

        if(sqr == midElement){
            ans = midElement;
        }
        if(sqr > x){
            end = midElement - 1;
        }else{
            ans = midElement;
            start = midElement + 1;
        }

        midElement = start + (end - start) / 2;
    }

    return ans;
}

double morePrecision(int num, int numOfDigits, int tempSol){
    double factor = 1;
    double ans = tempSol;

     for(int i=0; i<numOfDigits; i++){
        factor = factor / 10;

        for(double j=ans; j*j<num; j = j + factor){
            ans = j;
        }
     }

     return ans;
}

int main(){

    int tempSol = sqrtInt(37);

    cout << morePrecision(37,3,tempSol);

    return 0;
}