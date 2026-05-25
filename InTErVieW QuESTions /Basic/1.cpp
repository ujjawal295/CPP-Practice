#include <iostream>
using namespace std;

int main() {
	int T;
    cout<<"Enter value of T :- ";
	cin>>T;
    
	if(T>0)
	{
        
	    for(int i=0;i<T;i++)
	    {
            int a=0,b=0;
	        
	        int X, Y;
            cout<<"Value of X and Y :- ";
	        cin>>X>>Y;
	        
	        for(int j=X;j<=Y;j=j+X)
	        {
	            if(j%2==0)
	            {
	                a=a+j;

	            }
	            else
	            {
	                b=b+j;
	            }
	            
	        }
	        if(a>=b)
	        {
	            cout<<"Yes";
	        }
	        else
	        {
	            cout<<"No";
	        }
	    }
	}

}
