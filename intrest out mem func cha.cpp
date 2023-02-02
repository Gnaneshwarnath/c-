#include<iostream>
using namespace std;
#include<math.h>
class intrest
{
	int p,n,age;
	float si,ci;
	public:
		int getdata();
		int display();
};
int intrest::getdata()
{
	cout<<"enter principle amount and no of years :\n";
	cin>>p>>n;
	cout<<"enter age :\n";
	cin>>age;
}
int intrest::display()
{
	if(age>60)
	   	{
	   	si=p*n*5/100;
	   	ci=p*pow((1+5/100),n);
		}
		else
		{
		si=p*n*10/100;
	   	ci=p*pow((1+10/100),n);
		}
		cout<<"simple intrest :"<<si;
		cout<<"\ncompound intrest :"<<ci;
}
int main()
{
	intrest s;
	s.getdata();
    s.display();
}
