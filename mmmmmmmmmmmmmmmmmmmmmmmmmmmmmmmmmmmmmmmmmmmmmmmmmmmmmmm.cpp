using namespace std;
#include<iostream>
class employee
{
	int empid,basicsalary,da,ta,hra,pf,lic,ded,netsalary,gs;
	char name[20];
	public:
		employee()
		{
			
		}
		employee(int a,int b,char x[20])
		{
			empid=a;
			basicsalary=b;
			name[20]=x[20];
		}
		void calculate()
		{
	        hra=basicsalary*10/100;
			da=basicsalary*12/100;
	        ta=basicsalary*12/100;
	        pf=basicsalary*5/100;
	        lic=basicsalary*7/100;
	        cout<<"\ngrosspay:";
         	gs=basicsalary+da+ta+hra;
        	cout<<gs;
	        cout<<"\ndeduction:";
	        ded=pf+lic;
	        cout<<ded;
	        cout<<"\nnetsalary:";
           	netsalary=gs-ded;
	        cout<<netsalary;
		}
};
int main()
{
	employee e(123,100000,"gnaneshwar");
	e.calculate();
	return 0;
}
