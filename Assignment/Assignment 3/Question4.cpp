//What’ll be the output of the program:
#include <iostream>
using namespace std;

int main() 
{
    int a = 5;
    if (++a*5 <= 25) 
    {
        cout<<"Hello\n";
    } 
    else 
    {
        cout<<"Bye\n"; // This will execute because we used increment operator which means we have to increase value then print it. So the new value a=6 , 6*5 = 30 <= 25 (This condition is False)
    }
    return 0;
}