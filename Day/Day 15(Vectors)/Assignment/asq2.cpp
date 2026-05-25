#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum (vector<int> arr ,int target)
{

    int n=arr.size();
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int currSum=arr[i]+arr[j];
            if(currSum==target)
            {
                cout << i<<",";
                
                cout<< j;
            }
        }
    }
    return {-1,-1};
}
int main()
{
    vector<int> arr={3,3};
    int target = 6;
    vector<int> ans = twoSum(arr,target);
    

}