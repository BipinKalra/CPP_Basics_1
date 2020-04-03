#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j,k,n;
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
	cout<<"ENTER NO. OF STARS IN FIRST LINE:";
	cin>>n;
	for(i=1;i<=(n/2)+1;i++)
	{
		for(k=1;k<i;k++)
		cout<<" ";
		for(j=n;j>=(2*i)-1;j--)
		cout<<"*";
		cout<<endl;
	}
	cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
