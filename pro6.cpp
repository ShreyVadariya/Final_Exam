// Develop a C++ program to swap two numbers.

#include<iostream>
using namespace std;

int main()
{
    int a,b,temp;

    cout<<"Enter First Number :: ";
    cin>>a;
    cout<<"Enter Second Number :: ";
    cin>>b;

    cout<<"\nBefore Swapping First Number Is  :: "<<a<<endl;
    cout<<"Before Swapping Second Number Is :: "<<b<<endl;

    temp = a;
    a = b;
    b = temp;

    cout<<"\nAfter Swapping First Number Is  :: "<<a<<endl;
    cout<<"After Swapping Second Number Is :: "<<b<<endl;

    return 0;
}