#include <iostream>
using namespace std;

int main()
{
    int x=5,y=10;
    int *ptr1=&x, *ptr2=&y;
    cout<<ptr1<<endl<<ptr2<<endl;
    ptr2=ptr1;
    cout<<ptr2<<endl<<*ptr2;
}