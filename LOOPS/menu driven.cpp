#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int r,ch;
	float a,p;
	
	do
	{
	system("cls");
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
	
	cout<<"MENU"<<endl;
	cout<<"0EXIT"<<endl;
	cout<<"1AREA"<<endl;
	cout<<"2PERIMETER"<<endl;
	cin>>ch;
	switch(ch)
	{
		
		
		case 1:
			cout<<"ENTER RADIUS:";
			cin>>r;
			a=3.1*r*r;
			cout<<a;
			break;
		case 2:
			cout<<"ENTER RADIUS:";
			cin>>r;
			p=2*3.14*r;
			cout<<p;
			break;
		case 0: 
		exit(0);
		break;
		default:cout<<"WRONG CHOICE.";
	}
	cout<<"\nCHOOSE 0 TO EXIT.";
	getch();
	}
	while(ch!=0);
	cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
