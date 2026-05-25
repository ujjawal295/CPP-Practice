/*Build a Simple Interest Calculator.
Input : principal (P), rate (R), time (T) Output :
(P*R*T) / 100*/

#include <iostream>
using namespace std;
int main()
{
    int P,R,T;
    cout<<"Enter Principal :- ";
    cin>>P;
    cout<<"Enter Rate :- ";
    cin>>R;
    cout<<"Enter Time :- ";
    cin>>T;

    cout<<"Simple Intreset Of Given Principal "<<P <<" Given Rate "<< R <<" Given Time "<< T <<" Is :- "<<((P*R*T)/100);
}