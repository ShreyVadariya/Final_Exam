// Develop a C++ program to calculate square of a given number using inline function.

#include<iostream>
using namespace std;
inline int square(int x)
{
    return x*x;
}
int main()
{
    int n;

    cout<<"Enter Any Number :: ";
    cin>>n;
    cout<<"Square of given number is :: "<<square(n);
    return 0;
}