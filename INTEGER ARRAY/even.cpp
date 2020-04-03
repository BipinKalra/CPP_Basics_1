#include<iostream>
#include<conio.h>
using namespace std;

void even(int n[])
{
	int i,j;
	for(i=0;i<10;i++)
	{
		if(n[i]%2==0)
		cout<<n[i]<<" ";
	}

}

int main()
{
	int n[10]={2,2,9,9,3,5,4,6,6,3};
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
	cout<<"ENTER ARRAY(10):";
	for(int i=0;i<10;i++)
		cin>>n[i];
	cout<<"Even numbers in array:";
	even(n);
	cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
