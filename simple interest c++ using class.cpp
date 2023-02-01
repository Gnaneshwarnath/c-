#include<iostream>
#include<math.h>
using namespace std;
class interest
{
	int p,n,r,si,ci;
	public:
		int getdata()
		{
			cout<<"enter principle amount,no of years,rate of interest:";
			cin>>p>>n>>r;
		}
		int display()
		{
		si=p*n*r/100;
		ci=p*pow((1+r/100),n);
		cout<<"simple interest:"<<si;
		cout<<"compound interest:"<<ci;		
		}
};
int main()
{
	interest s;
	s.getdata();
	s.display();
}
