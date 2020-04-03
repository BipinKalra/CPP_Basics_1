#include<iostream>
#include<conio.h>
using namespace std;
int a,b;
void swap(int &c,int &d)
{
	int t;
	t=c;
	c=d;
	d=t;
}
void swap2(int c,int d)
{
	int t;
	t=c;
	c=d;
	d=t;
}
int main()
{
	int a,b;
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
	cout<<"ENTER TWO NUMBERS:";
	cin>>a>>b;
	swap2(a,b);
	cout<<"\nOutput when numbers passed by call by value method:"<<a<<" "<<b<<endl
		<<"i.e Changes in variables of functons are not reflected in actual variables.";
	swap(a,b);
	cout<<"Output when numbers passed by call by reference method:"<<a<<" "<<b<<endl
		<<"i.e Changes in variables of functons are reflected in actual variables.";
	cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
