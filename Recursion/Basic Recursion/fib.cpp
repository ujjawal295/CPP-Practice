#include <iostream>
using namespace std;

int fibNo(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    return fibNo(n-1)+fibNo(n-2);
} 
int main()
{
    int n=6;
    cout<<fibNo(n);

}