#include<iostream>
#include<conio.h>
using namespace std;

void pre(int n[])
{
	int i;
	for(i=1;i<9;i++)
	{
		cout<<n[i-1]<<"\t\t"<<n[i]<<"\t"<<n[i+1]<<endl;
	}
}

int main()
{
	int n[10];
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
	cout<<"ENTER ARRAY(10):";
	for(int i=0;i<10;i++)
		cin>>n[i];
	cout<<"PREDESSOR\tNUMBER\tSUCCESSOR"<<endl;
	cout<<"-\t\t"<<n[0]<<"\t"<<n[1]<<endl;
	pre(n);
	cout<<n[8]<<"\t\t"<<n[9]<<"\t-"<<endl;
	cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
