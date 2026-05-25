#include <iostream>
using namespace std;

class student{
    
    private:
    string name;
    int salary;

    public:
    
    //constructor

    void display()
    {
        cout<<"Name is "<<name<<"Salary "<<salary;
    }

    //setter

    void setName(string l)
    {
        name=l;
    }
    void setsalary(int k)
    {
        salary = k;
    }

    string getName()
    {
        return name;
    }

    int getsalary()
    {
        return salary;
    }
    

};
int main()
{
    student s1;

    s1.setName("ujjawal");
    s1.setsalary(30);

    cout<< "Name -> "<<s1.getName() <<endl;
    cout<< "Age -> "<<s1.getsalary() <<endl;

    s1.display();

    return 0;


    
}
