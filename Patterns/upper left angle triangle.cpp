#include <iostream>
using namespace std;
int main()
{                    // using nested loop 
    int n;
    cin>>n;
    for(int i=0;i<n;i++)    //row
    {
        for(int j=0;j<=i;j++) // space 
        {
            cout<<"  "; // give 2 space 
        }
        for(int k=0;k<n-i;k++) // shape
        {
            cout<<"* ";
        }
        cout<<"\n";
    }

    return 0;
}