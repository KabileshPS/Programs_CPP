// constructors
#include <iostream>
using namespace std;
class Hall3
{
    public:
    Hall3() // method
    {
        cout<<"constructor begun"<<endl;
    }
};
int main()
{
    Hall3 h3;
    //Hall3 h4;
}
// as soon as the object is created constructor gets executed
// as many times obj created, those many time constructor gets executed