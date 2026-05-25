/*Enter cost of 3 items from the user (using float data type) - a pencil, a
pen and an eraser. You have to output the total cost of the items back to the user as
their bill.
(Add on : You can also try adding 18% GST tax to the items in the bill as an advanced
problem)*/

#include <iostream>
using namespace std;
int main()
{
    float pen,pencil,eraser;
    float total_cost,Gst;
    cout<<"Enter price of pen🖊️ :- ";
    cin>>pen;
    cout<<"Enter price of pencil✏️ :- ";
    cin>>pencil;
    cout<<"Enter price of eraser🧼 :- ";
    cin>>eraser;
    total_cost=(pen+pencil+eraser);
    Gst=(total_cost*0.18);

    cout<<"Total cost before Gst is :- "<<total_cost<<endl;
    cout<<"Gst price is :- "<<Gst<<endl;
    cout<<"Total cost after including Gst is :- "<<(total_cost+Gst);
    





}