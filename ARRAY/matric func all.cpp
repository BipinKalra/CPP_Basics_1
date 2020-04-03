#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

void accept(int m[5][5])
{
	int i,j;
	for(i=0;i<5;i++)
	{
		cout<<"\nENTER ELEMNTS OF ROW "<<i+1;
		for(j=0;j<5;j++)
		{
			cout<<"\nCOLUMN "<<j+1<<":";
			cin>>m[i][j];
		}
	}
}
void display(int x[5][5])
{
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			cout<<"\t"<<x[i][j];
			
		cout<<endl;
	}
}

void transpose(int x[5][5])
{
	int i,j,t;
	cout<<"\n\tORIGINAL MATRIX:\n";
	display(x);
	cout<<"\tTRANSPOSED MATRIX:\n";
	for(i=0;i<5;i++)
	{
		for(j=i;j<5;j++)
		{
				if(i!=j)
				{
					t=x[i][j];
					x[i][j]=x[j][i];
					x[j][i]=t;
				}
		}
	}
	display(x);
}

void upperleft(int x[5][5])
{
	int i,j,m=5;
	for(i=0;i<5;i++)
	{
		for(j=0;j<m;j++)
			cout<<"\t"<<x[i][j];
			
		cout<<endl;
		m--;
	}
}

void upperright(int x[5][5])
{
	int i,j;
	for(i=0;i<5;i++)
	{
		for(int k=0;k<i;k++)
			cout<<"\t";
			
		for(j=i;j<5;j++)
			cout<<"\t"<<x[i][j];
			
		cout<<endl;
	}
}

void downleft(int x[5][5])
{
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
			cout<<"\t"<<x[i][j];
			
		cout<<endl;
	}
}

void downright(int x[5][5])
{
	int i,j,k=0,m=4;
	for(i=0;i<5;i++)
	{
		for(k=m;k>0;k--)
			cout<<"\t";
			
		for(j=m;j<=4;j++)
			cout<<"\t"<<x[i][j];	
			
		cout<<endl;
		m--;
	}
}

void diagonalleft(int x[5][5])
{
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(i==j)
			{
				cout<<"\t";
				for(int k=0;k<i;k++)
				    cout<<" ";
				    
				cout<<x[i][j];
				cout<<endl;
			}
		}
	}
}

void diagonalright(int x[5][5])
{
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(i+j==4)
			{
				cout<<"\t";
				for(int k=5;k>i;k--)
				    cout<<" ";
				    
				cout<<x[i][j];
				cout<<endl;
			}
		}
	}
}

void rowsum(int x[5][5])
{
	int i,j;
	unsigned int sum[5]={0};
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			sum[i]+=x[i][j];
		
		cout<<"\n\tSUM OF ROW "<<i+1<<":"<<sum[i]<<endl;
	}
}

void colsum(int x[5][5])
{
	int i,j;
	unsigned int sum[5]={0};
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			sum[i]+=x[j][i];
			
		cout<<"\n\tSUM OF COLUMN "<<i+1<<":"<<sum[i]<<endl;
	}
}

void rowpro(int x[5][5])
{
	int i,j;
	unsigned int pro[5]={1,1,1,1,1};
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			pro[i]*=x[i][j];
			
		cout<<"\n\tPRODUCT OF ROW "<<i+1<<":"<<pro[i]<<endl;
	}
}
void colpro(int x[5][5])
{
	int i,j;
	unsigned int pro[5]={1,1,1,1,1};
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			pro[i]*=x[j][i];
			
		cout<<"\n\tPRODUCT OF COLUMN "<<i+1<<":"<<pro[i]<<endl;
	}
}

void lar(int a[5][5])
{
	int i,j,large,small;
	for(i=0;i<5;i++)
	{
		large=a[i][0];
		small=a[i][0];
		for(j=0;j<5;j++)
		{
			if(a[i][j]>large)
			large=a[i][j];
			else if(a[i][j]<small)
			small=a[i][j];
		}
		cout<<"LARGEST NO. IN ROW"<<i+1<<"is "<<large<<endl;
		cout<<"SMALLEST NO. IN ROW"<<i+1<<"is "<<small<<endl;
	}
}

void add(int n[5][5],int m[5][5])
{
	int i,j;
	int s[5][5];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			s[i][j]=n[i][j]+m[i][j];
			cout<<s[i][j]<<"\t";
		}
		cout<<endl;
	}
}

void sub(int n[5][5],int m[5][5])
{
	int i,j;
	int s[5][5];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			s[i][j]=n[i][j]-m[i][j];
			cout<<s[i][j]<<"\t";
		}
		cout<<endl;
	}
}
int main()
{
	int a[5][5]={1,-2,3,4,10,
				5,6,-7,8,25,
				-9,10,11,12,19,
				13,15,-20,65,65,
				19,26,35,36,25};
	int b[5][5]={10,20,-30,50,40,
				55,12,-12,-78,56,
				63,12,-11,10,5,
				2,3,-1,0,9,
				99,-100,200,35,65};
	int ch;
	char ans;
	do
	{
	system("cls")	;
	cout<<endl<<endl;
	cout<<"*****************************************************************************";
	cout<<endl<<endl;
		cout<<"\n\tMENU:\n";
		cout<<"\t1.ACCEPT THE MATRIX(5*5)\n";
		cout<<"\t2.DISPLAY THE MATRIX\n";
		cout<<"\t3.TRANSPOSE THE MATRIX\n";
		cout<<"\t4.UPPER TRIANGLES\n";
		cout<<"\t5.LOWER TRIANGLES\n";
		cout<<"\t6.DIAGONAL ELEMENTS\n";
		cout<<"\t7.ROW AND COLUMN SUM\n";
		cout<<"\t8.ROW AND COLUMN PRODUCT\n";
		cout<<"\t9.LARGEST AND SMALLEST No. IN EACH ROW\n";
		cout<<"\t10.ADD BOTH MATRIX\n";
		cout<"\t11.SUBTRACT BOTH MATRIX\n";
		cout<<"\t0.EXIT\n";
		cout<<"\tENTER YOUR CHOICE:";
		cin>>ch;
		
		switch(ch)
		{
			case 1: accept(a);
					cout<<endl;
					accept(b);
					break;
			case 2: display(a);
					cout<<endl;
					display(b);
					break;
			case 3: transpose(a);
					cout<<endl;
					break;
			case 4: upperleft(a);
					cout<<endl;
					upperright(a);
					cout<<endl;
					break;
			case 5: downleft(a);
					cout<<endl;
					downright(a);
					cout<<endl;
					break;
			case 6: diagonalleft(a);
					cout<<endl;
					diagonalright(a);
					cout<<endl;
					break;
			case 7: rowsum(a);
					cout<<endl;
					colsum(a);
					cout<<endl;
					break;
			case 8: rowpro(a);
					cout<<endl;
					colpro(a);
					cout<<endl;
					break;	
			case 9: lar(a);
					break;	
			case 10:add(a,b);
					break;
			case 11:sub(a,b);
					break;
			case 0: exit(0);
					break;
			default:cout<<"\n\tINVALID CHOICE";
			
		}
		cout<<"\n\tDO YOU WANT TO CONTINUE(y/n)";
		cin>>ans;
	}
	while(ans!='n');
	cout<<"\n*****************************************************************************";
	getch();
	return 0;
}
