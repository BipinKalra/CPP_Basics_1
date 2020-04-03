#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j,n,k;
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
	cout<<"ENTER NO. OF max STARS(odd number):";
	cin>>n;
	for(i=1;i<=(n/2);i++)
	{
		for(k=(n/2)+1;k>=i;k--)
		cout<<" ";
		for(j=1;j<=(2*i)-1;j++)
		cout<<"*";
		cout<<endl;
	}
	for(i=1;i<=(n/2)+1;i++)
	{
		for(k=1;k<=i;k++)
		cout<<" ";
		for(j=n;j>=(2*i)-1;j--)
		cout<<"*";
		cout<<endl;
	}
	cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
