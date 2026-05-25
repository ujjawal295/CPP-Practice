#include <iostream>
using namespace std;

void sumOf2nd(int arr[][3],int n ,int m)
{
    int sum=0;
    int i=1;
    int j=0;
    while(i==1 && j<m)
    {
        sum=sum+arr[i][j];
        j++;
        cout<<"Uj";
    }
    cout<<"Sum of 2nd row is :- "<<sum;
}

int main()
{
    int arr[3][3]={{1,3,5},{5,2,9},{2,9,2}};
    sumOf2nd(arr,3,3);
}