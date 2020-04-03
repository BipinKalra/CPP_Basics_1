#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,first=0,second=1,f=0;
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
	cout<<"ENTER NO OF TERMS FOR FIBONNICI SEQUENCE:"<<endl;
	cin>>n;
	cout<<1<<",";
	for(int i=1;i<=n;i++)
	{
		f=first+second;
		first=second;
		second=f;
		cout<<f<<"," ;
	}
		cout<<"\n*****************************************************************************";
	getch();
	return 0;
	
	
}
