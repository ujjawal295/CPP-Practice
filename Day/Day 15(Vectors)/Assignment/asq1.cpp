#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int>pairSum(vector<int> arr)
{
    int mis,dul;
    sort(arr.begin(),arr.end());
    int n=arr.size();
    vector<int> ans((n+1),0);
    for(int i=0;i<arr.size();i++)
    {
        ans[arr[i]]++;
    }
    for(int i=1;i<=n;i++)
    {
        if(ans[i]==2) dul = i;
        else if(ans[i]==0) mis =i;
    }
    return {dul,mis};
}
int main()
{
    vector<int> arr={1,1};
    vector<int> ans = pairSum(arr);
    cout<<ans[0]<<","<<ans[1];
    
}