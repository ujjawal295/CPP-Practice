#include <iostream>
using namespace std;

int main()
{
    int a=4,b=2;
        int k=0;
        while(a%b!=0)
        {
           k=a%b;
           a=b;
           b=k; 
        }
        cout<<b;
}