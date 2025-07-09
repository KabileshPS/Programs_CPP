//arrays -union 

#include<iostream>
using namespace std;
//define structure
union details
{
    char name[20]="";
    int age; // char size 20 + int size 4 = // >=24
};
int main()
{
    details s1;
    s1.age=16;
    cout<<s1.age;
}