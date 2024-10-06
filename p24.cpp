// Create a class string with character array as a data member and write a program to add two strings with use of operator overloading concept.
#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;

class string1
{
    char s[50];
public:
    void get_string()
    {
        cout << "NAME  :";
        cin >> s;
    }

    void disp_string()
    {
        cout << s;
    }

    string1 operator+(string1 a)
    {
        string1 n;
        strcpy(n.s, s);
        strcat(n.s, " ");
        strcat(n.s, a.s);
        return n;
    }
};

int main()
{
    string1 s1, s2, s3;
    cout << "FIRST ";
    s1.get_string();
    cout << "LAST  ";
    s2.get_string();
    s3 = s1 + s2;
    cout << "FULL NAME: ";
    s3.disp_string();
    getch();
    return 0;
}

