#include <iostream>
using namespace std;
int main()
{
	int n=5;

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<=i; j++)
		{
			char c ='A'+j;
			cout<<c<<"  ";
		}
		cout<<endl;

	}
	return 0;
}