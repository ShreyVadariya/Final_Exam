// Develop a C++ program to demonstrate use of Single Inheritance.

#include<iostream>
using namespace std;
class vehicle
{
    public:
        vehicle()
        {
            cout<<"This is vehicle.";
        }
};
class car : public vehicle
{
};
int main()
{
    car obj;
    return 0;
}