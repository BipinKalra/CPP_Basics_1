#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int k;
	char i,j,m,ch;
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
	cout<<"ENETR LAST ALPHABET:";
	cin>>ch;
	for(i=(int)'a';i<=(int)ch;i++)
	{
		for(k=(int)ch;k>i;k--)
		{
			cout<<" ";
		}
	
		for(j='a';j<=i;j++)
		{
			cout<<j;
		}
		for(m=i-1;m>='a';m--)
		{
			cout<<m;
		}
	
		cout<<endl<<endl;
	}
	cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
