#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	int n,s;
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
	cout<<"ENTER NO. OF TERMS:";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		s=pow(2,i);
		cout<<s<<"," ;
	}
	cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
