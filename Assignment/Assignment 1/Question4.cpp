// Write a program to calculate the area of a circle.
// Input : r (radius)
// Output : PI*r*r (area)
#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    float r;
    float pi=3.14;
    cout<<"Enter the radius :- ";
    cin>>r;
    cout<<setprecision(5)<<"Area of circle⭕️ is :- "<<pi*r*r;

}