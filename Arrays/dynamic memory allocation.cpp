// pointer 
#include<iostream>
using namespace std;
int main()
{
    //int a=5;
    int *ptr=new int; // new will alocate memory for int
    *ptr=5; // assign value 
    cout<<*ptr;
    delete ptr; // free namespace
    cout<<endl<<*ptr;
}