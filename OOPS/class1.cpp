#include <iostream>
using namespace std;

class Vehicle {
    private:
    string color;

    public:
    string name;

    void setcolor(string colorval)
    {
        color=colorval;
    }
    string getcolor()
    {
        return color;
    }    
};

int main()
{  
    Vehicle v1;
    v1.name="Lord Alto";
    v1.setcolor("black");
  
    cout<< v1.getcolor()<<endl;
    cout << v1.name<<endl;
    

}