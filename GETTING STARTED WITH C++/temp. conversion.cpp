#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int ch;
	float c,f;
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
	cout<<"MENU:"<<endl
		<<"1.CELSIUS to FAHRENHEIT.."<<endl
		<<"2.FAHRENHEIT to CELSIUS.."<<endl
		<<"ENTER CHOICE:";
	cin>>ch;
	switch(ch)
	{
		case 1:cout<<"ENTER TEMPERATURE IN CELSIUS:";
				cin>>c;
				f=((9/5)*c)+32;
				cout<<"TEMPERATURE IN FAHRENHEIT:"<<f;
				break;
		case 2:cout<<"ENTER TEMPERATURE IN FAHRENHEIT:";
				cin>>f;
				c=5/9*(f-32);
				cout<<"TEMPERATURE IN CELSIUS:"<<c;
				break;
	}
	cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
