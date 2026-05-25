#include <iostream>
using namespace std;

void printArr(int arr[],int n)
{
    int i=0;
    while(i<n)
    {
        cout<<arr[i]<<" ";
        i++;
    }
    cout<<endl;
}

void backtrack(int arr[],int n,int i)
{
    if(i==n)
    {
        printArr(arr,n);
        return;
    }
    arr[i]=i+1;
    backtrack(arr,n,i+1);
    arr[i]-=2;

}

int main()
{
    int arr[5]={0};
    int n= sizeof(arr)/sizeof(int);
    backtrack(arr,n,0);
    printArr(arr,n);

}