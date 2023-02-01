#include<iostream>
#include<math.h>
using namespace std;
class circle
{
	float r,a,c;
	public:
		int getdata()
		{
			cout<<"enter radius:";
			cin>>r;
		}
		int display()
		{
			a=3.14*r*r;
			c=2*3.14*r;
			cout<<"area of circle:"<<a;
			cout<<"circumference of circle:"<<c;
		}
};
int main()
{
circle r;
r.getdata();
r.display();
}
