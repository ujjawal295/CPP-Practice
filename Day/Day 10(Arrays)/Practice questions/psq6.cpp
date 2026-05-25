#include <iostream>
using namespace std;

void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++) 
    {
        cout<<i<<" Element :- "<< arr[i] <<endl;
    }
}
int binarySearch(int arr[],int n,int key)
{
    int start=0;
    int end=n-1;

    while(start<=end)
    {
        int mid=(start+end)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if (arr[mid]<key)
        {
            start=mid+1;  
        }
        else if (arr[mid]>key)
        {
            end=mid-1;
        }   
    }
    return -1;    
}
int main()
{
    int s;
    cout<<"Size of array :- ";
    cin>>s;
    int arr[s];
    int n=sizeof(arr)/sizeof(int);

    int i=0;
    while(i<n)
    {
        int k;
        cout<<"Enter "<<i<<" element of array :- ";
        cin>>k;
        arr[i]=k;
        i++;
    }
    int key;
    cout<<"Search :- ";
    cin>>key;
    cout<<binarySearch(arr,n,key);

}