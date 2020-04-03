#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int x,p,i;
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
	cout<<"ENTER NUMBER:";
	cin>>x;
	for(p=1,i=x;i>0;i--)
	{
		p=p*i;
	}
	cout<<"FACTORIAL OF "<<x<<":"<<p;
	cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
