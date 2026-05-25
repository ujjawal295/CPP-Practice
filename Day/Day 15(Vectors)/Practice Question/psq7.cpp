#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> vec,int target)
{
    int currsum=0;
    
    int start = 0;
    int end = vec.size()-1;
    vector<int> ans;

    while(start<end)
    {
        currsum=vec[start]+vec[end];
        if(target == currsum)
        {
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }
        else if(target < currsum)
        {
            end--;
        }
        else
        {
            start++;
        }
    }
    return ans;
}


int main()
{
    vector<int> vec={2,7,11,15};
    int target = 18;
    vector<int> ans = pairSum(vec,target); 
    cout<<ans[0]<<","<<ans[1];
}