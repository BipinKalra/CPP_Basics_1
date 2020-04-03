#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	int x,i,p,n;
	double k,res,term,sum=1;
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
	cout<<"SUM OF SERIES:x + x^2/2!..... ";
	cout<<"\nPOWER OF:";
	cin>>x;
	cout<<"ENTER NO OF TERMS:";
	cin>>n;
	int sign=1;
	for(p=1;p<=n;p++)
	{
		term=pow(x,p);
		sign=sign*(-1);
		int k=1;
		for(i=p;i>0;i--)
		{
			k=k*i;
		}
		res=term/k;
		cout<<res<<" + ";
		sum=sum+res;
	}
	cout<<endl<<endl<<"SUM:"<<sum;	
	cout<<"\n*****************************************************************************";	
	getch();
	return 0;
}
