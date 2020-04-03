#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	int n,n2,n3;
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
	cout<<"ENTER NO.-";
	cin>>n;
	if(n%2==0)
	{
		n2=pow(n,2);
		cout<<"SQUARE OF n-"<<n2;
	}
	else
	{
		n3=pow(n,3);
	cout<<"CUBE OF n-"<<n3;
	}
	cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
