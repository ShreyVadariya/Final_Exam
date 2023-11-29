// Develop a C++ program to demonstrate order of constructor calls in Multiple Inheritance.

#include<iostream>
using namespace std;
class vehicle
{
    public:
        vehicle()
        {
            cout<<"This is vehicle"<<endl;
        }
};
class fourwheeler : public vehicle
{
    public:
        fourwheeler()
        {
            cout<<"Fourwheeler is vehicle."<<endl;
        }
};
class car : public fourwheeler
{
    public:
        car()
        {
            cout<<"Car is vehicle."<<endl;
        }
};
int main()
{
    car obj;
    return 0;
}