#include<iostream>
#include<conio.h>
#include<ctype.h>
using namespace std;
int main()
{
	char ch[20];
	int i=0;
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
	cout<<"ENTER STRING:";
	cin.getline(ch,20);
	while(ch[i]!='\n')
	{
		if(islower(ch[i]))
			ch[i]=toupper(ch[i]);
		else
			ch[i]=tolower(ch[i]);
			i++;
	}
	cout<<ch;
	cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
