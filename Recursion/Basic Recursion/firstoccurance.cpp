#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int i, int tar)
{
    if(i == n)
        return -1;
    if (arr[i] == tar)
        return i;
    return firstOcc(arr, n, i+1, tar);
}
int main()
{
   int arr1[]={2,4,5,5,5,8,9};
   int n = 7,i = 0,tar = 7;
   cout<<firstOcc(arr1, n, 0, tar);
}