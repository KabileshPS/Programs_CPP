//polymorphism
#include<iostream>
using namespace std;
class Polymorphism
{
public:
	void add(int a, int b)
	{
		cout<<"Fun-1= "<<a+b<<endl;
	}
	void add(int a, int b, int c)
	{
		cout<<"Fun-2= "<<a+b+c<<endl;
	}
	void add(double a, double b)
	{
		cout<<"Fun-3= "<<a+b<<endl;
	}
};
// function name is same,but with diff signature
// either number of parameter must be diff or data type of parameter must be diff
int main()
{
	Polymorphism p1;
	p1.add(5,6); //Fun-1
	p1.add(5,6,7); // Fun-2
	p1.add(4.5,6.6); // Fun-3

}