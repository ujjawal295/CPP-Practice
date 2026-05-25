#include <iostream>
#include <string>

using namespace std;

class student{
public:
    string name;
    int age;
    string gender;

    student(){
        cout<<"constructor called\n";
    }

    void study(){
        cout<<name<<" "<<age<<" "<<gender<<endl;
    }

};

int main()
{
    student s1;
    s1.name="Ujjawal";
    s1.age = 19;
    s1.gender="Male";

    s1.study();

}

