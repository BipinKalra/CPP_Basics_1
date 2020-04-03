#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i;
	char ch;
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
	for(i=1;i<=4;i++)
	{
		for(ch='A';ch<='D';ch++)
		{
			cout<<ch<<endl;
		}
		cout<<"";
	}
	cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
