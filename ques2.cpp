#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<iomanip>
using namespace std;
int flip()
{   char str[3]={'H','T'};
int n;
	
  
	  n=rand()%2;
	  if(str[n]=='H')
	  return 1;
	  else
	  return 0;	
                
	
}
int main()
{srand(time(0));
	int c1=0,c2=0;
	cout<<"\tTOSS THE COIN\n"<<setw(22)<<"100 times\n\n";
  for(int i=0;i<100;i++)
	{
		if(flip()==0)
		{
			cout<<"T"<<" ";
			c1++;
		}
		else
	{
		cout<<"H"<<" ";
		c2++;}
        }
	
	
	cout<<"\ntail occurs="<<c1<<" "<<"times";
	cout<<"\nhead occurs="<<c2<<" "<<"times";
	getch();
	
}
