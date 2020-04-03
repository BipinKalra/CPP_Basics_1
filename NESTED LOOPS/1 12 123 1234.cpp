#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j;
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<j<<" ";
		}
		cout<<" "<<endl;
	}
	cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
