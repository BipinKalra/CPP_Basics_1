#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,num,r,rev=0;
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
	cout<<"ENTER NO:";
	cin>>num;
	n=num;
	while(n!=0)
	{
		r=n%10;
		rev=(rev*10)+r;
		n=n/10;
	}	
	cout<<"REVERSE NO."<<rev<<endl;
	if (rev==num)
	cout<<"ITS A PALENDROME NO.";
	else
	cout<<"ITS NOT A PALENDROME NO";
	cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
