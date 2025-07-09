#include<iostream>
using namespace std;
class Sivakumar
{
public:
	void act()
	{
		cout<<"Sivakumar is acting"<<endl;
	}
};
class Surya:
	public Sivakumar
{
public:
	void act()
	{
		cout<<"Surya is acting"<<endl;
	}
};
int main()
{
	Surya s1;
	s1.act();// over-riding
	
}