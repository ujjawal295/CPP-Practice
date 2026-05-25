#include <iostream>
#include <string>

using namespace std;
class student{
    public:
    string name;
    int age;
    string gender;

    student(string name,int age,string gender)
    {
        this->name = name;
        this->age = age;
        this->gender = gender;
    }
    student(const student &s)
    {
        cout<<"copy constructor called";
        this->name = s.name;
    }

    void study()
    {
        cout<<name<<" "<<age<<" "<<gender<<" ";
    }

};

int main()
{
    student s1("ujjawal",21,"male");
    student s2=s1;

    cout<<s2.name;
}