#include<iostream>
#include<conio.h>
using namespace std;

int length(char ch[])
{
	int i,c=0;
	for(i=0;ch[i]!='\0';i++)
	c++;
	return c;
}
void reverse(char ch[])
{
	int i=0,l,t;
	l=length(ch)-1;
	while(i<l)
	{
		t=ch[i];
		ch[i]=ch[l];
		ch[l]=t;
		i++;
		l--;
	}
	cout<<"REVERSED STRING:"<<ch<<endl;
}
void toggle(char ch[])
{
	int i;
	for(i=0;ch[i]!='\0';i++)
	{
		if((ch[i]>='a')&&(ch[i]<='z'))
		{
			ch[i]=ch[i]-32;
		}
		else if((ch[i]>='A')&&(ch[i]<='Z'))
		{
			ch[i]=ch[i]+32;
		}
	}
	cout<<"TOGGLE CASE:"<<ch<<endl;
}
void wrdcount(char ch[])
{
	int i=1,j=length(ch),c=1;
	for(i=0;ch[i]!='\0';i++)
	{
		if(ch[i]==' ')
		{
			c++;
		}
	}
	cout<<"NO OF WORDS:"<<c<<endl;

}

void palendrome(char ch[])
{
	int i,j=length(ch)-1,c=0;
	for(i=0;ch[i]!='\0';i++)
	{
		if(ch[i]==ch[j])
		{
			c++;
		}
		else
		{break;}
	}
	if(c==j/2)
	cout<<"\nSTRING IS PALENDROME:"<<endl;
	else
	cout<<"\nSTRING IS NOT A PALENDROME"<<endl;
}

void character(char ch[],char ch2)
{
	int i,cnt=0;
	for(i=0;ch[i]!='\0';i++)
	{
		if(ch[i]==ch2)
		{cnt++;}
		
	}
	cout<<"LETTER "<<ch2<<" APPERAS "<<cnt<<" TIMES"<<endl;
}
void catenation(char ch[],char str[])
{
	int i,j=length(ch),k;
	for(i=j,k=0;str[k]!='\0';k++,i++)
	{
		ch[i]=str[k];
	}
	ch[i]='\0';
	cout<<"STRING AFTER CATENATION:"<<ch;
}



int main()
{
	char ch[20],ch2,str[10];

	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
	cout<<"ENTER STRING1:";
	cin.getline(ch,20);cout<<endl;
	toggle(ch);
	reverse(ch);
	palendrome(ch);
	cout<<"ENTER STRING1:";
	cin.getline(ch,20);cout<<endl;
	wrdcount(ch);
	cout<<"ENTER STRING1:";
	cin.getline(ch,20);cout<<endl;
	cout<<"ENTER STRING2:";
	cin.getline(str,10);cout<<endl;
	catenation(ch,str);
	cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
