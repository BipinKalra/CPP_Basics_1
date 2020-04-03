#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j,m,k,z,r;
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
	cout<<"ENTER NO. OF ROWS:";
	cin>>r;
	for(i=1;i<=(r/2)+1;i++)
	{
		
		for(k=(r/2)+1;k>i;k--)
		{
		cout<<" ";
		}
		cout<<"*";
		for(m=(2*i)-1;m>1;m--)
		{
			cout<<" ";
		}
		cout<<"*";
		 cout<<endl;
			
	}
	for(i=1;i<=(r/2);i++)
	{
		
		for(k=1;k<=i;k++)
		{
			cout<<" ";
		}
		cout<<"*";
		for(z=(r-i);z>i;z--)
		{
		cout<<" ";
		}
		cout<<"*";
		cout<<endl;	
	}
	cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
