#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float i1,i2,dis,ta,dp,as;
    cin>>i1; // price of item1 
    cin>>i2; // price of item2 
    cin>>dis; // discount value 
    ta = float (i1+i2); //  total amount
    dp = float (ta-((dis*ta)/100)); // discounted price
    as = ta-dp; // amount saved
    cout<<ta<<endl;
    cout<<dp<<endl;
    cout<<as;
    return 0;
}