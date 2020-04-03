#include<iostream>
#include<conio.h>
using namespace std;
int length(char a[])
{
	int c=0;
	for(int i=0;a[i]!='\0';i++)
	c++;
	return c;
}
void reverse(char a[])
{
        int i=0,j=length(a)-1,t;
       while(i<j)
      {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
		i++;
		j--;
}
cout<<"\nREVERSED STRING:";
for(i=0;a[i]!='\0';i++)
cout<<a[i];
}
int main()
{
	char a[7];
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
	cout<<"ENTER STRING:";
	cin.getline(a,7);
	reverse(a);
	cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
