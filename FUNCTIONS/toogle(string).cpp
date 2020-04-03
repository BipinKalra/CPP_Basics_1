#include<iostream>
#include<conio.h>
using namespace std;
void toggle(char str[])
{
	int i;
	for(i=0;str[i]!='\0';i++)	
	{
		if(str[i]>='a' && str[i]<='z')		
		{
			str[i]=str[i]-32;				
		}	
		else if(str[i]>='A' && str[i]<='Z')	
		{
			str[i]=str[i]+32;	
		}	
		cout<<str[i];
	}
}
int main()
{
	char str[20];
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
	cout<<"ENTER STRING:";
	cin.getline(str,20);
	toggle(str);
	cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
