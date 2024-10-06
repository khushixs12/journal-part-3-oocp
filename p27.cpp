// Define a class Coord, which has x and y coordinates as its data members. Overload ++ and – operators for the Coord class. Create both its prefix and postfix forms.
#include<iostream>
#include<conio.h>
using namespace std;
class coords
{
    int x,y;
public:

    void input()
    {
        cout<<"enter the value for x: ";
        cin>>x;
        cout<<"enter the value for y: ";
        cin>>y;
    }
    friend void operator++(coords c1,int);
    friend void operator++(coords c1);
    friend void operator--(coords c1,int);
    friend void operator--(coords c1);
};
void operator++(coords c1, int)
{
    cout<<"x coordinate="<<c1.x++<<endl;
    cout<<"y coordinate="<<c1.y++<<endl;
    cout<<"after postfix" << endl;
    cout<<"x coordinate="<<c1.x<<endl;
    cout<<"x coordinate="<<c1.y<<endl;
}
void operator++(coords c1)
{
    cout<<"x coordinate="<<++c1.x<<endl;
    cout<<"y coordinate="<<++c1.y<<endl;
    cout<<"after prefix" << endl;
    cout<<"x coordinate="<<c1.x<<endl;
    cout<<"x coordinate="<<c1.y<<endl;
}

void operator--(coords c1,int)
{
    cout<<"x coordinate="<<c1.x--<<endl;
    cout<<"y coordinate="<<c1.y--<<endl;
    cout<<"after postfix" << endl;
    cout<<"x coordinate="<<c1.x;
    cout<<"x coordinate="<<c1.y;
}
void operator--(coords c1)
{
    cout<<"x coordinate="<<--c1.x<<endl;
    cout<<"y coordinate="<<--c1.y<<endl;
    cout<<"after postfix" << endl;
    cout<<"x coordinate="<<c1.x<<endl;
    cout<<"x coordinate="<<c1.y<<endl;
}
int main()
{
    coords c1;
    c1.input();
    cout<<"postfix increment" << endl;
    c1++;
    cout<<"prefix increment" << endl;
    ++c1;
    cout<<"postfix decrement" << endl;
    c1--;
    cout<<"prefix decrement" << endl;
    --c1;
    getch();
    return 0;
}

