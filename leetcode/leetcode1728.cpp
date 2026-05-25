#include <iostream>
#include <set>
using namespace std;


int main()
{
    int count=0;
    int arr[]={1,2,3,4,5,3,9,1};
    int n = sizeof(arr)/sizeof(int);
    set<int> sum;
    int k=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]!=arr[j])
            {
                sum.insert(arr[i]);
            }
            else
            {
                sum.erase(arr[i]);
            }
        }
    }
    for(int i : sum)
    {
        k = i+k;
    }
    cout<<k;

}