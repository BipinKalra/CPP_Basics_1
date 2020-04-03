#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int ch,r;
	float a,p;
	do
	{
		system("cls");
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
	cout<<"RADIUS:";
	cin>>r;
	cout<<"MENU";
	cout<<"\n0 exit";
	cout<<"\n1 area";
	cout<<"\n2 perimeter";
	cout<<"\nENTER CHOICE:";
	cin>>ch;
	switch(ch)
	{
		case 1:a=3.14*r*r;
		cout<<"AREA:"<<a;
		break;
		case 2:p=2*3.14*r;
		cout<<"PERIMETER:"<<p;
		break;
		case 0:exit(0);
	}
	cout<<"\n*****************************************************************************";	
	}
	while(ch!=0);
	getch();
	return 0;
}
