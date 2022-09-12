 // stact is first in last out
 
 #include<iostream>
 #include<stack>

 using namespace std;

 int main(){

     stack<string> s;

     s.push("Ishan");
     s.push("Jigneshbhai");
     s.push("Jagani");

     cout << "Current Top Element : " << s.top() << endl;

     cout << "Top Element Deleted" << endl;
     s.pop();
     cout << "Current Top Element : " << s.top() << endl;


    return 0;
 }