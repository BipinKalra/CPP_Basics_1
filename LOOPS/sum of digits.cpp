#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	int s=0,n,r;
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
	cout<<"ENTER no.";
	cin>>n;
	while(n!=0)
	{
		r=n%10;
		s=s+r;
		n=n/10;
		
	}
	cout<<"SUM OF DIGITS:"<<s;
	cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
