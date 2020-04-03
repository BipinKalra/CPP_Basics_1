#include<iostream>
#include<conio.h>
using namespace std;

char space(char str[])
{
	int i,c=0;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
			c++;
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
	cout<<"\nNO OF WORDS:"<<c+1<<endl;
	
}

int main()
{
	char str[50];
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
	cout<<"ENTER STRING:";
	cin.getline(str,50);
	space(str);
	cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
