//arrays - structure and union 

#include<iostream>
using namespace std;
//define structure
struct details
{
    char name[20];
    int age; // char size 20 + int size 4 = // >=24
};
int main()
{
    details s1;
    cout<< sizeof(s1);
}