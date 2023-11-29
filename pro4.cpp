//  Develop a C++ program to calculate cube of a given number using inline function.

#include<iostream>
using namespace std;
inline int cube(int x)
{
    return x*x*x;
}
int main()
{
    int n;

    cout<<"Enter Any Number :: ";
    cin>>n;
    cout<<"Cube of given number is :: "<<cube(n);
    return 0;
}