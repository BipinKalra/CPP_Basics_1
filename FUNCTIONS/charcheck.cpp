#include<iostream>
#include<conio.h>
using namespace std;
char check(char str[], char ch)
{
		int i,c=0;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==ch)
		c++;
	}
	cout<<"NUMBER OF TIMES "<<ch<<" OCCURED: "<<c;
}
int main()
{
	char ch,str[50];
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
	cout<<"ENTER STRING:";
	cin.ignore();
	cin.getline(str,50);
	cout<<"ENTER CHARACTER TO CHECK:";
	cin>>ch;
	check(str,ch);
	cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
