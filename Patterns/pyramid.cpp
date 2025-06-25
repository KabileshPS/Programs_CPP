#include <iostream>
using namespace std;
int main()
{                    // using nested loop 
    int n;
    cin>>n;
    for(int i=0;i<n;i++)    //row
    {
        for(int j=0;j<n-i-1;j++) // space 
        {
            cout<<" "; // give one space for pyramid
        }
        for(int k=0;k<=i;k++) // shape
        {
            cout<<"* ";
        }
        cout<<"\n";
    }

    return 0;
}