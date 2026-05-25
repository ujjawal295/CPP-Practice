#include <iostream>
using namespace std;

char alphabet(char ch)
{
    if(ch=='z')
    {
        return 'a';
    }
    ch=ch+1;
    return ch;
    
}


int main()
{
    cout<<alphabet('z');
}