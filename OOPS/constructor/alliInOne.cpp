#include <iostream>
#include <string>

using namespace std;

// default constructor
class student{
    public:
    string name;
    int age;
    string gender;

    

    void study()
    {
        cout<<name<<" "<<age<<" "<<gender<<endl;
    }

};

//parameterized constructor
class car{

    public:
    string color;
    string type;
    int seat;

    car(string color,string type,int seat)
    {
        this->color=color;
        this->type=type;
        this->seat=seat;

    }
    void drive()
    {
        cout<<color<<" "<<type<<" "<<seat<<endl;
    }
};

//copy constructor

class house{
    public:
    int room;
    string type;

    house(int room,string type)
    {
        this->room=room;
        this->type=type;
    }

    house(const house&h)
    {
        this->room=h.room;
        this->type=h.type;
    }

    void live()
    {
        cout<<room<<" "<<type<<endl;
    }
};


int main()
{
    student s1;
    s1.name="Ujjawal";
    s1.age=21;
    s1.gender="Male";
    s1.study();

    car c1("Red","sedan",5);
    c1.drive();

    house h1(4,"villa");
    house h2=h1;
    h2.live();

    car *c = new car("black","suv",5);
    c->drive();
    delete c;

}