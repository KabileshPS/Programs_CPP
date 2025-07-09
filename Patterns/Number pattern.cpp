#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  cout<<"*"<<endl;
  for(int i=0;i<n;i++)
  {
    cout<<"*";
    for(int j=0;j<=i;j++)
    {
      cout<<j+1;
    }
    for(int k=i-1;k>=0;--k)
    {
      cout<<k+1;
      
    }
    cout<<"*";
    cout<<endl;
  }
  for(int i=n-2;i>=0;--i)
  {
    cout<<"*";
    for(int j=0;j<=i;j++)
    {
      cout<<j+1;
    }
    for(int k=i-1;k>=0;--k)
    {
      cout<<k+1;
    }
    cout<<"*";
    cout<<endl;
  }
  cout<<"*";
}