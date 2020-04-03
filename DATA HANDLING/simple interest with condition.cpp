#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int p,r,t,s;
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
	cout<<"If time is greater than 8 years then rate of interest is 8% and otherwise 12%.";
	cout<<"\nPRINCIPAL AMOUNT-";
	cin>>p;
	cout<<"TIME-";
	cin>>t;
		s=p*r*t;
	
	if (t>8)
{
	r=8/100;

	cout<<"SIMPLE INTEREST-"<<s;
}	
	else
	r=12/100;
	
	cout<<"SIMPLE INTEREST-"<<s;
	cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
