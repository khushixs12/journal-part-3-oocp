// Write a program to create a function template for finding maximum value contained in an array.
#include<iostream>
#include<conio.h>
using namespace std;
#define N 3

template <class T>
int find_max(T t[], int NO_OF_TERMS)
{
    T temp_max = t[0];
    for (int i = 0; i < NO_OF_TERMS; i++)
    {
        if (temp_max < t[i] )
        {
            temp_max = t[i];
        }
    }
    return temp_max;
}

int main()
{
    int numbers[N];
    cout<<"Enter numbers:"<<endl;
    for (int i = 0; i < N; i++)
    {
        cin>>numbers[i];
    }
    cout<<"Largest Number of array is:"<<find_max(numbers,N)<<endl;
    getch();
    return 0;
}

