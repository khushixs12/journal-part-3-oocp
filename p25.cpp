// Create a class distance which contains feet and inch as a data member. Overload ==, <and> operator for the same class. Create necessary functions and constructors too.
#include<iostream>
#include<conio.h>
using namespace std;

class Distance
{
    int feet, inch;
public:
    Distance()
    {
        cout << "Enter feet value : ";
        cin >> feet;
        cout << "Enter inches : ";
        cin >> inch;
    }

    void display()
    {
        cout << "Feet = " << feet << endl;
        cout << "Inches = " << inch << endl;
    }

    // Overload comparison operators
    friend bool operator>(Distance d1, Distance d2);
    friend bool operator<(Distance d1, Distance d2);
    friend bool operator==(Distance d1, Distance d2);
};

bool operator>(Distance d1, Distance d2)
{
    if (d1.feet > d2.feet)
        return true;
    else if (d1.feet == d2.feet)
        return d1.inch > d2.inch;
    else
        return false;
}

bool operator<(Distance d1, Distance d2)
{
    if (d1.feet < d2.feet)
        return true;
    else if (d1.feet == d2.feet)
        return d1.inch < d2.inch;
    else
        return false;
}

bool operator==(Distance d1, Distance d2)
{
    return (d1.feet == d2.feet && d1.inch == d2.inch);
}

int main()
{
    Distance d1, d2;
    d1.display();
    d2.display();

    if (d1 > d2)
        cout << "Distance 1 is greater." << endl;
    else if (d1 < d2)
        cout << "Distance 1 is smaller." << endl;
    else if (d1 == d2)
        cout << "Distance 1 and 2 are the same." << endl;
        
    getch();
    return 0;
}
