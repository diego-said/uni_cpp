// Programa Par/Impar (Lista 1 - 6)
#include<iostream.h>
#include<conio.h>
void main()
{
        int n;
        clrscr();
        cout<<"Digite um numero: ";
        cin>>n;
        if((n%2)==0)
	{
		cout<<"Par";
	}
	else
	{
		cout<<"Impar";
	}
        getch();
}