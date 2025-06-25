#include <iostream>
using namespace std;
int main()
{
	int n=5;
	for(int i=0; i<n; i++)  
	{
		for(int j=0; j<n; j++) 
		{
			if(i==n-1||j==n-1||i+j==n-1) 
			{
				cout<<"* "; // give 1 space
			}
			else
			{
				cout<<"  "; // give 2 space
			}

		}
    	 cout<<"\n";
	}
 return 0;
}