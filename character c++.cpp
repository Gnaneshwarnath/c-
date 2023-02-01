#include<iostream>
using namespace std;
class number
{
	int n,i,temp;
	char a[10];
	public:
		int getdata()
		{
			cout<<"enter no.of elements:";
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
				for(int j=i+1;j<=n;j++)
				{
					if(a[i]<a[j])
					{
						temp=a[i];
						a[i]=a[j];
						a[j]=temp;
					}
				}
				cout<<"\nafter sorting:"<<a[i];
			}
		}
	};
		int main()
		{
		number s;
		s.getdata();
		s.input();
		s.display();
	}
	