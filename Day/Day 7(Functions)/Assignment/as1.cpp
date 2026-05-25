#include <iostream>
using namespace std;

bool isPalindrome(int n)
{
    int y=n;
    int k=0;
    int rev=0;
    while(n>0)
    {
        k=n%10;
        rev=(rev*10)+k;
        n=n/10; 
          
    }
    cout<<rev<<endl;
    if(y==rev)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    cout<<isPalindrome(1221);
}