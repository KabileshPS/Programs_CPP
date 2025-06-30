#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
 int a,i,y;
 
 cin>>a;
 cin>>i;
 cin>>y;
 float inter = a*i*y/100;
 float ta = a+inter;
 float dis = inter*0.02;
 float pay = ta-dis;
 cout<<fixed<<setprecision(2)<<inter<<endl;
 cout<<fixed<<setprecision(2)<<ta<<endl;
 cout<<fixed<<setprecision(2)<<dis<<endl;
 cout<<fixed<<setprecision(2)<<pay<<endl;
 return 0;
}