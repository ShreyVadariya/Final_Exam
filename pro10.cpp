/* Develop a C++ program to demonstrate use of class account member is acc_no, balance, branch_code. (*Declare 
   variable in public section andinitialize the value with object name and display outside the class). */

#include<iostream>
using namespace std;
class amount 
{
	private:
			int acc_no;
			char branch_code[10];
			char balance[10];
	public:
			void get_getchar()
			{
				cout<<"Enter the acc_no :: ";
				cin>>acc_no;
				cout<<"Enter the branch_code :: ";
				cin>>branch_code;
				cout<<"Enter the balance :: ";
				cin>>balance;
			}
			void get_display()
			{
				cout<<"\nYour acc_no is :: "<<acc_no<<endl;
				cout<<"Your branch_code is :: "<<branch_code<<endl;
				cout<<"Your balance is :: "<<balance<<endl;
			}
};
int main()
{
	amount a1;
	a1.get_getchar();
	a1.get_display();
	return 0;
}