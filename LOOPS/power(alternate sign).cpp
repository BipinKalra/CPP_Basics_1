#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;
int main()
{

	int s,i,n,x;
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
	cout<<"VALUE OF x:";
	cin>>x;
	cout<<"ENTER TERMS:";
	cin>>n;
	cout<<"SERIES:";
	int sign=1;
	for(i=1;i<=n;++i)
	{
		s=pow(x,i)*sign;
		sign=sign*(-1);
		cout<<s<<",";	
	}
	cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
