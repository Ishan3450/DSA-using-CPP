// solution : 
    // first find the dstance from start to <= end
    // find the min from start and end
    // ans multiply the distance apart to the min
// TODO : to change the program using above solution



#include<iostream>
#include<vector>

using namespace std;

int findDistanceApart(int start, int end){
    int count = 0;
    for(int i = start; i<end ; i++){
        count ++ ;
    }
    return count;
}

int maxArea(vector<int>& height) {
    int start = 0;
    int end = height.size() - 1;

    if(height.size() <= 3){
        // while(true){
        //     if(height[end - 1] > height[end])
        //         end -- ;
        //     else
        //         break;
        // }

        goto continueProgram;
    }

    // to get the starting and ending containers
    while(true){
        if(height[start + 1] > height[start])
            start ++ ;
        else
            break;
    }
    while(true){
        if(height[end - 1] > height[end])
            end -- ;
        else
            break;
    }

    continueProgram:

    // cout << "Start : " << start << endl;
    // cout << "End : " << end << endl;

    int distanceApart = findDistanceApart(start,end);
    
    // cout << "Distance Apart : " << distanceApart << endl;

    int minimum = min(height[start],height[end]);
    
    // cout << "Minimum : " << minimum << endl;


    return minimum*distanceApart;
}

int main(){
    // testcase 1
    // vector<int> height = {1,8,6,2,5,4,8,3,7}; 

    // testcase 2
    // vector<int> height = {1,1};

    // testcase 3
    // vector<int> height = {3, 1, 2, 4, 5};

    // testcase 4
    vector<int> height = {1,2,1};

    cout << maxArea(height);


    return 0;
}