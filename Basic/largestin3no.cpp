#include <iostream>
using namespace std;
int main()
{
    int a ,b ,c;
    cout<<"Enter value of A :- ";
    cin>>a;
    cout<<"Enter value of B :- ";
    cin>>b;
    cout<<"Enter value of C :- ";
    cin>>c;
    if(a>b && a>c)
        cout<<a<<" is the largest no";
    else if (b>a && b>c)
        cout<<b<<" is the largest no";
    else
        cout<<c<< " is the largest no\n";
    cout<<((a+b+c)/3);
}
