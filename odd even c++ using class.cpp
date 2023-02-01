#include<iostream>
#include<math.h>
using namespace std;
class number
{
	int n;
	public:
		int getdata()
		{
			cout<<"enter a number:";
			cin>>n;
		}
		int display()
		{
			if(n%2==0){
				cout<<"even";
			}
			else
			cout<<"odd";
		}
};
int main()
{
	number n;
	n.getdata();
	n.display();
}
