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
			if(i==0||i==n-1||i+j==n-1) // i==0 for first row || i==n-1 for last row||i+j==n-1 for / diagonal
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