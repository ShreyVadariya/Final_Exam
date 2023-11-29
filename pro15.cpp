/* Develop a C++ program to create class Distance with private data member’s feet & inches. Member function are 
   get_distance() & display_distance(). */

#include<iostream>
using namespace std;
class distance
{
    private:
        int feet,inch;
    public:
        void get_distance()
        {
            cout<<"Enter Feet :: ";
            cin>>feet;
            cout<<"Enter Inch :: ";
            cin>>inch;
        }
        void display_distance()
        {
            cout<<"Feet is :: "<<feet<<endl;
            cout<<"Inch is :: "<<inch<<endl;
        }
}a;
int main()
{
   a.get_distance();
   a.display_distance(); 
}