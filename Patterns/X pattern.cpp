#include <iostream>
using namespace std;
int main()
{
	int n=5;
	//cin>>n;
	for(int i=0; i<n; i++)  
	{
		for(int j=0; j<n; j++) 
		{
			if(i+j==n-1||i==j) // i+j==n-1 for / diagonal and i==j for \diagonal
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