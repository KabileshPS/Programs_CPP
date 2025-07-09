// class & object 
//oops - inheritance,polymorpohism,encapsulation,abstraction

#include <iostream>
using namespace std;
class Hall3
{
 public: // default take private 
 int fan=3;
 float ac=10.0f;
 void projector(int a)
 {
     cout<<"Projector is installed in cabin"<<a<<endl;
 }
};
int main()
{
    Hall3 h3;
    cout<<sizeof(h3);
    h3.projector(3);
    cout<<endl<<sizeof(h3);
    cout<<h3.ac<<" "<<h3.fan;
}