#include<iostream>
using namespace std;
class number
{
	int n,a[10],i;
	public:
		int getdata()
		{
			cout<<"enter no.of elemnts:";
			cin>>n;
		}
		int input()
		{
			for(int i=1;i<=n;i++)
			{
				cin>>a[i];
			}
		}
		int display()
	{
		for(int i=1;i<=n;i++)
		{
			cout<<"\nentered elemnts:"<<a[i];}
		}	
};
int main()
{
	number s;
	s.getdata();
	s.input();
	s.display();
}