#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int length(char str[])	
{
	int i,c=0;
		for(i=0;str[i]!='\0';i++)
		{
			c++;
		}
		return c;
}
void reverse(char str[])
{
	int last=length(str);
	int j=0,i=last-1;
	char str2[last-1],temp;	
		while(i>=0)
		{
		str2[j]=str[i];				
			i--;
			j++;
		}
		str2[j]='\0';
		cout<<str2;
		if(strcmp(str2,str)==0)
		cout<<"palendrome";
		else
		cout<<"np";
}
int main()
{
	char str[20];
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
	cout<<"ENTER STRING:";
	cin.getline(str,20);
	reverse(str);
	cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
