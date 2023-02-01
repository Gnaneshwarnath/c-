#include<iostream>
using namespace std;
class leapyear
{
	int y;
	public:
		int getdata()
		{
			cout<<"enter a year:";
			cin>>y;
		}
		int display()
		{
		if(y%4==0){
			cout<<"leap  year";}
			else
			cout<<"not a leap year";}
};
int main()
{
	leapyear a;
	a.getdata();
	a.display();
}
