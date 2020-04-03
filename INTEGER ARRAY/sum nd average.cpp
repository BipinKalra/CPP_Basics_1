#include<iostream>
#include<conio.h>
using namespace std;

void sum(int n[])
{
	int i,sum=0;
	double avg;
	for(i=0;i<10;i++)
	{
		sum=sum+n[i];
		
	}
	avg=sum/10;
	cout<<"SUM="<<sum<<endl;
	cout<<"AVERAGE="<<avg<<endl;
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
	sum(n);
	cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
