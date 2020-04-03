#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	int n,n5;
	float sq;
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
	cout<<"ENTER NO.-";
	cin>>n;
	if((n%2==1)&&(n>0))
	{
		sq=sqrt(n);
		cout<<"SQUARE root OF n-"<<sq;
	}
	else
	{
		n5=pow(n,5);
	cout<<"power 5 of "<<n<<"-"<<n5;
	}
	cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
