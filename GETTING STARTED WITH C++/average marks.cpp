#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float e,m,p,c,cp,a;
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
	cout<<"ENTER MARKS IN:"<<endl<<"ENGLISH-";
	cin>>e;
	cout<<"MATHS-";
	cin>>m;
	cout<<"PHYSICS-";
	cin>>p;
	cout<<"CHEMISTRY-";
	cin>>c;
	cout<<"C++-";
	cin>>cp;
	a=(e+m+p+c+cp)/5;
	cout<<"AVERAGE MARKS-"<<a;
	
	cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
