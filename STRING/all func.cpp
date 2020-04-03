#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main()
{
	char str1[200],str2[100],str3[100],str4[200];
	int i,ch;
	do
	{
		system("cls");
		cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
	cout<<"\nENTER STRING:";
	cin>>str1;
	cout<<"MENU"<<endl;
	cout<<"1.Printing name depending on length of string."<<endl;
	cout<<"2.Palendrome"<<endl;
	cout<<"3.Conversion"<<endl;
	cout<<"0.Exit"<<endl;	
	cout<<"ENTER UR CHOICE:";
	cin>>ch;
	
	switch(ch)
		{
			case 1:	for(i=1;i<=strlen(str1);i++)
					{
						cout<<str1<<endl;
					}
					break;
			case 2:	strcpy(str2,str1);        
					strrev(str2);
					if(strcmp(str1,str2)==0)    
					cout<<"STRING IS PALENDROME(CASE SENSITIVE):";
					else if(strcmpi(str1,str2)==0)        
					cout<<"STRING IS PALENDROME(IGNORING CASE):";
					else
					cout<<"STRING IS NOT PALENDROME";
					break;
			case 3:	cout<<"ENTER ONE MORE STRING:";
					cin>>str3;
					cout<<endl<<strcat(str1,str3); 
					strcpy(str4,strcat(str1,str3));
					cout<<endl<<strupr(str4);
					cout<<endl<<strlwr(str4);
					break;
			case 0:exit(0);
		
					
		}
		
	}while(ch!=0);
	cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
