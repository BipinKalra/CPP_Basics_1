//sum of n natural no.s

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,s;
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
	cout<<"ENTER VALUE OF 'n'(where n=natural no. till where sum is needed)-";
	cin>>n;
	s=(n*(n+1))/2;
	cout<<"SUM OF "<<n<<" NATURAL NO.s="<<s;
	cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
