#include<iostream>

using namespace std;

int main(){

    // declaring 2 dimensional array
    int arr[3][4];

    
    // storing values 

    // for row
    for(int i = 0; i<3; i++){
        // for col
        for(int j = 0; j < 4; j++){
            cin >> arr[i][j];
        }
    }

    cout << endl;

    // printing row by row
    cout << "Printing row by row --> " << endl;

    // for row
    for(int i = 0; i<3; i++){
        // for col
        for(int j = 0; j < 4; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

// printing col by col
    cout << "Printing col by col --> " << endl;
    
    // for row
    for(int i = 0; i<4; i++){
        // for col
        for(int j = 0; j < 3; j++){
            cout << arr[j][i] << " "; 
        }
        cout << endl;
    }
    

    return 0;
}