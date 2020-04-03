#include<iostream>
#include<conio.h>
using namespace std;

void prime(int n[])
{
	int i,c=0,j;
	for(i=0;i<10;i++)
	{
		int flg=1;
		for(j=2;j<n[i]/2;j++)
		{
			flg=1;
			if(n[i]%j==0)
			{
				flg=0;
				break;
			}
				
		}
		if(flg==1)
			{cout<<n[i]<<" ";}
	}
	
}

int main()
{
	int n[10];
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
	cout<<"ENTER ARRAY(10):";
	for(int i=0;i<10;i++)
		cin>>n[i];
	prime(n);
	cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
