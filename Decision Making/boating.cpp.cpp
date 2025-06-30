#include <iostream>
using namespace std;
int main()
{
    int bw,a,c;
    int aw=75; // adult weight
    int cw=30; // children weight
    cin>>bw; // input of boat weight
    cin>>a; // input of no.of adult
    cin>>c; // input of no.of children
    if((a*aw)+(c*cw)<bw)
    {
        cout<<"Boat is stable";
    }
    else
    {
        cout<<"Boat will drown";
    }
    return 0;
}