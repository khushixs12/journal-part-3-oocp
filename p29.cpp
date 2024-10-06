// Create two classes Celsius and Fahrenheit to store temperature in terms of Celsius and Fahrenheit respectively. Include necessary functions to read and display the values. Define conversion mechanism to convert Celsius object to Fahrenheit object and vice versa. Show both types of conversions in main function.
#include <iostream>
#include<conio.h>
using namespace std;
class Fahrenheit;

class Celsius
{
public:
    int c;

    Celsius() {}

    void input()
    {
        cout << "Enter Celsius: ";
        cin >> c;
    }

    void display()
    {
        cout << "Celsius = " << c;
    }

    Celsius(Fahrenheit f1);
};

class Fahrenheit
{
public:
    int f;

    Fahrenheit() {}

    void input()
    {
        cout << "Enter Fahrenheit: ";
        cin >> f;
    }

    void display()
    {
        cout << "Fahrenheit = " << f;
    }

    Fahrenheit(Celsius c1)
    {
        f = 1.8 * c1.c + 32;
    }
};

Celsius::Celsius(Fahrenheit f2)
{
    c = (f2.f - 32) / 1.8;
}

int main()
{
    Celsius c1, c2;
    cout << "Celsius to Fahrenheit conversion\n";
    c1.input();
    Fahrenheit f1 = c1;
    f1.display();

    cout << "\nFahrenheit to Celsius conversion\n";
    Fahrenheit f2;
    f2.input();
    c2 = f2;
    c2.display();
    getch();
    return 0;
}

