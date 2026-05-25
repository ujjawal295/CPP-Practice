#include <iostream>
using namespace std;
int main()
{
    bool val = true;
    int n;
    //bool u=true;
    cout<<"Enter pattern size :- ";
    cin>>n;
  

    for(int i=0; i<n; i++) 
    {
        for(int j=0; j<=i; j++) 
        {
            cout << val << " ";
            val = !val;
        }
        cout << "\n";
    }
}
