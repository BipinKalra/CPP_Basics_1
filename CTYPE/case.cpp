//a prog. displaying all ctype.h functions
#include<iostream>
#include<conio.h>
#include<ctype.h>
using namespace std;
int main()
{
	char ch,ch1;
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
	cout<<"ENTER CHARACTER:";
	cin>>ch;
	if(isalnum(ch))
	{
		if(isdigit(ch))
		{
			cout<<"digit";
		}
		else if(isalpha(ch))
		
		{
			cout<<"ALPHABET"<<endl;
			if(isupper(ch))
			{
				cout<<"UPPERCASE"<<endl;
			}
			else if(islower(ch))
			{
				cout<<"LOWERCASE"<<endl;
			}
		}
	}
	
	else
	cout<<"special character";
	cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
