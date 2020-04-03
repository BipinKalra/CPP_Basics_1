#include<iostream>
#include<conio.h>
using namespace std;
int length(char c[])
{
	int i,s=0;
	for(i=0;c[i]!='\0';i++)
	s++;
	return s;
}

void substring(char a[],char c[])
{
	int i,j=0,k,cnt=0,s;
	
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		{
			for(k=i+1,j=0;a[k]!=' ',c[j]!='\0';k++,j++)
			{
				if(a[k]==c[j])
				{
					cnt++;
				}
				
			}
			
		}
		
	}
	s=length(c);
	if(cnt==s)
	cout<<"WRD FOUND";
	else
	cout<<"WRD NOT FOUND";
}
int main()
{
	char a[50],c[10];
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
	cout<<"ENTER STRING:";
	cin.getline(a,30);
	cout<<"\nENTER WRD:";
	cin.getline(c,10);
	substring(a,c);
	cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
