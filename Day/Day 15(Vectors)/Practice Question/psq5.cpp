#include<iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec={3,5,6,4};
    cout<<"Size => "<<vec.size()<<endl;
    cout<<"Capacity => "<<vec.capacity()<<endl;

    vec.push_back(9);
    vec.push_back(9);
    vec.push_back(9);
    vec.push_back(9);
    vec.push_back(9);
    vec.pop_back();
    vec.pop_back();
    vec.pop_back();
    cout<<"Size => "<<vec.size()<<endl;
    cout<<"Capacity => "<<vec.capacity();
    

}
