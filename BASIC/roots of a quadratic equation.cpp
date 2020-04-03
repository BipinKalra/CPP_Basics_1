//program to find roots of a qudratic equation

#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	int a,b,c;
	float d,x1,x2;
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
	cout<<"ENTER COFFICIENT OF X^2:";
	cin>>a;
	cout<<"\n\nENTER COFFICIENT OF X:";
	cin>>b;
	cout<<"\n\nENTER COFFICIENT OF CONSTANT:";
	cin>>c;
	
	d=(pow(b,2)-(4*a*c));
	cout<<"\n\nDISCRIMINANT="<<d;
	x1=(-b+sqrt(d))/2*a;
	x2=(-b-sqrt(d))/2*a;
	cout<<"\nROOTS OF THE EQUATION ARE="<<x1<<","<<x2;
	cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
