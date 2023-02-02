#include<iostream>
using namespace std;
class space
{
	int x,y,z;
	public:
		getdata(int a,int b,int c);
		void display();
		void operator-();
};
space::getdata(int a,int b,int c)
{
	x=a;
	y=b;
	z=c;
}
void display()
{
	int x,y,z;
	cout<<x<<y<<z;
}
void space::operator-()
{
	x=-x;
	y=-y;
	z=-z;
}
main()
{
	space s(-2,-6,8);
	s.getdata;
	-s;
	s.display();
}










