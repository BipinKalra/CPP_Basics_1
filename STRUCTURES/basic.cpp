#include<iostream>
#include<conio.h>
using namespace std;

struct student
{
	char name[20];
	int age;
	char add[30];
	
};

void accept(student s[])
{
	int i;
	cout<<"ENTER DETAILS OF 3 PERSONS:\n";
	for(i=0;i<3;i++)
	{
		cout<<"ENTER NAME:";
		cin>>s[i].name;
		cout<<"ENTER AGE:";
		cin>>s[i].age;
		cout<<"ENTER ADDRESS:";
		cin>>s[i].add;	
	}
		
}
void display(student s[])
{	
	int i;
	for(i=0;i<3;i++)
	{
	cout<<"\nNAME:"<<s[i].name<<" "<<"AGE:"<<s[i].age<<" "<<"ADDRESS:"<<s[i].add<<endl;
	}	
}
	
	



int main()
{
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
		student s[3];
		accept(s);
		display(s);
	cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
