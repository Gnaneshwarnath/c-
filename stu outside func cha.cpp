#include<iostream>
using namespace std;
class student
{
	int rn,m1,m2,m3;
	char str[100];
	float total,avg;
	public:
		int getdata();
		int calculation();
		int display();
};
int student::getdata()
{
	cout<<"enter name :\n";
	cin>>str;
	cout<<"enter reg no and marks\n";
	cin>>rn>>m1>>m2>>m3;
}
int student::calculation()
{
	total=m1+m2+m3;
	avg=total/3;
	cout<<"total marks :"<<total;
	cout<<"\navg marks :"<<avg;
}
int student::display()
{
	if(avg>=90)
	cout<<"grade 'a'";
	else if(avg>=70&&avg<90)
	cout<<"grade 'b'";
	else if(avg>=50&&avg<70)
	cout<<"grade 'c'";
	else
	cout<<"fail";
}
int main()
{
	student s;
	s.getdata();
	s.calculation();
    s.display();
}
