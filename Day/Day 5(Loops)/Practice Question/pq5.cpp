#include <iostream>
using namespace std;
int main()
{
    int n;
    while(true)
    {
        cout<<"Enter number which is multiple of 10 :- ";
        cin>>n;
        if(n%10==0)
        {
            cout<<"Multiple of Found"<<endl;
            continue;
        }
        else
        {
            cout<<"Not found Please Enter it again"<<endl;
            break;
        } 
    }
}