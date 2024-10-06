// Write a program to demonstrate the use of pure virtual function.
#include<iostream>
#include<conio.h>
using namespace std;
class A
{
public:
    int a;
    virtual void display()=0;
    A()
    {
        a=10;
    }
};
class B:public A
{
    void display()
    {
        cout << a;
    }
};
int main()
{
    B object;
    cout << "a=" << object.a;
    getch();
    return 0;
}
