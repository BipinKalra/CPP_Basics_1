#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	int p,r,t,s,c;
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
	cout<<"ENTER PRINCIPAL AMOUNT-"<<endl;
	cin>>p;
	cout<<"ENTER RATO OF INTEREST-"<<endl;
	cin>>r;
	cout<<"ENTER TIME PERIOD-"<<endl;
	cin>>t;
	s=(p*r*t)/100;
	c=p*pow((1+r/100),t);
	cout<<"SIMPLE INTEREST-"<<s;
	cout<<"\nCOMPOUND INTEREST-"<<c;
	cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
