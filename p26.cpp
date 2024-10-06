// Create a class MATRIX of size mxn. Overload + and – operators for addition and subtraction of the MATRIX.
#include<iostream>
#include<conio.h>
using namespace std;

class matrix
{
    int a[10][10], r, c;
public:
    void input()
    {
        cout << "Enter the order of matrix: ";
        cin >> r >> c;
        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < c; j++)
            {
                cin >> a[i][j];
            }
        }
    }

    void display()
    {
        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < c; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }

    friend matrix operator+(matrix m1, matrix m2);
    friend matrix operator-(matrix m1, matrix m2);
};

matrix operator+(matrix m1, matrix m2)
{
    matrix m3;
    if(m1.r == m2.r && m1.c == m2.c)
    {
        m3.r = m1.r;
        m3.c = m1.c;
        for(int i = 0; i < m3.r; i++)
        {
            for(int j = 0; j < m3.c; j++)
            {
                m3.a[i][j] = m1.a[i][j] + m2.a[i][j];
            }
        }
    }
    else
    {
        cout << "Addition not possible " << endl;
    }
    return m3;
}

matrix operator-(matrix m1, matrix m2)
{
    matrix m3;
    if(m1.r == m2.r && m1.c == m2.c)
    {
        m3.r = m1.r;
        m3.c = m1.c;
        for(int i = 0; i < m3.r; i++)
        {
            for(int j = 0; j < m3.c; j++)
            {
                m3.a[i][j] = m1.a[i][j] - m2.a[i][j];
            }
        }
    }
    else
    {
        cout << "Subtraction not possible " << endl;
    }
    return m3;
}

int main()
{
    matrix m1, m2, m3, m4;
    m1.input();
    m2.input();
    m3 = m1 + m2;
    m4 = m1 - m2;

    cout << "First matrix is: " << endl;
    m1.display();
    getch();
    return 0;
}
