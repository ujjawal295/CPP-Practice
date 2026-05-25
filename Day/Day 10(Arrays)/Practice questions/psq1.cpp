#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Size Of Array :- ";
    cin>>n;
    int marks[n];
    int len=sizeof(marks) / sizeof(int);
    for(int i=0;i<len;i++)
    {
        int j;
        cout<<"Enter "<< i << " element :- ";
        cin>>j;
        marks[i]=j;
    }
    int i=0;
    cout<<"\"Entered array\""<<endl;
    while(i<len)
    {
        
        cout<<marks[i]<<endl;
        i++;
    }
}