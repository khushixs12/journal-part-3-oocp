// Create one class called Rupees, which has one member data to store amount in rupee and create another class called Paise which has member data to store amount in paise. Write a program to convert one amount to another amount with use of type conversion.
#include<iostream>
#include<conio.h>
using namespace std;
class paise;
class rupees
{
public:
    float r;
    rupees()
    {
    }
    void input()
    {
        cout<<"enter rupees:";
        cin>>r;
    }
    void display()
    {
        cout<<"rupees="<<r;
    }
    rupees(paise p2);
};

class paise
{
public:
    int p;
    paise()
    {
    }
    void input()
    {
        cout<<"enter paise:";
        cin>>p;
    }
    void display()
    {
        cout<<"paise="<<p;
    }
    paise(rupees r1)
    {
        p=r1.r*100;
    }

};
rupees::rupees(paise p2)
{
    r=p2.p/100;
}
int main()
{
    rupees r1,r2;
    cout<<"rupees to paise conversion\n";
    r1.input();
    paise p1;
    p1=r1;
    p1.display();
    cout<<"\npaise to rupees conversion\n";
    paise p2;
    p2.input();
    r2=p2;
    r2.display();
    getch();
    return 0;
}

