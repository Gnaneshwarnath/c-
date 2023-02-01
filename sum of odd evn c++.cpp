#include<iostream>
#include<math.h>
using namespace std;
class number
{
	int i,j,n,a[10],o=0,e=0;
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
				if(a[i]%2==0)
				{
					e=e+a[i];
				}
				
		else
		{
		 o=o+a[i];
		}
	}
		cout<<"sum of even numbers:"<<e;
		cout<<"\nsum of odd numbers:"<<o;
	}
};
int main()
{
number s;
s.getdata();
s.input();
s.display();
}