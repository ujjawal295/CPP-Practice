#include <iostream>
using namespace std;

void printArray(int arr[],int n)
{
    cout<<"\"Entered array\"";
    for(int i=0;i<n;i++) 
    {
        cout<<"|"<<arr[i]<<"| ";
    }
    cout<<endl;
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
void reverseArray(int arr[],int n)
{
    int arr2[n];
    cout<<"\"Reversed array\"";
    for(int i=n-1;i>(-1);i--)
    {
        cout<<"|"<<arr[i]<<"| ";
    }
    cout<<endl;
}
void reverseArray2(int arr[],int n)
{
    for(int i=0;i<(n/2);i++)
    {
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;  
    }
    printArray(arr,n);

}
void reverseArray3(int arr[],int n)
{
    int start=0, end= n-1;
    for(int i=0;start<=end;i++)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    printArray(arr,n);

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
    reverseArray3(arr ,n);
    
}