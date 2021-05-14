#include<iostream>
#include<conio.h>
typedef int marks;
using namespace std;
class faculty;
class student
{
		protected:
		int rno;
		string name;
	public:
		void print()
	{
		cout<<"rollno="<<rno<<endl<<"name= "<<name<<endl;
	}
};
	
class t1t2t3:virtual public student 
{
	protected:
		marks t1,t2,t3;
	public:
		void print()
		{
			cout<<"marks in t1:"<<t1<<endl<<"marks in t2: "<<t2<<endl<<"marks in t3: "<<t3<<endl;
		}
	};
class p1p2:virtual public student
{
		protected:
		marks p1,p2;
	public:
		void print()
		{
			cout<<"marks in p1:"<<p1<<endl<<"marks in p2: "<<p2<<endl;
		}
};
class attendence:virtual public student
{
		protected:

		float per;
	public:
		void print()
		{
			cout<<"\npercentage of attendence in theory class : "<<per<<endl;
		}
};
class total:virtual public t1t2t3,virtual public p1p2,virtual public attendence
{
		protected:
	marks total_marks ;
	char grade;
	public:
		void print()
		{
			cout<<"\ntotal marks obtained="<<total_marks<<endl;
			cout<<"grade = "<<grade<<endl;
		}
		friend class faculty;
		friend class administration;
		
};
class faculty
{
    
	public:
		void assign(total & t)
		{
		cout<<"enter marks of : \n";
		cout<<"t1 : ";
		cin>>t.t1;
			cout<<"t2 : ";
		cin>>t.t2;
			cout<<"t3 : ";
		cin>>t.t3;
			cout<<"p1 : ";
		cin>>t.p1;
			cout<<"p2 : ";
		cin>>t.p2;
			cout<<"attendence percentage : ";
		cin>>t.per;
		
		}
		
};
class administration
{
	
	public:
		void enter(total &t)
		{
		cout<<"enter the name :";
		cin>>t.name;
		cout<<"enter roll number : ";
		cin>>t.rno;
		
		}
		void cal_total(total & t)
		{
			if(t.per>95)
			t.total_marks=t.t1+t.t2+t.t3+t.p1+t.p2+5;
			else if(t.per>90)
			t.total_marks=t.t1+t.t2+t.t3+t.p1+t.p2+4;
			else if(t.per>85)
			t.total_marks=t.t1+t.t2+t.t3+t.p1+t.p2+3;
			else if(t.per>80)
			t.total_marks=t.t1+t.t2+t.t3+t.p1+t.p2+2;
			else
			t.total_marks=t.t1+t.t2+t.t3+t.p1+t.p2+1;
			
		}
		void cal_grade(total & t)
		{
			if(t.total_marks>80)
			t.grade='A';
			else if(t.total_marks>70)
			t.grade='B';
			else if(t.total_marks>60)
			t.grade='C';
			else if(t.total_marks>50)
			t.grade='D';
			else
			t.grade='E';
			
		}
		void sort_grade(int size,total *t)
		{ total temp;
			for(int i=0;i<size;i++)
			{
				for(int j=0;j<size-i-1;j++)
				{
					if(t[i].grade==t[j+1].grade)
					{
						for(int i=0;i<size;i++)
			{
				for(int j=0;j<size-i-1;j++)
				{
				
				if(t[j].name>t[j+1].name)
				{
					temp=t[j];
					t[j]=t[j+1];
					t[j+1]=temp;
				}
			}
		}
					}
					else
					{
					
				
				if(t[j].grade>t[j+1].grade)
				{
					temp=t[j];
					t[j]=t[j+1];
					t[j+1]=temp;
				}
			}
		}
	}
		
	
			for(int i=0;i<size;i++)
			{
				cout<<endl<<t[i].name<<"\t"<<t[i].grade<<endl;
				
			}
			
			
		}
		void sort_name(int size,total *t)
		{
			total temp;
			for(int i=0;i<size;i++)
			{
				for(int j=0;j<size-i-1;j++)
				{
				
				if(t[j].name>t[j+1].name)
				{
					temp=t[j];
					t[j]=t[j+1];
					t[j+1]=temp;
				}
			}
		}
		for(int i=0;i<size;i++)
			{
				cout<<endl<<t[i].name<<"\t"<<t[i].grade<<endl;
				
			}
			
		}
		void search(int size,total *t)
		
		{
			string n;
			cout<<"enter the name to be searched : ";
			cin>>n;
			int flag=0;
			for(int i=0;i<size;i++)
			{
				if(n==t[i].name)
				{
				flag=1;
				cout<<"name :"<<t[i].name<<"\t"<<"roll no : "<<t[i].rno<<"\t"<<"grade : "<<t[i].grade;
			}
			
			
		}
		if(flag==0)
		{
			cout<<"not found";
		}
	}
		
		
};
int main()
{
	int size;
	total t[100];
	faculty f;
	administration a;
	cout<<"enter size : ";
	cin>>size;
	for(int i=0;i<size;i++)
	{
	  a.enter(t[i]);
      t[i].student::print();
	  f.assign(t[i]);
	  t[i].t1t2t3::print();
	 t[i].p1p2::print();
	  t[i].attendence::print();
	  a.cal_total(t[i]);
	  a.cal_grade(t[i]);	
	  t[i].total::print();
	  
	}
	cout<<"\n after sorting acc to grade : \n";
	a.sort_grade(size,&t[0]);
	cout<<"\n after sorting according to names : \n";
	a.sort_name(size,&t[0]);
	cout<<"search results :\n";
	a.search(size,&t[0]);
	getch();
}
