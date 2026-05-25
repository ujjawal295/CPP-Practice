#include <iostream>
using namespace std;

void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++) 
    {
        cout<<i<<" Element :- "<< arr[i] <<endl;
    }
}
int linearSearch(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i;
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
    printArray(arr,n);
    int key ;
    cout<<"Enter No Want to search :- ";
    cin>>key;
    cout<<linearSearch(arr,n,key);

}