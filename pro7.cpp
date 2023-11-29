// Develop a C++ program to demonstrate use of Multilevel Inheritance.

#include<iostream>
using namespace std;
class vehicle
{
    public:
        vehicle()
        {
            cout<<"This is vehicle."<<endl;
        }    
};
class fourwheeler : public vehicle
{
    public:
        fourwheeler()
        {
            cout<<"4 wheeler is vehicle."<<endl;
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