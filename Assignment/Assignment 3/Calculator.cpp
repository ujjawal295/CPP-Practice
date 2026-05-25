// Make a calculator using switch an arithmetic

#include <iostream>
using namespace std;
int main()
{
    float i,j;
    char k;
    cout<<"Enter First No : ";
    cin>>i;
    cout<<"Enter Second No : ";
    cin>>j;
    cout<<"Enter operation :- ";
    cin>>k;


    switch (k)
    {
        case '+' :
            cout<<"The sum of above no are :- "<<i + j;
                break;
        case '-' :
            cout<<"The difference of above no are :- " <<i - j;
                break;
        case '*' :
            cout<<"The product of 2 no are :- "<<i * j;
                break;
        case '/' :
            cout<<"The division of 2 no are :- "<<i / j;
            break;
        default:
            cout<<"Invalid Operator";
    }
    return 0;

}