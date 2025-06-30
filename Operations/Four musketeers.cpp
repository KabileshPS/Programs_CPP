#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int x1,x2,x3,y1,y2,y3;
    float x,y;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;// input of 6 integer
     x=float(x1+x2+x3)/3; // average x-coordinate of the vertices as x
     y=float(y1+y2+y3)/3; // average y-coordinate of the vertices as y
    cout<<fixed<<setprecision(1)<<x<<endl;
    cout<<fixed<<setprecision(1)<<y;
    return 0;
}