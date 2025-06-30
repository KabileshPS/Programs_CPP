#include <iostream>
using namespace std;
int main()
{
    int r,l,d;
    cin>>r>>l;// input value of radius and length
    d=2*r; // diametet of the circle 
    if(d<=l)
    {
        cout<<"circle can be inside a Square";
    }
    else 
    {
        cout<<"circle cannot be inside a Square";
    }
    return 0;
}