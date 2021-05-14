#include<iostream>
#include<conio.h>
using namespace std;
class bank_account
{
	private:
	string name,type;
	long acc_no;
	double balance;
	public:
		bank_account(string na,long ac,string ty,double bal)
		{
		name=na;
		acc_no=ac;
		type=ty;
		balance=bal;
		}
		void deposit();
		void withdraw();
		void display();
		
};
void bank_account::deposit()
{
	double damount;
	
	cout<<"\nenter the amount to be deposited : ";
	cin>>damount;
	cout<<"\nAMOUNT DEPOSITED SUCCESSFULLY !\n";
	balance=balance+damount;
}
void bank_account :: withdraw()
{
   double wamount;
   cout<<"\nenter the amount to be withdrawn: ";
   cin>>wamount;
   if(wamount  > balance)
   cout<<"\nInsufficient balance !! Amount cannot be withdrawn \n";
   else
   {
   balance = balance - wamount;
   cout<<"\nAMOUNT WITHDRAWN SUCCESSFULLY";
   }
   
}
void bank_account::display()
{
	cout<<"\nname of the depositor : "<<name;
	cout<<"\n\nbalance in the account : "<<balance;
}
int main()
{
	string na,ty;
	long ac;
	double bal;
	cout<<"\tENTER THE DETAILS\n";
	cout<<"\nenter your name : ";
	cin>>na;
	cout<<"\nenter your account number : ";
	cin>>ac;
	cout<<"\nenter type of account : ";
	cin>>ty;
	cout<<"\n enter balance in the account : ";
	cin>>bal;
	bank_account bank(na,ac,ty,bal);
	int ch;
	char res;
	xx:
	cout<<"\nfor depositing amount : press 1\n";
	cout<<"for withdrawing amount : press 2\n";
	cout<<"for displaying name and balance : press 3\n";
	cout<<"\nenter your choice : ";
	cin>>ch;
	switch(ch)
	{
		case 1:
			bank.deposit();
			break;
		case 2:
			bank.withdraw();
			break;
		case 3:
			bank.display();
			break;
	    default:
	    	cout<<"option not found";
				 	
	}
	cout<<"\n\ndo you want to continue(y/n):";
	cin>>res;
	if(res=='y')
	goto xx;

	
}
