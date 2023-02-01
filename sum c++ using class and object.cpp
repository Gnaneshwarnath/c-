#include<iostream>
using namespace std;
class sum
{
	int x,y,s=0;
	public:
		int getdata()
		{
			cout<<"enter x and y values:";
			cin>>x>>y;
		}
		int display()
		{
			s=x+y;
			cout<<"sum of two numbers:"<<s;
		}
};
int main()
{
	sum s;
	s.getdata();
	s.display();
}
