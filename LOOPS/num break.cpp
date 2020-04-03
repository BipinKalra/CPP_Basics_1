#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,c=0,r;
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
	cout<<"ENTER NO:";
	cin>>n;
	while(n!=0)
	{
		r=n%10;
		c=++c;
		n=n/10;
	}
	cout<<r<<c;
	cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
