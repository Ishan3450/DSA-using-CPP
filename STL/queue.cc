// queue is first in first out

#include<iostream>
#include<queue>

using namespace std;

int main(){

    queue<string> q;

    q.push("Ishan");
    q.push("Jagani");

    cout << "Current top Element : " << q.front() << endl;

    q.pop();

    cout << "After Popping Out"  << endl;
    cout << "Current top Element : " << q.front() << endl;
    
    return 0;
}