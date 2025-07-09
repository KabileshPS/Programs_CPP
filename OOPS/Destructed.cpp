#include <iostream>
using namespace std;
class Student
{
    public:
    int mark;
    Student(int x)
    {
        mark=x;
    }
    ~Student() //~
    {
        cout<<"";//Destructed
    }
};
int main()
{
    Student s1(80);Student s2(75);
    cout<<s1.mark<<" "<<s2.mark;
}