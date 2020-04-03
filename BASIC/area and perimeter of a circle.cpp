//area and perimeter of circle

#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
	float r,p,a;
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
	cout<<"ENTER RADIUS OF A CIRCLE=";
	cin>>r;
	p=2*3.14*r;
	a=3.14*r*r;
	cout<<"\n\nPERIMETER="<<p;
	cout<<"\n\nAREA="<<a;
	
	if(a>p)
	cout<<"\n\nAREA IS GREATER THAN PERIMETER";
	else
	cout<<"\n\nPERIMETER IS GREATER THAN AREA";
cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
