//swapping

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b;
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
	cout<<"\nENTER FIRST NO.-";
	cin>>a;
	cout<<"\nENTER SECOND NO.-";
	cin>>b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"\nNO. ON SWAPPING-"<<a<<","<<b;
	cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
