#include<iostream>
using namespace std;

int main()
{
    int i=0;
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
    cout<<"\"Entered array\""<<endl;
   
    while(i<len)
    {
        
        cout<<marks[i]<<endl;
        i++;
    }
    
    cout<<"\"Maximum Element\""<<endl;
    int max=marks[0];
    int min=marks[0];
    i=0;
    while(i<len)
    {
        if(marks[i]>max)
        {
            max=marks[i];
        }
        if(marks[i]<min)
        {
            min=marks[i];
        }

        i++;
    }
    cout<<"Maximum element :- "<<max<<endl;
    cout<<"Minimum element :- "<<min;

}