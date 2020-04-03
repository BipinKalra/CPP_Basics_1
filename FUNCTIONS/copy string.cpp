#include<iostream>
#include<conio.h>
using namespace std;
void copy(char str1[],char str2[])
{
	int i,k=0;
	char str3[40];			
	
	for(i=0;str1[i]!='\0';i++,k++)
	{
		str3[k]=str1[i];		
	}
	for(i=0;str2[i]!='\0';i++,k++)
	{
		str3[k]=str2[i];		
	}
	str3[k]='\0';	
	cout<<str3;
}
int main()
{
	char str1[20],str2[20];
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
	cout<<"ENTER WORD1:";
	
	cin.getline(str1,20);
	cout<<"ENTER WORD2:";

	cin.getline(str2,20);
	cout<<"STRINGs AFTER BEING COPIED:";
	copy(str1,str2);
	cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
