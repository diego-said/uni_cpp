// IC 2 - 4
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int mat[7][7],i,j,n=0;
	for(i=0;i<=6;i++)
	{
		for(j=0;j<=6;j++)
		{
			if(i==0)
			{
				mat[i][j]=(i+10)+(j+1);
			}
			else
			{
				mat[i][j]=((i+1)*10)+(j+1);
			}
		}
	}
	for(i=0;i<=6;i++)
	{
		for(j=n;j<=6;j++)
		{
			cout<<mat[i][j]<<" ";
		}
		n=n+1;
		cout<<endl;
	}

	getch();
}