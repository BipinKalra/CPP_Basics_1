#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	float n,r,a,p;
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
	cout<<"ENTER RADIUS-";
	cin>>r;
	cout<<"\n1.AREA."<<endl
		<<"2.PERIMETER.";
	cout<<"\nENTER YOUR CHOICE:";
	cin>>n;
	if(n==1)
	{
		a=3.14*r*r;
		cout<<"AREA OF CIRcLE-"<<a;
	}
	else
	{
		p=2*3.14*r;
	cout<<"PERIMETER OF CIRCLE-"<<p;
	}
	cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
