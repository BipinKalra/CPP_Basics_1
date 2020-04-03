#include<iostream>
#include<conio.h>
using namespace std;
int c[8];
void accept(int m[])
{
	for(int i=0;i<4;i++)
		cin>>m[i];
}
void display(int m[],int n)
{
	for(int i=0;i<n;i++)
	 cout<<m[i]<<" ";
}
int copy(int a[], int b[])
{    int i,j,k=0;
	int c[8];
	 for(i=0,j=1; i<4,j<4; i=i+2,j=j+2)
	 {
	 	 c[k]=a[i];
	 	 c[k+1]=a[j];
		 c[k+2]=b[i];
		 c[k+3]=b[j];
	  k=k+4; 
	 }
	 cout<<"\nARRAY C:";
	 display(c,8);
	 
	
}
int main()
{
	int a[4]={1,2,3,4},b[4]={5,6,7,8};
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
	cout<<"\nENTER ARRAY A(4):";
	accept(a);
	cout<<"\nENTER ARRAY B(4):";
	accept(b);
	cout<<"\nARRAY A:";
	display(a,4);
	cout<<"\nARRAY B:";
	display(b,4);
	copy(a,b);
	cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
