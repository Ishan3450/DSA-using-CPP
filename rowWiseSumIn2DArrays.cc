#include<iostream>

using namespace std;

int main(){

    int arr[3][3];

    for(int i = 0;i< 3;i++){
        for(int j = 0; j<3; j++){
            cin >> arr[i][j];
        }
    }

    // row wise
    for(int i = 0;i< 3;i++){
        int sum = 0;

        for(int j = 0; j<3; j++){
            sum += arr[i][j];
        }
        cout << "Sum of Row " << i << " --> " << sum << endl;
    }

    cout << endl;

    // column wise
    for(int i = 0;i< 3;i++){
        int sum = 0;

        for(int j = 0; j<3; j++){
            sum += arr[j][i];
        }
        cout << "Sum of Column " << i << " --> " << sum << endl;
    }

    return 0;
}