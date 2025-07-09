// constructors
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
};
int main()
{
    Student s1(80);Student s2(75);
    cout<<s1.mark<<" "<<s2.mark;
}
// as soon as the object is created constructor gets executed
// as many times obj created, those many time constructor gets executed