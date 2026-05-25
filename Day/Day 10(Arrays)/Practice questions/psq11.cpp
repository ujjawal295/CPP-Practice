#include <iostream>

using namespace std;

void maxWaterTrap(int *arr,int n)
{
    // left side max value....
    int leftArr[10000];
    int left=INT_MIN;
    for(int i=0;i<n;i++)
    {
        leftArr[i]=max(arr[i],left);
        left=leftArr[i];
        cout<<leftArr[i];
    }
    cout<<endl;


    // Right side max value..
    int rightArr[10000];
    int right=INT_MIN;
    for(int i=n-1;i>=0;i--)
    {
        right=max(right,arr[i]);
        rightArr[i]=right;
        cout<<rightArr[i];
    }
    cout<<endl;


    // minimum value from left and right.
    int minTrap[10000];
    int final=0;
    for(int i=0;i<n;i++)
    {
        minTrap[i]=min(leftArr[i],rightArr[i]);
        cout<<"|"<<minTrap[i];
        final+=(minTrap[i]-arr[i]);
    }
    if(final>0)
        cout<<final;
    else
        cout<<"water can't be trapped";
}

int main()
{
    int size[]={1,9,6,2,5,7,6,3};
    int n=sizeof(size)/sizeof(int);
    maxWaterTrap(size,n);
}