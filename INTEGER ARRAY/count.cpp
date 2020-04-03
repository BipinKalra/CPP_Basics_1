#include<iostream>
#include<conio.h>
using namespace std;

void chk(int n[])
{
	int i,o=0,e=0,z=0;
	
	for(i=0;i<10;i++)
	{
		if(n[i]%2==0)
			e++;
		else if(n[i]%2!=0)
			o++;
		else if(n[i]==0)
			z++;	
		
	}
	cout<<"NO OF ODD No.s="<<o<<endl;
	cout<<"NO OF EVEN No.s="<<e<<endl;
	cout<<"NO OF ZEROS No.s="<<z<<endl;
}
void accept(int m[])
{
	for(int i=0;i<4;i++)
		cin>>m[i];
}
int main()
{
	int n[10];
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
	cout<<"\nENTER ARRAY(10):";
	accept(n);
	
	chk(n);
	cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
