// Develop a C++ program to find area of circle using formula pi*r2. (Take value of pi=3.14 default)

#include<iostream>
using namespace std;
int area(float, float PI=3.14);
int main()
{
    float r;
 
    cout<<"Enter the value of Radius : ";
    cin>>r;
    cout<<"Area of the circle is :: "<<area(r)<<endl;
    return 0;
}
int area(float rad, float PI)
{
    return(PI * rad * rad);
}