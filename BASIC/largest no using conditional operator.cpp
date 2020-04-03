#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,c,l;
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;	
	cout<<"ENTER THREE NO.s-";
	cin>>a>>b>>c;
	l=(a>b)?((a>c)?a:c):(b>c)?b:c;
	cout<<"LARGEST NUMBER:"<<l;
	cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
