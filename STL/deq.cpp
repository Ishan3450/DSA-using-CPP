// Deque is a DOUBLE ENDED QUEUE we can insert element from both end either from fornt or end
    // same as we can delete elements from either front or back end

#include<iostream>
#include<deque>

using namespace std;

int main(){

    // declaring
    deque<int> d;

    // inserting
    d.push_back(1);
    d.push_back(2);

    // printing
    cout << "Before Deleting : " << " ";
    for(int i:d)
        cout << i << " ";
    
    cout << endl;

    d.pop_back();

    // after Deleting
    cout << "After Deleting : " << " ";
    for(int i:d)
        cout << i << " ";

    cout << endl;

    cout << "Push Front : " << " ";
    d.push_front(0);
    d.push_front(-1);

    for(int i:d)
        cout << i << " ";
    cout << endl;

    // deleting from front
    d.pop_front();

    cout << "After Popping element from Front --> " ;
    for(int i:d)
        cout << i << " ";

    // To Delete the DEQUE
    cout << endl;

    // in erase function we have to give the range or starting and ending index otherwise it will give error
    d.erase(d.begin(),d.end());
    for(int i:d)
        cout << i << " ";
    cout << "Deleted " << endl;
    

    return 0;
}