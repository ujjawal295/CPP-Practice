#include <iostream>
#include <string>
using namespace std;

class carClass {
    public:
        string color;
        string type;
        int seat;

        carClass(string c,string t,int s)
        {
            this->color = c;
            this->type = t;
            this->seat = s;
        }

        void drive()
        {
            cout<<"She is driving "<<this->color <<" car of " <<type <<" having seat "<<seat<<endl;
        }
    };

int main()
{
    carClass c1("red","sedan",5);
    carClass c2("Pink","suv",7);

    c1.drive();
    c2.drive();
}