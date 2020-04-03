#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n;
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
	cout<<"ENTER NO. OF TERMS FOR SERIES OF SQUARES OF NATURAL NO.s:";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cout<<i*i<<",";
	}
	cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
