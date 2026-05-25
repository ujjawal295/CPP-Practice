#include <iostream>
using namespace std;

void diagonalMatrix(int arr[][3],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                sum+=arr[i][j];
            }
            else if(j==n-i-1)
            {
                sum+=arr[i][j];
            }   
        }
    }
    cout <<"Sum of diagonal elements are :- "<<sum;
}
int main()
{
    int arr[3][3] = {{1,3,4},
                    {2,4,5},
                    {8,2,5}};
    diagonalMatrix(arr,3);
}