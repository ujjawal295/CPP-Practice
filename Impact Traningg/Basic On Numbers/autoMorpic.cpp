#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Entr Number -> ";
    cin>>n;

    int temp=n;

    int sqrt=temp*temp;

    int sum=0;
    int pro=sqrt;

    while(n>0)
    {
        int ld=n%10;
        int sld=pro%10;
        if(ld!=sld)
        {
            cout<<"Not Automorphic ";
            return 0;
        }
        n=n/10;
        pro=pro/10;
    }
    cout<<"Automorpic No";

 
}