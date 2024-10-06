// For multiple inheritance, write a program to show the invocation of constructor and destructor.
#include<iostream>
#include<conio.h>
using namespace std;
class A
{
public :
    A()
    {
        cout<<"Constructor of A "<<endl;
    }
    ~A()
    {
        cout<<"Destructor of A "<<endl;
    }
};
class B
{
public :
    B()
    {
        cout<<"Constructor of B "<<endl;
    }
    ~B()
    {
        cout<<"Destructor of B "<<endl;
    }
};
class C : public A,public B
{
public :
    C()
    {
        cout<<"Constructor of C "<<endl;
    }
    ~C()
    {
        cout<<"Destructor of C "<<endl;
    }
};
void callme()
{
    C c1;
}

int main()
{
    callme();
    getch();
    return 0;
}
