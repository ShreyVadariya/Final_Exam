// Develop a C++ program to define a function outside the class using scope resolution operator.

#include<iostream>
using namespace std;
class temp
{
    public:
        void display();
};
void temp :: display()
{
    cout<<"Hello My Name Is Shrey.";
}
int main()
{
    temp t;
    t.display();

    return 0;
}