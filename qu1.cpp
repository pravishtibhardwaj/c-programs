#include <iostream>
#include<stdlib.h>
using namespace std;
class distanc
{
 private:
 int feet;
 float inches;
 public:
 distanc()
 {
 feet=0;
 inches=0.0;
 }
 void enter()
{
cout<<"enter feet:";
cin>>feet;
cout<<"enter inches:";
cin>>inches;
}

void check()
{
while(inches>=12.0)
{
feet++;
inches=inches-12;
}
        }
void display()
{
            cout<<feet<<"'"<<" "<<inches<<"''";
}
distanc operator+(distanc d2)
{
distanc temp;
temp.feet=feet+d2.feet;
temp.inches=inches+d2.inches;
return temp;
}
distanc operator-(distanc d2)
{
distanc temp;
temp.feet=abs(feet-d2.feet);
temp.inches=inches+d2.inches;
return temp;
}
distanc operator>(distanc d2)
{
distanc temp;
if(feet>d2.feet)
{
temp.feet=feet;
temp.inches=inches;
return temp;
}
else
{
temp.feet=d2.feet;
temp.inches=d2.inches;
return temp;
}
}
distanc operator<(distanc& d2)
{
distanc temp;
if(feet<d2.feet)
{
temp.feet=feet;
temp.inches=inches;
 return temp;
}
else
{
temp.feet=d2.feet;
temp.inches=d2.inches;
return temp;
}
}
    distanc operator-=(distanc &d2 ) 
    {
        distanc temp;
    temp.feet-=abs(d2.feet);
        temp.inches-=d2.inches;
        return temp;
        
}
    distanc operator+=(distanc& d2 ) 
    {
        distanc temp;
    temp.feet+=d2.feet;
        temp.inches+=d2.inches;
        return temp;
        
}
    
};
int main()
{
distanc d1,d2,a;
cout<<"enter distance 1:";
d1.enter();
d1.check();
cout<<"\nenter disance 2:";
d2.enter();
d2.check();
distanc sum=d1+d2;
    sum.check();
    cout<<"\nsum of two distances : ";
sum.display();
distanc dif=d1-d2;
    dif.check();
    cout<<"\ndifference of two distances : ";
dif.display();
distanc larger=d1>d2;
    
    cout<<"\nlarger of the two distances : ";
larger.display();
distanc small=d1<d2;
    cout<<"\nsmaller of the two distances : ";
small.display();
    a=d1;
  d1=d1+d2;
    d1.check();
    cout<<"\nadding d2 to d1 : ";
    d1.display();

   a=a-d2;
    a.check();
    cout<<"\nsubtracting d2 from d1 : ";
    a.display();
return 0;

}
