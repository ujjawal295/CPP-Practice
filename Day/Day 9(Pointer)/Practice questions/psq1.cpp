#include <iostream>
using namespace std;

void fnc(int *ptr)
{
    *ptr=20;
    cout<<*ptr<<endl;
}

int main()
{
    int a=10;
    fnc(&a);
    cout<<a;
}