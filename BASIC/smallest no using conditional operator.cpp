#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,c,s;
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;	
	cout<<"ENTER THREE NO.s-";
	cin>>a>>b>>c;
	s=(a<b)?((a<c)?a:c):(b<c)?b:c;
	cout<<"SMALLEST NUMBER:"<<s;
	cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
