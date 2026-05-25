#include<iostream>
#include<vector>
#include<algorithm>  // Include the algorithm library
using namespace std;

int main(){
    vector<int>num = {4,-5,1,7,-1,8,-8};
    int currSum = 0;
    int maxSum = INT_MIN;  // Initialize maxSum to the smallest possible integer value

    for(int value : num){
        currSum += value;
        maxSum = max(currSum, maxSum);

        if (currSum < 0)
        {
            currSum = 0;
        }
    }
    cout<<"Max Sub Arrays: "<<maxSum<<endl;
    return 0;
}