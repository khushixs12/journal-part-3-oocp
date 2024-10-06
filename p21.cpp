// Create a base class shape. Use this class to store two double type values that could be used to compute the area of figures. Derive two specific classes called triangle and rectangle from the base shape. Add to the base class, a member function get_data() to initialize the base class data members and another member function display_area() to compute and display the area of figures. Make display_area() as a virtual function and redefine this function in the derived class to suit their requirements.
#include<iostream>
#include<conio.h>
using namespace std;
class shape
{
protected :
    float a,b,area;
public :
    void get_data()
    {
        cout<<"Enter the required parameter to calculate area of the figure: \n";
        cin>>a>>b;
    }

    virtual void display_area()
    {
        cout<<"Sorry! I cannot compute the area! \n";
    }
};

class rectangle : public shape
{
    void display_area()
    {
        area=a*b;
        cout<<"The area of rectangle :  "<<area << endl;
    }
};

class triangle : public shape
{
    void display_area()
    {
        area=0.5*a*b;
        cout<<"The area of triangle : "<<area << endl;
    }
};

int main()
{
    shape *s;
    rectangle r1;
    s=&r1;
    r1.get_data();
    s->display_area();
    triangle t1;
    s=&t1;
    t1.get_data();
    s->display_area();

    getch();
    return 0;
}

