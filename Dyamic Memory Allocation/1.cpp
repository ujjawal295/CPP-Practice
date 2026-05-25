#include <iostream>
using namespace std;

int main()
{
    int* k = new int;
    *k=100;
    cout<<"The memory of k - "<<*k;
    delete k;

}
