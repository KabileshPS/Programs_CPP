//arrays - structure and union 

#include<iostream>
using namespace std;
//define structure
union details
{
    char name[20];
    int age; // char size 20 + int size 4 = // >=24
};
int main()
{
    details s1 = {"aaa",17};
    details s2 = {"bbb",16};
    cout<<"s1 details"<<s1.name<<endl;
    cout<<"s2 details"<<s2.age;
}