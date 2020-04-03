//program to print greatest no.
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	int a,b,c;
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
	cout<<"\nENTER NO. 1=";
	cin>>a;
	cout<<"\nENTER NO. 2=";
	cin>>b;	
	cout<<"\nENTER NO. 3=";
	cin>>c;
	
	if((a>b)&&(a>c))
	cout<<"\ngreatest is-"<<a;
	else
	if((b>c)&&(b>a))
	cout<<"\ngreatest is-"<<b;
	else
	cout<<"\ngreatest is-"<<c;
	cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
