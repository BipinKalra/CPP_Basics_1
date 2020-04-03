#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,r,s=0;
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
	cout<<"ENTER A NO(0 to end list):";
	do
	{
		cin>>n;
		s+=n;
	}while(n!=0);
	cout<<"SUM OF NUMBERS:"<<s;
	cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
