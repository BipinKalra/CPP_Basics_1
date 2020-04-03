#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;
int main()
{

	int s,i,n,x,l;
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
	cout<<"VALUE OF x:";
	cin>>x;
	cout<<"ENTER TERMS:";
	cin>>n;
	cout<<"SERIES:";
	for(s=0,i=1;i<=n;++i)
	{
		l=pow(x,i);
		s=s+l;
		cout<<l<<","	;
	}
	cout<<"\nSUM OF SERIES:"<<s;
	cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
