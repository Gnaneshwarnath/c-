#include<iostream>
using namespace std;
#include<math.h>
class weather
{
	int f[10],n,i;
	float c;
	public:
		int getdata();
		int input();
		int display();
};
int weather::getdata()
{
	cout<<"enter n value :\n";
	cin>>n;
}
int weather::input()
{
	for(i=1;i<=n;i++)
	cin>>f[i];
}
int weather::display()
{
	for(i=1;i<=n;i++)
	{
		c=(f[i]-32)*5/9;
		cout<<"celsius :"<<c;
	}
}
int main()
{
	weather s;
	s.getdata();
	s.input();
    s.display();
}
