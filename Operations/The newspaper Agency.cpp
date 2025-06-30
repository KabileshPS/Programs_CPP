#include <iostream>
using namespace std;
int main()
{
    int w,x,y,d;
    int delivery=100;
    cin>>w;// no.of copies
    cin>>x;// cost per copy
    cin>>y;//agency spend per copy
    int a=w*x;
    int b=w*y;
    int profit =a-b;
    cout<<profit-delivery;
    return 0;
}