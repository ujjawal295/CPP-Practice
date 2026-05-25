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
        this->name=name;
        this->age=age;
        this->gender=gender;
    }

    void study(){
        cout<<name<<" "<<age<<" "<<gender;
    }
};

int main()
{
    student s1("Ujjawal",21,"Male");
    s1.study();
    return 0;
}

