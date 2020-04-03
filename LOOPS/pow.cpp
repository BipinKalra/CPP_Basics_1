#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	int x,n,s;
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
	cout<<"ENET VALUE OF x:";
	cin>>x;
	cout<<"TERMS NO:";
	cin>>n;
	for(int s=0, i=1;i<=n;i++)
	{
		s=s+pow(x,i);
		cout<<s<<",";
	}
	cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
