#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cout<<"Entr size of vec ->";
    cin>>n;
    vector<int> k(n);
    for(int i=0;i<k.size();i++)
    {
        k[i]=i;
        cout<<k[i];
    }
    
}
