// Develop a C++ program to Check Even or Odd Integers.

#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter Any Number :: ";
    cin>>n;

    if (n%2==0)
    {
        cout<<"This Number Is Even.";
    }
    else
    {
        cout<<"This Number Is Odd.";
    }
    
    return 0;
}