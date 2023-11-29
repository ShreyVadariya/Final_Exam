// Develop a C++ program to using class to find maximum number from three numbers.

#include<iostream>
using namespace std;
class max
{
    private:
        int a,b,c;
    public:
        void get_detail()
        {
            cout<<"Enter Number 1 :: ";
            cin>>a;
            cout<<"Enter Number 2 :: ";
            cin>>b;
            cout<<"Enter Number 3 :: ";
            cin>>c;
        }
        void display_detail()
        {
            if(a>b && b>c)
            {
                cout<<"Number 1 is maximum.";
            }
            else
            {
                if(b>c)
                {
                    cout<<"Number 2 is maximum.";
                }
                else
                {
                    cout<<"Number 3 is maximum.";
                }
            }
        }
}no;
int main()
{
    no.get_detail();
    no.display_detail();
    return 0;
}