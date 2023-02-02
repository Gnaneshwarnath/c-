#include<iostream>
using namespace std;
class student
{
   int rn,m1,m2,m3,avg,total;
   char str[100];
   public:
   void getdata()
   {
   	cout<<"enter a name :\n";
   	cin>>str;
   	cout<<"enter reg no and marks ";
   	cin>>rn>>m1>>m2>>m3;
	   }	
	   int calculation()
	   {
	   	total=m1+m2+m3;
	   	avg=total/3;
	   	cout<<"total marks :"<<total;
	   	cout<<"\navg marks :"<<avg;
	   }
	   void display()
	   {
	   	if(avg>=90)
	   		cout<<"\ngrade 'a' ";
			   else
			   if(avg>=80&&avg<90)
			   cout<<"\ngrade 'b'";
			   else
			   if(avg>=70&&avg<80)
			   cout<"\ngrade 'c'";
			   else
			   cout<<"\nfail"; 
	   }
};
int main()
{
	student s;
	s.getdata();
	s.calculation();
	s.display();
}
