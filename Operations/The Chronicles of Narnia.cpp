#include <iostream>
using namespace std;
int main()
{
   int x;
   cin>>x;// two digit number
   int d1 = x/10; // ans = 8.7
   int d2 = x%10; // ans = 7
   cout<<d1+d2;
    return 0;
}