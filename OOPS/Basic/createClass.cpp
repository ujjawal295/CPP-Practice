#include <iostream>
#include <string>
using namespace std;

class Student{
    public:

        string name;
        int age;

        void display()
        {
            cout<<"Myself "<<name<<"\nand I'm "<<age<<" Years old";
        }
};

int main()
{
    Student s1;
    s1.name="ujjawal";
    s1.age=14;

    s1.display();
    
}