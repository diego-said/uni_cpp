#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	clrscr();
	int x=0,i;
	randomize();
	for(i=0;i<=10;i++)
	{
		x=rand() % 100;
		cout<<x<<" ";
	}
	getch();
	//gets
}