#include<iostream>
#include<conio.h>
using namespace std;

void max(int n[])
{
	int i=0,k=0;
	while(i<10)
	{
		if(n[k]>n[i]);
				
		else
		{
			k=i;
		}
		i++;
	}
	cout<<n[k];
}

int main()
{
	int n[10]={11,2,35,4,5,6,7,8,9,10};
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
	cout<<"ENTER ARRAY(10):";
	for(int i=0;i<10;i++)
		cin>>n[i];
	max(n);
	cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
