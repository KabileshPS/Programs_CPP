#include <iostream>
using namespace std;
int main()
{                    // using nested loop 
    int n=5;
    //cin>>n;
    for(int i=0;i<n;i++) //row
    {
        for(int j=0;j<=i;j++) // column
        {
            cout<<"* ";
        }cout<<"\n";
    }

    return 0;
}