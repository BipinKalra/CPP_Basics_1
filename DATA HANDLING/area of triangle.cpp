#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float b,h,a;
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
	cout<<"ENTER VaLUE OF BASE OF THE TRIANGLE=";
	cin>>b;
	cout<<"ENTER VALUE OF HEIGHT OF THE TRIANGLE=";
	cin>>h;
	a=b*h*1/2;
	cout<<"AREA OF THE TRIANGLE="<<a;
	
	cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
