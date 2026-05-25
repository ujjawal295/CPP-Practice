#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int size;
    cout<<"Enter size of Vector => ";
    cin>>size;
    vector<int> vec(size);
    for(int i=0;i<size;i++)
    {
        cout<<vec[i];
    }
}