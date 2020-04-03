#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num,leven=0,lodd=1;
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
	cout<<"ENTER NO.s(0 to end list):"<<endl;
	do
	{
		cin>>num;
		if(num%2==0)
		{
			if(num>leven)
			leven=num;
		}
		else
		if(num>lodd)
		lodd=num;
	}while(num!=0);
	cout<<"LARGEST EVEN NO.:"<<leven<<endl;
	cout<<"LARGEST ODD NO.:"<<lodd;
	cout<<"\n*****************************************************************************";
	
	getch();
	return 0;
}
