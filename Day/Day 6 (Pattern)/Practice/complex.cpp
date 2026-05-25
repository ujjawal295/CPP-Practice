#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter pattern size :- ";
    cin>>n;
    int k=1;
    
    for(int i=1;i<=n;i++)
    {
        int l=k;
        int d=5;
        
        for(int m=1;m<=i;m++)
        {
            cout<<l;
            // l=l-d;
            // d--;
        }
        cout<<endl;
        k=k+(6-i);
    }
}
