#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j;
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
	for(i=4;i>=1;i--)
	{
		for(j=4;j>=i;j--)
		{
			cout<<j<<" ";
		}
		cout<<" "<<endl;
	}
	cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
