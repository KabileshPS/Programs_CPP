#include <iostream>
using namespace std;
class Father
{
public:
	int cash=5000; // var
	void house() // method
	{
		cout<<"Father's house"<<endl;
	}
private:
	int savings=50000;
protected:
	void bike()
	{
		cout<<"Father's bike"<<endl;
	}
};
class Child:
	public Father
{
public:
	int pocket_money=1000;
	void mobile()
	{
		cout<<"Child's mobile"<<endl;
		bike(); // father protected

	}
};
int main()
{
	/*Father fr;
	fr.house();
	cout<<fr.cash;*/
	Child ch;
	ch.mobile();
	cout<<ch.pocket_money<<endl;
	ch.house();
	cout<<ch.cash;
}


// Types of inheritance
/*  1. Single inheritance
    2. Multi-level inheritance
    3. Multiple inheritance
    4. Hierarchical inheritance
    5. Hybrid inheritance
*/


