#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	
	char i,j,ch;
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
	cout<<"ENTER LAST ALPHABET:";
	cin>>ch;
	for(i=(int)'a';i<=int(ch);i++)
	{
		for(j='a';j<=i;j++)
		{
			cout<<j;
		}
		cout<<endl;
	}
	cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
