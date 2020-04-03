#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

void find(int n[])
{
	int i;
	float c;
	for(i=0;i<10;i++)
	{
		for(int j=1;j<=n[i]/2;j++)	
		{
			c=sqrt(n[i]);
			if(c==j)
				cout<<n[i]<<" ";
		}	
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
	cout<<"Perfect Squares in array are:";
	find(n);
	cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
