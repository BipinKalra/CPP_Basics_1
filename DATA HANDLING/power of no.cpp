#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	int n,n2,n3,n4,n5;
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
	cout<<"ENTER VALUE OF n-";
	cin>>n;
	n2=pow(n,2);
	n3=pow(n,3);
	n4=pow(n,4);
	n5=pow(n,5);	
	cout<<"POWER 2 OF "<<n<<":"<<n2<<endl
		<<"POWER 3 OF "<<n<<":"<<n3<<endl
		<<"POWER 4 OF "<<n<<":"<<n4<<endl
		<<"POWER 5 OF "<<n<<":"<<n5<<endl;
	cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
