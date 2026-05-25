#include <iostream>
using namespace std;

class Car {
    public:
    string name;
    string color;
    int speed;
};

int main()
{
    Car c1;
    c1.name="Bughati 100";
    c1.color="Redish grey";
    c1.speed=200;

    cout<<"Color of the car is :- "<<c1.color<<endl;
    cout<<"Name of the car is :- "<<c1.name<<endl;
    cout<<"Speed of the car is :- "<<c1.speed<<endl;
}