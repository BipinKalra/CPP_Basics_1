#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,r,rev=0;
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
	cout<<"ENTER NO:";
	cin>>n;
	while(n!=0)
	{
		r=n%10;
		rev=(rev*10)+r;
		n=n/10;
	}	
	cout<<"REVERSE NO:"<<rev;
	cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
