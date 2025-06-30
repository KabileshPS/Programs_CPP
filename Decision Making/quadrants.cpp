#include <iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x;
    cin>>y;
    if(x>0&&y>0)
    {
        cout<<"Ist Quadrant";
    }
    else if (x<0&&y>=0)
    {
        cout<<"IIst Quadrant";
    }
    else if (x<0&&y<0)
    {
        cout<<"IIIst Quadrant";
    }
    else if (x>0&&y<0)
    {
         cout<<"IVst Quadrant";
    }
    else 
    {
        cout<<"Orgin";
    }
    return 0;
}