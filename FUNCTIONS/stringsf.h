#include<iostream>
void copy(char str[])
{
	int i;
	char str2[20];			//size of str2 shud be same as that of str
	for(i=0;str[i]!='\0';i++)
	{
		str2[i]=str[i];		//copies str1 to str2
	}
	str2[i]='\0';		//to end string otherwise some garbage value will be displayed after requird
	cout<<str2;
}

int length(char str[])		//find length of string
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
	int j=last-1,i;
	char str2[last],temp;		//size of str2=length of str
		for(i=0;str[i]!='\0';i++)
		{
		str2[j]=str[i];				//copies 1st character of str in second last space of str2 nd so on..
			
			j--;
		}
		str2[last]='\0';	//to end str2 nd prevent garbage values
		cout<<str2;

}

void toggle(char str[])
{
	int i;
	for(i=0;str[i]!='\0';i++)		//to chk character by character
	{
		if(str[i]>='a' && str[i]<='z')		//chk lowercase
		{
			str[i]=str[i]-32;				//converts to uppercase
		}	
		else if(str[i]>='A' && str[i]<='Z')		//chks uppercase
		{
			str[i]=str[i]+32;		//converts to lowercase
		}	
		cout<<str[i];
	}
}
