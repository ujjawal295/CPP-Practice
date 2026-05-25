#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec{1,4,3,5,7,2,4,8,2,4};

    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i];
    }

}