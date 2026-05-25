#include <iostream>
using namespace std;

int main()
{
    int arr1[]={3,4,1,2,4};
    int n1=sizeof(arr1)/sizeof(int);

    int arr2[]={3,4,2,4,0};
    int n2=sizeof(arr2)/sizeof(int);

    int sum1=0,sum2=0;

    if(n1!=n2)
    {
        cout<<"Both arrays are different";
        return 0;  
    }
    else
    {  
        for(int i=0;i<n1;i++)
        {
            arr1[arr1[i]]=0;
            sum1=arr1[arr1[i]]+sum1;
            arr2[arr2[i]]=0;
            sum2=arr2[arr2[i]]+sum2;
            
        }
    }

    if(sum1==sum2)
    {
        cout<<"Both array are same";
    }
    else{
        cout<<"Arrays are Different";
    }
}