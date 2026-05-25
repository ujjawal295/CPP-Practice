#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Entr No :- ";
    cin>>n;

    int temp=n;

    int dig=0;
    int sum=0;

    while(n>0)
    {
        int fact = 1;
        dig=n%10;
        //cout<<dig<<endl;
        for(int i=1;i<=dig;i++)
        {
            fact=fact*i;
        }
        //cout<<fact<<" "<<n<<endl;
        n=n/10;
        sum=fact+sum  ;
    }
     if(sum==temp)
         cout<<"Strong No";
     else
         cout<<"Normal No";
} 