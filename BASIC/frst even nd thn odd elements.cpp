#include<iostream>
#include<conio.h>
using namespace std;
void accept(int a[])
{
	for(int i=0;i<5;i++)
		cin>>a[i];
		
}
void display(int a[])
{
	for(int i=0;i<5;i++)
		cout<<a[i]<<" ";
}
void copy(int a[])
{
	int i,j=0;
	int b[5];
	for(i=0;i<5;i++)
	{
		if(a[i]%2==0)
		{
			b[j]=a[i];
			j++;
		}
	}
	for(i=0;i<5;i++)
	{
		if(a[i]%2!=0)
		{
			b[j]=a[i];
			j++;
		}
	}
	display(b);
}
int main()
{
	int a[5]={1,6,5,8,10},b[5];
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
	cout<<"\nENTER ARRAY(5):";
	accept(a);
	cout<<"\nARRAY:";
	display(a);
	cout<<"\nNEW ARRAY:";
	copy(a);
	cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
